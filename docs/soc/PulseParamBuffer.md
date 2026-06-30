# PulseParamBuffer — DSP-side register file for one pulse generator

**Source:** `src/riscq/soc/rf/PulseParamBuffer.scala` · **Package:** `riscq.soc.rf` · **Type:** Component

The converter-edge register file for a single [PulseGenerator](../dsp/PulseGenerator.md): it holds that
generator's pulse table, `freq`, `startTime` and a local `time` copy, all driven by the demuxed **posted**
`Flow(RfCmd)` (no TileLink, no D channel), and emits the parameter `Flow`s plus `time`/`startTime` to the
generator. It is the *only* part of the per-generator control state that must sit at the converter edge
with the generator — its sole CPU-facing input is a narrow `Flow`.

## Role in the system

```
  RfLink demux ── Flow(RfCmd) ──▶ PulseParamBuffer ──▶ PulseGenerator ──▶ DAC
  time broadcast ───────────────▶  (table / freq /        (lead-time
                                    startTime / time)       TimedQueues)
```

It replaces the old per-peripheral TileLink `SlaveFactory` with a register file decoded directly off the
one-way `RfCmd` stream. Packaged with its generator into a [PulseDriveChannel](RfChannels.md) — the box the
floorplan pins.

## What the posted stream writes

The `cmd` address (combinationally decoded; `cmd` is already a registered handoff) selects the target. The
address map follows the RF register layout the control software writes (see `PulseParamBufferParams`):

- `fire`@0x0 — writing the table index `outId` **enqueues** that entry at the current `startTime`.
- `freq`@0x4 — the shared carrier frequency (16-bit field at bit 16).
- `table[i]` at `(i+1)*0x10` — `+0` phase, `+4` amp, `+8` env (envelope base address), `+12` dur.
- `startTime`@0x4100 — **this buffer's own** `startTime` register.

Each beat writes exactly one field of one entry (the decode arms are mutually exclusive). Reset/init is all
zero, so an un-programmed or spurious-reset fire reads a benign `dur = 0`.

## Design rationale & contracts

- **Per-buffer `startTime`, written on the same posted path as the fire.** `startTime` is *not* broadcast;
  it is a buffer-local register written by this buffer's own `RfCmd` stream. Because `startTime` and the
  `outId` fire share one **ordered** posted path, the fire always enqueues *exactly* the value just
  written — no cross-path race between a separately-broadcast `startTime` and a separately-posted fire
  ([ARCH](ARCH.md) §5.3).
- **The same-cycle-rise contract is now software + one structural rule.** With per-buffer `startTime`, the
  guarantee that two channels given the *same* `startTime` rise on the *same* output cycle moves from a
  shared hardware register to a **software contract**: software must write the *same* `startTime` value to
  both buffers. Hardware backs it with one structural requirement — the local `time` copy is a single
  `RegNext(io.timeBcast)` tagged `EQUIVALENT_REGISTER_REMOVAL=NO`, so every buffer has **equal `time`
  broadcast delay**; equal values then imply the same cycle.
- **The load-bearing software lead-time contract.** Software must program `startTime` far enough ahead that
  the posted write *arrives before* `time` reaches it. The constant link delay `D` makes the core's `time`
  copy read `dspTime − D`, so a CPU `startTime = localTime + lead` fires at `dspTime + (lead − D)` — a
  constant, predictable effective lead. The requirement is `lead − D > down-link latency`. This is the
  invariant the whole posted-link architecture rests on — see [RfLinkBridge](RfLinkBridge.md),
  [ARCH](ARCH.md) §2, and the `TimedQueue` lead-time pop in [PulseGenerator](../dsp/PulseGenerator.md) /
  [TimedQueue](../dsp/TimedQueue.md).
- **Bit-exactness.** The fire path is a `Reg(Flow)` plus `Delay` staging, and `freq` gets one extra output
  register stage; both keep the generated pulse bit-identical to the standalone `PulseGenerator` golden
  (`freq` is queued against the per-buffer `startTime`, which is not rewritten between the `freq` write and
  the fire, so the extra delay is timing-invisible). Both output `valid`s init `False` for a reset-clean
  start (no X-driven spurious fire at t=0).

## Parameters that matter

`PulseParamBufferParams` — `pulseNum` (table depth; gate drive uses several, readout drive uses 1),
`addrWidth` (the RF sub-window width), and **`useMem`**: the table is either a flip-flop `Vec` register
file (combinational read, direct per-field write — the default) **or** a distributed-RAM `Mem`
(async-read; drops the table out of FFs to cut control sets / reset FFs, at the cost of a per-field
read-modify-write). The two storage styles are bit-identical. Field/time/address widths are derived from
the generator's ports — see the source for the full list.

## Verification

`riscq.soc.sim.PulseParamBufferSim` drives the buffer's posted `Flow(RfCmd)` directly (write `startTime`,
`freq`, a table entry, then fire by writing `outId`), feeds its output `Flow`s into a real
[PulseGenerator](../dsp/PulseGenerator.md), and checks the pulse **bit-exact vs the existing PulseGenerator
golden** — proving the posted-link register file is value-preserving (offsets, `bitOffset=16` field
packing, fire semantics, per-buffer `startTime`). It also asserts the valid window is exactly `dur` long
and that both pulses share the same bulk latency. The `useMem` table style is A/B'd via
`RISCQ_PARAMBUF_USEMEM`.

```bash
mill runMain riscq.soc.sim.PulseParamBufferSim
```

## Related

- [RfChannels](RfChannels.md) — `PulseDriveChannel` packages this buffer with its generator.
- [PulseGenerator](../dsp/PulseGenerator.md) / [TimedQueue](../dsp/TimedQueue.md) — the consumer and the lead-time pop.
- [RfLink](RfLink.md) / [RfLinkBridge](RfLinkBridge.md) — the posted stream feeding it.
- [ARCH](ARCH.md) §5.2–5.3 — per-buffer `startTime` and the same-cycle-rise contract.
