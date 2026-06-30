# TimedQueue — lead-time fire scheduler (`riscq.dsp.pulse`)

**Source:** `src/riscq/dsp/pulse/TimedQueue.scala`, `src/riscq/dsp/pulse/TimedQueueVariants.scala`
· **Package:** `riscq.dsp.pulse` · **Type:** Component(s) over a shared `TimedQueueIo` / `TimedQueueLike`

A queue that **latches `startTime` at enqueue and pops/fires at the exact `dspClk` cycle the head
becomes due** (`time == startTime − leadTime`). This is the primitive that **decouples
enqueue-arrival-time from fire-time** — the property the whole posted-link SoC architecture is built
on.

## Why it matters

The CPU is a *lead-time scheduler, not a real-time driver*: it writes a pulse table entry plus
`startTime = time + lead`, then "fires" by writing an index, and the DSP-side queue emits the pulse at
the precise cycle `time` reaches `startTime`. Because the queue fires on the *value* of `startTime`,
not on when the entry arrived, a **long, pipelined, posted** link from core to DSP costs only a
constant latency that the lead absorbs — nothing on that path is timing-critical. See
[SoC ARCH](../soc/ARCH.md) §2 for the full rationale. The same registered-compare idea is reused inline
(at depth 1) inside the [ReadoutDecoder](ReadoutDecoder.md) to schedule its integration window.

## Contract

- **`io.push`** — `Stream(TimedEntry{data, startTime})`. A `Stream` (not a `Flow`) so Tilelink glue
  sees backpressure when the queue is full.
- **`io.pop`** — `Flow(data)`. Fires **once per entry**, at `time = startTime − leadTime`. External
  cmd→pop **latency is 0** for every implementation.
- **`io.time`** — the external SoC batch-time counter (a +1/cycle counter).

`leadTime` is the consumer path's latency to the DAC, so the entry is popped that many cycles early and
the pulse lands at the converter at exactly `startTime`. `timeOffset` is an extra calibration constant
folded into the due test. The compare is **wrap-safe** — it uses the signed difference, correct for any
schedule within `±2^(timeWidth−1)` of now, so the time counter wrapping `2^timeWidth` is a non-event.

`TimedEntry`, `TimedQueueIo`, and the `TimedQueueLike` trait are shared by all implementations, so one
testbench body drives any of them.

## The three implementations and why they exist

The active toplevel uses the RISC-Q-style `TimedQueue`; the two variants in
`TimedQueueVariants.scala` are kept for swap-in. All share the same `io` and the same external
contract, so any one drops into the toplevel by renaming.

| Implementation | II | latency | storage | the trade |
|---|---|---|---|---|
| `TimedQueue` (active) | ≥ 2 | 0 | `StreamFifo` | registered compare — leanest LUT, but no back-to-back |
| `TimedQueueRegArray` | 1 | 0 | register array | per-slot registered due bit |
| `TimedQueueDeadline` | 1 | 0 | `StreamFifo` | precomputed deadline, combinational compare |

**`TimedQueue` (active).** A `StreamFifo` of `{data, startTime}` whose wrap-safe due test is
**registered** and then edge-detected to fire once:

```
due    = !((time + (leadTime + timeOffset + 1) − startTime).msb)   // wrap-safe geq
timeUp = RegNext(head.valid && due)                                // the 32-bit compare, registered
blank  = RegNext(pop.valid)                                        // fire-once / drain blank
pop    = head.valid && timeUp && !blank
```

Putting the 32-bit compare *between registers* keeps it off the combinational `pop.valid → consumer`
critical path, at roughly half the LUTs of a per-slot-registered queue — this is how the RISC-Q design
reaches its high fmax. The `+1` inside the compare cancels the compare register's cycle, so the pop
still asserts at exactly `time = startTime − leadTime` (latency stays 0). The cost is **no back-to-back
II=1**: the `blank` cycle that makes the edge-detect fire once also means several already-due entries
drain one every two cycles. This never binds in practice — the pulse generator spaces each parameter's
updates far apart; II=1 only matters for malformed/overlapping schedules. When it *is* needed, swap in
a variant.

**`TimedQueueRegArray`.** A register buffer that stores each slot's data, precomputed
`deadline = startTime − lead`, and a **registered due bit** maintained *every cycle for every slot* via
the identity `RegNext(time+1 ≥ d) ≡ (time ≥ d)` (valid because `time` is a +1/cycle counter). Because
the next head's due bit is already correct when the current entry pops, it drains consecutive due
entries **one-per-cycle (II=1)** with the 32-bit compares register-to-register. Cost: one comparator
per slot instead of the active queue's single one.

**`TimedQueueDeadline`.** Keeps the `StreamFifo` but stores the precomputed `deadline = startTime −
lead` (a constant subtract registered at push) instead of `startTime`, so the per-cycle pop test is a
single subtract `time − deadline` rather than add-then-subtract. **II=1, latency 0**, leanest of the
II=1 options — but the compare is still *combinational* on the `pop.valid` path (the active queue's
registered compare is what it gives up for II=1).

## Storage levers on the active queue

`TimedQueue` exposes two flags that trade fmax against routing congestion (FPGA control-set count):

- `useVec` — `false` (default) puts the payload in a distributed-RAM `Mem` (one write port ⇒ per-slot
  control sets vanish); `true` is a register array giving every slot its own write-enable (higher
  fmax, the GShare-like per-slot control-set pattern).
- `forFMax` — `false` (default) uses plain binary FIFO pointers; `true` adds the fmax-tuned gray /
  empty-tracker pointer machinery.

The default `useVec = false, forFMax = false` is the **congestion-best** config. The FIFO uses
`withAsyncRead = true` so the head is combinationally available for the registered due test, keeping
external latency at 0.

## Usage

```bash
mill runMain riscq.dsp.pulse.sim.TimedQueueSim          # active RISC-Q-style queue
mill runMain riscq.dsp.pulse.sim.TimedQueueVariantsSim  # the II=1 variants
```

## Verification

`riscq.dsp.pulse.sim.TimedQueueSim` runs a **cycle-accurate mirror** of the hardware FSM in lock-step
— it models the registered compare and the fire-once `blank` exactly and asserts `pop` equal every
cycle — over scenarios: clean well-spaced timing, past-due (drains II=2), full-queue backpressure,
time wrap-around, a calibration `timeOffset`, and a long randomized near-future schedule, checking the
precise pop cycle, the wrap-safe geq, and in-order completeness.

`riscq.dsp.pulse.sim.TimedQueueVariantsSim` drives both variants through one body against a
*combinational* due model (`pop == (time + lead ≥ startTime)` for the head every cycle), confirming
they drain back-to-back due entries **one-per-cycle (II=1)** while passing the same exact-cycle,
backpressure, wrap, and in-order checks.

## Related

- [PulseGenerator](PulseGenerator.md) — the main consumer (fires parameter updates to the carrier /
  [EnvelopeReader](EnvelopeReader.md) paths).
- [ReadoutDecoder](ReadoutDecoder.md) — reuses the registered-compare due test inline.
- [SoC ARCH](../soc/ARCH.md) §2 — the lead-time scheduler rationale this enables;
  [PulseParamBuffer](../soc/PulseParamBuffer.md) — the DSP-side register file that drives the queue.
