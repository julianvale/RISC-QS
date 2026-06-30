# RiscqRfWithPulseTableFiber — one qubit core

**Source:** `src/riscq/soc/RiscqRfWithPulseTableFiber.scala` · **Package:** `riscq.soc` · **Type:** Area
(case class, instantiated per qubit by [`PulseTableSoc`](PulseTableSoc.md))

One qubit core: a RISC-V control core + its private I/D RAM + the CPU control block, plus a converter-edge
DSP datapath (two pulse drives, a demod LO, a readout decoder) reached over the **narrow posted link**.
`PulseTableSoc` instantiates `qubitNum` of these. Read [`ARCH.md`](ARCH.md) for the link rationale.

## Structure

After the registered-boundary floorplan carve-out this is a **thin shell** around two pieces split at the
posted link's already-registered seam:

```
   ┌──────────── RiscvSoc (hard Component, pinned to X0) ────────────┐
   │  RiscqFiber core + I/D RAM + control block (time/fromHost)      │
   │  + RfLinkBridge (acks CPU stores locally) + ReadoutResultSink   │
   └──── cmd: Flow(RfCmd) ─┬────────────────────────  resultIn ◀─────┘
                           │ getPipe(linkPipe)                 │ getPipe(linkPipe)
        ┌──────────────────┴── posted (dspCd, datapath in X1–X5) ────┴──────────┐
        │  RfLink.demux ─┬─ gateChannel   (PulseDriveChannel, pulseNum=8) ─▶ DAC │
        │                ├─ roChannel     (PulseDriveChannel, pulseNum=1) ─▶ DAC │
        │                ├─ demodChannel  (DemodChannel) ─▶ carrier (LO)         │
        │                └─ decoder       (ReadoutDecoder) ◀─ adc ──▶ result up  │
        │  pulseMemFiber / readoutMemFiber  (host-writable envelope BRAMs)       │
        └────────────────────────────────────────────────────────────────────────┘
```

- **`riscvSoc`** — the [`RiscvSoc`](RiscvSoc.md) hard `Component`: the timing-critical RISC-V core
  ([`RiscqFiber`](RiscqFiber.md)) + real BRAM/UltraRAM I/D RAM + the CPU-mapped control block + the
  [`RfLinkBridge`](RfLinkBridge.md) (which acks every CPU RF store locally in one cycle) + the
  [`ReadoutResultSink`](ReadoutResultLink.md). Its narrow registered I/O is `time`/`fromHost` in,
  `cmd: Flow(RfCmd)` out, `resultIn: Flow(ReadoutResult)` in (plus `iLoad`/`dTap` slave-IO). The
  `0x10000` RF window and `0x80000000` data-RAM maps are all inside it.
- **The shell** applies the `linkPipe` `RegNext` stages each way (`getPipe(riscvSoc.cmd, linkPipe)` down,
  `getPipe(upSrc, linkPipe)` up) and demuxes `cmd` to the per-generator channels. Everything past the
  pipe — the demux, the channels, the decoder, the envelope BRAMs, dac/adc — lives **here** (the parent),
  not in `RiscvSoc`, so the core can be floorplanned far from the converters.

### The RF datapath (`posted`, dspCd)

The piped `cmd` stream is fanned by [`RfLink.demux`](RfLink.md) to four 0x10000-wide sub-windows of the
RF address space:

| Window | Channel | What |
|---|---|---|
| `0x00000` | `gateChannel` | [`PulseDriveChannel`](RfChannels.md), `pulseNum = 8` → gate-drive DAC |
| `0x10000` | `roChannel` | `PulseDriveChannel`, `pulseNum = 1` → readout-drive DAC |
| `0x20000` | `demodChannel` | [`DemodChannel`](RfChannels.md): posted `freq`@0 / `phase`@4 → free-running LO carrier |
| `0x30000` | `decoder` | [`ReadoutDecoder`](../dsp/ReadoutDecoder.md): `startTime`@0x4100 + `dur`@0; result → up-link |

Each `PulseDriveChannel` wraps a [`PulseParamBuffer`](PulseParamBuffer.md) (DSP-side register file driven
by the demuxed `Flow(RfCmd)`) + a [`PulseGenerator`](../dsp/PulseGenerator.md). The buffer owns the
per-buffer `startTime` (the software contract from [`ARCH.md`](ARCH.md)); `io.timeBcast` takes the shared
`time` broadcast. Generators run with `realOutput = true` — the DAC carries only the real lane, so the
imaginary cone is tied off inside the generator and synthesis prunes the dead DSPs (see
[`SOC_TIPS.md`](SOC_TIPS.md) §7.7).

The decoder result is latched on integration done and emitted on a [`ReadoutResultLink`](ReadoutResultLink.md)
up-`Flow`, piped `linkPipe` stages back into `RiscvSoc`'s core-local sink — so the CPU's halting `res`
read is a short local arc, not a round-trip across the gap.

### Host-writable complex pulse-envelope RAM

Two `BramFiber` banks (`pulseMemFiber` for the gate drive, `readoutMemFiber` for the readout drive),
host-written through the host→dsp CDC. The full envelope line is **512-bit complex** (`batchSize·2·w` =
16·2·16); each bank stores an **interpolated** line — `gateEnvWidth = 512/gateInterp` (128 at interp 4),
`readoutEnvWidth = 512/readoutInterp` (32 at interp 16) — to shrink the widest BRAM banks. On read,
`expandEnv` reconstructs the full per-lane batch from the interpolated line (each output lane reads the
`m/interp`-th stored sample). The interp factor must divide the batch size.

### Host image load & test tap

`iMemPortArb` re-exposes `RiscvSoc`'s `iLoad` slave-IO as a fabric node so the toplevel's host AXI fabric
loads the program/data image into the BRAM slow port; this node carries the **host→dsp clock crossing**,
which lands on the fabric arc *outside* the hard `RiscvSoc` Component (so it stays out of the per-core
pblock). The fabric cannot cross a hard Component boundary, so a `bridgeLoad` helper wires the (narrower)
host master onto `RiscvSoc`'s generous fixed `iLoad` param by resizing the per-top-varying fields — which
keeps `RiscvSoc` byte-identical across tops (the floorplan-transfer requirement, see [`RiscvSoc`](RiscvSoc.md)).
`dMemTap`/`dMemPortDec` mirror this for the `withTestTap` sim path (null in the real SoC).

## Exported handles

For the rest of the SoC: `gatePulse` / `readoutPulse` (the `Flow(ComplexBatch)` DAC outputs), the two
envelope `MemReadPort`s, `decoderRd` (the decoder, for `robs`), `dac`/`adc` (real lane), and `startTime`
(the gate buffer's per-buffer schedule value, observed by sims).

## Key parameters

- **`plugins`** — the RISC-V plugin config (from `PulseTableSoc.coreParam`).
- **`linkPipe`** (default 4) — per-direction `RegNext` depth of the posted link.
- **`gatePulseNum`** (default 8) — gate-drive pulse-table depth; readout drive is fixed at 1.
- **`readoutInterp` / `gateInterp`** — envelope interpolation factors (must divide `batchSize`).
- **`readoutDurWidth` / `readoutAccWidth`** — the decoder's integration window / accumulator widths.
- **`time` / `fromHost`** — the shared batch-time replica + host mailbox, passed in from the toplevel.

## Verification

No standalone sim — verified through the toplevel sims (`PulseTableSocSim`, `PulseTableSocCpuSim`) and the
posted-link building-block sims (`PulseParamBufferSim`, `RfLinkBridgeSim`, `ReadoutResultLinkSim`). See
[`PulseTableSoc`](PulseTableSoc.md) for the commands.

## Related

- [`RiscvSoc`](RiscvSoc.md) — the hard, registered-boundary core unit this wraps.
- [`ARCH.md`](ARCH.md) — the posted-link architecture (why the split is at the registered seam).
- Posted link: [`RfLinkBridge`](RfLinkBridge.md) · [`RfLink`](RfLink.md) · [`ReadoutResultLink`](ReadoutResultLink.md).
- Datapath: [`RfChannels`](RfChannels.md) · [`PulseParamBuffer`](PulseParamBuffer.md) ·
  [`PulseGenerator`](../dsp/PulseGenerator.md) · [`ReadoutDecoder`](../dsp/ReadoutDecoder.md).
