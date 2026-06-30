# RfChannels — `PulseDriveChannel` / `DemodChannel` converter-edge boxes

**Source:** `src/riscq/soc/rf/RfChannels.scala` · **Package:** `riscq.soc.rf` · **Type:** Components

The two self-contained converter-edge boxes the floorplan pins. Each binds a DSP datapath block to a
DAC/ADC edge and exposes a single CPU-facing input — the demuxed posted `Flow(RfCmd)` plus the shared
`time` broadcast — so the core can be floorplanned far from the converters. They are thin wiring: a
[PulseParamBuffer](PulseParamBuffer.md) (or a degenerate variant) driving a DSP generator.

## `PulseDriveChannel` — a gate/readout drive bound to a DAC

```
  Flow(RfCmd) ─▶ PulseParamBuffer ─▶ PulseGenerator ─▶ io.pulse (real lane → DAC)
  time bcast  ─▶                                    ─▶ io.memPort (external envelope RAM)
```

A [PulseParamBuffer](PulseParamBuffer.md) + a [PulseGenerator](../dsp/PulseGenerator.md) + its
envelope-RAM read port, packaged into one Component. **No registers cross the Component boundary**, so the
emitted pulse is bit-identical to the un-packaged composition — the box is purely a floorplan/packaging
unit. Its only CPU-facing input is the `RfCmd` Flow; it emits the DAC `pulse` and forwards an external
envelope-memory `MemReadPort` (the host-writable envelope RAM lives outside the channel, in
[RiscqRfWithPulseTableFiber](RiscqRfWithPulseTableFiber.md)). Used twice per qubit core: gate drive
(`pulseNum` several) and readout drive (`pulseNum = 1`).

`realOutput` is set `true` here — only the real lane reaches the DAC, so the generator ties its imaginary
output off internally, letting synthesis prune the dead imag multiply (the DSP-saving reason is in
[SOC_TIPS](SOC_TIPS.md) §7.7).

**`useAligned` variant.** With `useAligned = false` (default) the channel drives a `PulseGenerator` whose
parameters each ride their own lead-time `TimedQueue`. With `useAligned = true` it drives
`PulseGeneratorAligned` — the QubiC-style single combined-params FIFO + SRL alignment — instead. The
emitted pulse is **bit-identical** either way; only the alignment hardware differs (a few percent of LUTs
vs a few percent of post-route fmax). See [QUBIC_DATAPATH_COMPARISON](QUBIC_DATAPATH_COMPARISON.md) §5.

## `DemodChannel` — the demod LO

A **degenerate** channel for the readout demod: it takes only two posted writes — `freq`@0 and `phase`@4 —
decoded straight off the demuxed `RfCmd` into a free-running `DemodCarrierGenerator`. There is **no table,
no `startTime`, no envelope**: the local oscillator is *not* gated by a window, it runs continuously, so
none of the pulse-fire machinery applies. It exposes `io.carrier` for the paired
[ReadoutDecoder](../dsp/ReadoutDecoder.md), which demodulates the ADC against it. The `time` input gets the
same single `RegNext(..., EQUIVALENT_REGISTER_REMOVAL=NO)` low-fanout copy as a `PulseParamBuffer`, keeping
its delay uniform with the drive channels.

## Interface & configuration

Both are parameterized by the datapath widths (`batchSize`, `dataWidth`, `timeWidth`, …) and the DSP
options (`saturate`, `phasorMethod`, `prescaleAmp`/`correctGain`); `PulseDriveChannel` adds `pulseNum`,
`memLatency`, `realOutput`, `paramBufferUseMem`, and `useAligned`. The RF address offsets (`fireAddr`,
`freqAddr`, `phaseAddr`, …) default to the reference-compatible layout. See the source for the full field
list; the qubit core wires both in `RiscqRfWithPulseTableFiber.mkDriveChannel` / the `posted` area.

## Verification

No dedicated channel sim — the channels are thin packaging, signed off transitively:
[PulseParamBuffer](PulseParamBuffer.md) by `PulseParamBufferSim` (the register file bit-exact vs the
generator golden), the generators by the DSP goldens (`PulseGeneratorSim` / `PulseGeneratorAlignedSim` /
`ReadoutDecoderSim`), and the assembled channels end-to-end by `PulseTableSocSim` (scheduled gate pulse
through the `dacMap` to the DAC; VNA-style readout through demod + decode) and `PulseTableSocCpuSim`
(CPU-in-the-loop).

```bash
mill runMain riscq.soc.sim.PulseParamBufferSim
mill runMain riscq.soc.sim.PulseTableSocSim
```

## Related

- [PulseParamBuffer](PulseParamBuffer.md) — the register file inside `PulseDriveChannel`.
- [PulseGenerator](../dsp/PulseGenerator.md) / [ReadoutDecoder](../dsp/ReadoutDecoder.md) — the DSP blocks bound here.
- [RiscqRfWithPulseTableFiber](RiscqRfWithPulseTableFiber.md) — instantiates the channels and the envelope RAM.
- [QUBIC_DATAPATH_COMPARISON](QUBIC_DATAPATH_COMPARISON.md) — the `useAligned` scheduling A/B.
