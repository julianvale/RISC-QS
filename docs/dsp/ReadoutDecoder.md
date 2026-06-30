# ReadoutDecoder — demodulating readout integrator (`riscq.dsp.pulse`)

**Source:** `src/riscq/dsp/pulse/ReadoutDecoder.scala`, `src/riscq/dsp/pulse/ReadoutGen.scala`
· **Package:** `riscq.dsp.pulse` · **Type:** Component (`ReadoutDecoder`) + params case class

The **inverse of the [PulseGenerator](PulseGenerator.md)**, and the back end of a dispersive qubit
readout. Where the pulse generator *synthesises* a complex-envelope pulse onto a carrier, the readout
decoder *demodulates* an incoming ADC batch against a reference carrier (the digital LO), *integrates*
the product over a scheduled measurement window, and emits the integrated I/Q point plus a one-bit
state discrimination.

```
demod[t][k] = adc[t][k] · carrier[t][k]        // complex × complex, per lane k  (down-conversion)
real/imag   = Σ_{t ∈ window} Σ_k demod[t][k]    // integrated I / Q
res         = sign(real)                        // 1-bit discrimination, threshold 0 on the real axis
```

One tick of `io.time` is one **batch** of `batchSize` (= N) ADC samples; the module runs at
ADC-rate / N on `dspClk`.

## Role in the system

Lives at the converter edge in the SoC's DSP region. Its inputs:

- `io.adc` — one ADC batch per cycle (the captured readout tone).
- `io.carrier` — the reference LO batch from a [DemodCarrierGenerator](DemodCarrierGenerator.md), fed
  a software `freq`/`phase`. Because `adc[t]` and `carrier[t]` carry the *same* batch timestamp and go
  through the *same* demod pipeline, the product is lane- and time-aligned by construction — no
  per-lane skew to manage.
- `io.time` / `io.startTime` — the global batch-time counter and the window start (the lead-time
  scheduling contract, below).
- `io.dur` (`Flow`) — arms a readout window of `dur` length; written by software (posted `RfCmd`).

Its outputs: `io.real`/`io.imag` (the raw integrated I/Q, read back by software as one word each),
`io.res` (`Flow(Bool)`, valid once the integral settles — the SoC halts the readback bus on it; see
[ReadoutResultLink](../soc/ReadoutResultLink.md)), and `io.demodData` (`Flow(ComplexBatch)`, the raw
per-batch demod trace for capture/averaging and the SoC `robs` fire trace).

## Pipeline

```
adc[k]     ─▶ ComplexMul[k] ─ demod[k] ─┬─▶ Flow demodData            (per-batch trace, valid in-window)
carrier[k] ─▶  (per lane)               │
                                        ├─▶ +reg─▶ AdderTree(Re) ─▶ +─accumulate─▶ sumR ─▶ msb ─▶ res
                                        └─▶ +reg─▶ AdderTree(Im) ─▶ +─accumulate─▶ sumI       real/imag
time, startTime, dur ─▶ window scheduler (arm → fire) ─▶ FSM (idle → sampling → settle → res.valid)
```

- **Demod** reuses `riscq.dsp.ComplexMul` (the same DSP48-packed, II=1 product the pulse side uses) —
  see [ComplexMul](ComplexMul.md). One `ComplexMul` per lane; the `rsp.valid` chain is dropped
  (`resetValid = false`) because integration is gated by the time compare, not the mul's valid.
- **Lane sum** is the balanced [AdderTree](AdderTree.md) (`reduceBalancedTree(_ + _, RegNext)`), with
  one extra input register, *not* a hand-indexed buffer heap. Splitting "sum across lanes" (a tree,
  one batch) from "sum across batches" (a single feedback accumulator) keeps each adder narrow.
- **Window accumulator** `sumR`/`sumI` reset at `fire` and add the tree output every cycle while
  `integrating`. The datapath is free-running; the FSM only gates the accumulate, so control never
  sits in the multiply/tree path.

`KEEP_HIERARCHY = TRUE` fences the component so its N `ComplexMul`s pack into DSP48E2s per-instance
(3 DSP48E2 per lane, demod only) rather than spilling to LUTs via the global resource balancer; the
adder tree and accumulator are fabric CARRY8.

## Derived window alignment (the load-bearing contract)

The central rule, mirroring the pulse side's lead-time derivation — **no magic timing constants.** The
accumulator reads the tree output `Ldemod` cycles after the corresponding ADC batch entered, where

```
Ldemod = ComplexMul.latency(saturate) + 1 + log2Up(N)      // exported as demodLatency
```

So the scheduler fires when `io.time` reaches `startTime + fireOffset`, with
`fireOffset = Ldemod − 1 + timeOffset`. With `timeOffset = 0` the integrated batches are **exactly**
those whose timestamps fall in the closed interval `[startTime, startTime + dur]` — that is `dur + 1`
batches (the end-to-end sim asserts this, and cross-checks that a +1-shifted window does *not* match,
so an off-by-one would be caught). Every offset is a sum of exported sub-block latencies, so a future
pipeline edit to `ComplexMul` or the tree shifts the alignment automatically.

`timeOffset` is the single external calibration knob (converter/cable latency, `≥ 0`); the params
`require` `fireOffset ≥ 1`.

**Registered fire.** The wrap-safe due test `io.time ≥ threshold` is evaluated **one cycle early and
registered**, so the `fire` that gates the I/Q accumulators and the FSM is a flop, not the long 32-bit
compare (which was the critical control path). The threshold `startTime + (fireOffset − 1)` is
precomputed at arm, keeping `io.startTime` off the compare path; the `−1` pays back the buffer
register, so the registered `fire` still lands at `io.time = startTime + fireOffset` and the window is
identical to an unbuffered design.

## Discrimination & accumulator width

`io.res.payload = sumR.msb` — `sign(sumR)`, a fixed threshold of 0 on the real axis (`true` ⇒
negative). The raw `real`/`imag` are exposed so software applies its own IQ rotation/threshold
off-line. A single readout slot is pending at a time (`armed`); a future multi-readout would swap the
arm/due logic for a depth-`d` [TimedQueue](TimedQueue.md), and a programmable IQ-rotation
discriminator is a future optional stage.

The accumulator must not overflow over the longest window, enforced by
`require(accWidth ≥ dataWidth + log2Up(batchSize) + durWidth)` (worst case: per-lane `Amax` · N lanes
· `2^durWidth` batches). The default `accWidth = 32` satisfies the default config.

## Latency & timing

- ADC batch → tree output: `Ldemod` cycles (see above).
- `res.valid` rises one settle cycle after the last accumulate (the final add registering into `sumR`).
- `io.demodData` is valid for exactly `dur + 1` cycles per window; its payload lags the ADC input by
  `ComplexMul.latency` (the demod latency) and lags the *integrated* batches by the tree latency
  `1 + log2Up(N)`.
- Closes comfortably above the 500 MHz target — OOC post-route in the ~720 MHz range on the `-2` part
  (N=16, w=16, `saturate=false`).

## Interface & configuration

`ReadoutDecoderParams(batchSize, dataWidth, accWidth, timeWidth, durWidth, timeOffset, saturate)` —
see the source for the exhaustive field list. The two that change behaviour:

- `timeOffset` — the external calibration shift of the integrated window vs `startTime` (above).
- `saturate` — threaded straight into the per-lane `ComplexMul`; default `false` matches
  `PulseGeneratorParams.saturate`, so a paired generate/decode SoC shares one mode. With
  `saturate = false` the operands must stay inside the unit disk (`|adc|, |carrier| < 1`), which the
  converter scaling and LO amplitude already guarantee.

The component exports `mulLatency` and `demodLatency` for the SoC's time-alignment math.

## Usage

```bash
mill runMain riscq.dsp.pulse.ReadoutGen               # emit ReadoutDecoder.v
mill runMain riscq.dsp.pulse.sim.ReadoutDecoderSim    # end-to-end golden integral + window
```

## Verification

`riscq.dsp.pulse.sim.ReadoutDecoderSim` drives a free-running tone (`adc = ±conj(carrier)`, so the
demod is `±|carrier|²` — a clean positive/negative integral exercising both `res` signs) and two
scheduled windows, checking against a **golden model composed from the per-block bit-exact models**
(`ComplexMul.model` per lane, summed across lanes and the window): `real`/`imag` bit-exact, the derived
window alignment (with the +1-shift sharpness cross-check), `res.payload == sign(real)` (low during
integration, valid after settle), and `demodData` valid for exactly `dur + 1` cycles with bit-exact
payload. Runs for `saturate` false and true.

## Related

- [PulseGenerator](PulseGenerator.md) — the forward path this inverts (shares the lead-time philosophy).
- [DemodCarrierGenerator](DemodCarrierGenerator.md) — produces `io.carrier` (the LO).
- [ComplexMul](ComplexMul.md), [AdderTree](AdderTree.md) — the reused datapath blocks.
- [DSP48](DSP48.md) — DSP48E2 packing notes; [DSP](DSP.md) — number formats.
- [SoC ARCH](../soc/ARCH.md) §2 — why lead-time scheduling makes the result link distance-tolerant;
  [ReadoutResultLink](../soc/ReadoutResultLink.md) — how `res`/`real`/`imag` return to the core.
