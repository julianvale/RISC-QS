# DemodCarrierGenerator — readout reference carrier / demod NCO (`riscq.dsp.pulse`)

**Source:** `src/riscq/dsp/pulse/DemodCarrierGenerator.scala` · **Package:** `riscq.dsp.pulse`
· **Type:** Component

The digital LO for the [ReadoutDecoder](ReadoutDecoder.md): a free-running NCO that produces the
reference carrier batch the decoder mixes the incoming ADC against. Each cycle it emits one
`ComplexBatch(N, w)` of N per-lane carrier samples,

```
carrier[k](t) = amp · exp(iπ·(freq·(N·t + k) + phase)) ,   k = 0 .. N−1
```

computed from the *absolute* batch time `io.time`, so the LO stays phase-coherent across arbitrary
gaps (a readout window can start at any time without a phase glitch).

## Role in the system

In the SoC it sits inside the `DemodChannel` at the converter edge: a degenerate
[PulseParamBuffer](../soc/PulseParamBuffer.md) posts the software `freq`/`phase`, and the generator's
`io.carrier` feeds `ReadoutDecoder.io.carrier`. It is *not* gated by `startTime`/a queue — the LO runs
continuously and the decoder picks the window.

## Relation to the drive-side carrier

It is the [PulseGenerator](PulseGenerator.md) carrier path with two deliberate differences:

1. **No scheduling.** The drive side gates its carrier batch behind the timed parameter queue; the
   demod LO is free-running (a measurement just integrates a window of an always-on reference).
2. **Hard-wired full-scale amplitude.** There is no per-pulse `amp` `Flow` and no envelope multiply —
   the amplitude rides the carrier CORDIC's `x` input directly, so there is one fewer multiply than the
   drive path.

Internally it composes the same two verified blocks:

- [PhasorBatchGenerator](PhasorBatchGenerator.md) regenerates the static per-lane phasors
  `amp·exp(iπ·freq·k)` whenever `freq` is written.
- [CarrierBatchGenerator](CarrierBatchGenerator.md) combines them with the time-dependent factor
  `amp·exp(iπ·(freq·N·t + phase))` recomputed from `io.time` every cycle.

The datapath is pure `SInt` (no AFix), unlike the RISC-Q reference.

## Amplitude derivation (the non-obvious part)

`amp` is **derived, not a literal**, exactly the way `PhasorBatchGenerator` derives its CORDIC input
magnitude, so the carrier and the phasors share one scale:

- with `saturate = false`, the magnitude is pulled in below full scale by the CORDIC error bound, so
  the un-clamped rotation keeps enough headroom never to overflow;
- with `correctGain = false`, it is additionally prescaled by `1/K` to cancel the un-corrected CORDIC
  processing gain.

This shared, derived scale is what lets the composed `Cordic(amp,0,gPhase) · phasor[k]` product stay
bit-exact and overflow-free (verified, below).

## Interface & configuration

Ports: `io.time` (in), `io.phase` / `io.freq` (`Flow(SInt(w))` posted writes — a `freq` write triggers
the phasor regen), `io.carrier` (`out ComplexBatch(N, w)`).

`DemodCarrierGenerator(batchSize, dataWidth, timeWidth, correctGain = true, saturate = false,
phasorMethod = Cordic)`. `correctGain`/`saturate` set the CORDIC mode (see [Cordic](Cordic.md));
`phasorMethod` picks the phasor-LUT method. It exports `timeLatency`, `phaseLatency`, and
`freqRegenCycles` for the SoC's time-alignment derivation. `KEEP_HIERARCHY = TRUE` keeps the composed
`ComplexMul`s packed into DSP48E2s per-instance.

## Usage

```bash
mill runMain riscq.dsp.pulse.sim.DemodCarrierGeneratorSim
```

(There is no standalone `Gen` target — it is elaborated inside the SoC's `DemodChannel`.)

## Verification

`riscq.dsp.pulse.sim.DemodCarrierGeneratorSim` drives one held `freq`/`phase` and, for a sweep of
times (including large and `2^timeWidth`-straddling values that exercise phase coherence across the
counter wrap), checks `io.carrier[k]` two ways, exactly as `CarrierBatchGeneratorSim`: **bit-exact** vs
the composed model `ComplexMul(Cordic(amp,0,gPhase), phasor[k])`, and within the composed
CORDIC-through-`ComplexMul` error bound vs the ideal `Double` reference. Runs `correctGain` true/false
× `saturate` true/false.

## Related

- [ReadoutDecoder](ReadoutDecoder.md) — the consumer (mixes `io.carrier` against the ADC).
- [PulseGenerator](PulseGenerator.md) — the drive-side carrier this mirrors.
- [CarrierBatchGenerator](CarrierBatchGenerator.md) / [PhasorBatchGenerator](PhasorBatchGenerator.md) —
  the composed blocks; [Cordic](Cordic.md), [ComplexMul](ComplexMul.md) — the primitives.
- [DSP](DSP.md) — number formats.
