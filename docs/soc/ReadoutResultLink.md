# ReadoutResultLink — the readout result up-path

**Source:** `src/riscq/soc/link/ReadoutResultLink.scala` · **Package:** `riscq.soc.link` ·
**Type:** Bundle + source helper (`object ReadoutResultLink`) + `ReadoutResultSink` (`Area`)

The link's **only** return path: the readout decoder's settled result travels **upstream** (DSP → core)
on a narrow posted `Flow` into a near-core register the CPU polls **locally**. This makes the halting `res`
read a short local arc instead of a long bus round-trip, so the core can still be floorplanned far from the
converters. It is the up-direction counterpart to the down-link ([RfLinkBridge](RfLinkBridge.md) /
[RfLink](RfLink.md)).

## Role in the system

```
  ReadoutDecoder ──res.valid edge──▶ source() ── Flow(ReadoutResult) ── linkPipe ──▶ ReadoutResultSink ──▶ CPU
        (DSP region)                                  posted, up, no ack            (core region, local halt)
```

`ReadoutResult` carries the decoder's integrated point: the 1-bit discrimination `res` plus the integrated
I/Q (`real`/`imag`, `accWidth` bits each). See [ReadoutDecoder](../dsp/ReadoutDecoder.md) for what those
values mean.

## Why a posted up-`Flow`, not a bus read

The decoder result is the one CPU read that genuinely lives at the converter edge (the other RF reads —
`time`, `waitTimeCmp`, `fromHost` — are made core-local; see [ControlMemMaps](ControlMemMaps.md)). A
back-pressured halting read across a long bus would stall the CPU there-and-back for the whole round-trip,
defeating the point of moving the core away. Instead the decoder **pushes** the result up once per window
and the CPU halts on a **local** copy: the software contract (`res` read blocks until the integral settles)
is identical, but the halt is a short local arc. Only this one bundle ever travels back across the gap —
[ARCH](ARCH.md) §5.4.

## The two ends

### `ReadoutResultLink.source(...)` (DSP side)

Emits **one** posted beat on the **rising edge** of the decoder's `res.valid`. The edge — not the level —
matters: `resValid` stays high until the next window arm, so forwarding it raw would re-set the sink *after*
a local arm-clear and resurrect a stale result. The single-beat-on-edge keeps exactly one fresh datum on
the link per completed window.

### `ReadoutResultSink(...)` (core side)

Latches `{res, real, imag}` when a beat arrives and exposes a `valid` flag. Its `mapping(factory)`
contributes the readout decoder's read map to a core-local [MemMapFiber](MemMapFiber.md): `res`@4 (HALTS
the read locally until `valid`), `real`@8, `imag`@12. Two invariants make it correct:

- **Freshness.** `valid` is **cleared on window-arm** (`arm`, pulsed on the CPU's local `dur`-write to the
  decoder), so a stale result from the previous window can never be read. The arm-clear and the up-beat are
  sequenced by the single-pending-readout software contract: the CPU arms a window, then reads `res`
  (halting) before arming the next.
- **Same-cycle race.** When a beat and an `arm` land the same cycle, the **fresh beat wins** (it is the
  newer datum) — the `when(resultIn.valid)` write follows the `when(arm)` clear.

## Latency / timing

The up-path adds `linkPipe` plain `RegNext` stages (default 4), absorbed like the down-link. The sink read
and its halt are local single-cycle arcs. Pipe depth is a floorplan knob, never a timing-closure one.

## Configuration

`ReadoutResultSink(accWidth, resAddr = 4, realAddr = 8, imagAddr = 12)` — `accWidth` must match the
decoder's accumulator width; the three offsets keep the CPU-visible map reference-compatible.

## Verification

`riscq.soc.sim.ReadoutResultLinkSim` runs a real [ReadoutDecoder](../dsp/ReadoutDecoder.md) integrating a
tone over two scheduled windows; the result is posted up through `source`, pipelined, and latched by the
sink. The CPU (a `MasterAgent`) reads `res`/`real`/`imag` from the sink's **local** map — the `res` read
halts locally until the integral settles — and the values are checked **bit-exact** vs the windowed-demod
golden. The `dur`-arm is posted down (also pipelined) while the sink's `valid` is cleared locally on the
same arm, proving freshness (window B's arm clears window A's just-read result). Swept over
`linkPipe ∈ {0, 4, 16}` to show distance-tolerance.

```bash
mill runMain riscq.soc.sim.ReadoutResultLinkSim
```

## Related

- [ReadoutDecoder](../dsp/ReadoutDecoder.md) — produces `{res, real, imag}` and `res.valid`.
- [RfLink](RfLink.md) / [RfLinkBridge](RfLinkBridge.md) — the matching down-link.
- [ControlMemMaps](ControlMemMaps.md) — the other (core-local) RF reads.
- [ARCH](ARCH.md) §5.4 — the read-path split.
