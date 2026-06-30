package riscq.soc.rf

import spinal.core._
import spinal.lib._
import riscq.soc.link.RfCmd

/** One pulse's parameters as stored in the CPU-writable table: raw `Bits` (the PulseGenerator io
 *  flows `assignFromBits` them). `env` is the envelope-memory base address. Each field's width matches
 *  its destination generator port (so `assignFromBits` is a no-resize copy). */
case class PulseTableTerm(dataWidth: Int, envWidth: Int, durWidth: Int) extends Bundle {
  val phase = Bits(dataWidth bit)
  val amp   = Bits(dataWidth bit)
  val env   = Bits(envWidth bit)
  val dur   = Bits(durWidth bit)
}

/**
 * Address map + widths for a [[PulseParamBuffer]]. The offsets follow the RF register layout the
 * control software writes, with `startTime` folded in per-buffer:
 *
 *   - `fire`@0x0        — write the table index `outId` ⇒ enqueue that entry at the current `startTime`
 *   - `freq`@0x4        — shared carrier frequency (16-bit field at bit 16)
 *   - `table[i]`        — entry `i` at `(i+1)*0x10`: `+0` phase, `+4` amp, `+8` env, `+12` dur
 *   - `startTime`@0x4100 — this buffer's own `startTime` register (per-buffer, posted)
 */
case class PulseParamBufferParams(
    pulseNum: Int,
    dataWidth: Int = 16,
    envAddrWidth: Int = 10,
    durWidth: Int = 16,
    timeWidth: Int = 32,
    addrWidth: Int = 16,         // RfCmd address width (the buffer's RF sub-window)
    fireAddr: Int = 0x0,
    freqAddr: Int = 0x4,
    startTimeAddr: Int = 0x4100,
    pulseOffset: Int = 0x10,     // 4 words per table entry; entry i at (i+1)*pulseOffset
    bitOffset: Int = 16,         // 16-bit fields packed in data[31:16]
    useMem: Boolean = false      // table storage: false = FF Vec register file; true = distributed-RAM Mem
) {
  require(pulseNum >= 1)
  require(addrWidth >= log2Up(startTimeAddr + 1), "addrWidth too small for startTimeAddr")
  require(!useMem || pulseNum >= 2, "useMem table needs pulseNum >= 2 (a depth-1 Mem has no address)")
}

/**
 * DSP-side register file for one pulse generator — the posted-link register file. It holds the pulse
 * table, `freq`, `startTime` and a local `time` copy, driven by the demuxed **posted** `Flow(RfCmd)`
 * (no TileLink, no D channel), and emits the parameter `Flow`s + `time`/`startTime` to a sibling
 * [[riscq.dsp.pulse.PulseGenerator]].
 *
 * The fire path (`outParamFlow` `Reg(Flow)` + `Delay` staging) keeps the pulse bit-exact vs the
 * [[riscq.dsp.pulse.PulseGenerator]] golden, and the local `time` copy is a single `RegNext` with
 * `EQUIVALENT_REGISTER_REMOVAL=NO`, so two buffers given the **same** `startTime` value rise on the
 * same output cycle — a software contract backed by equal `time`-broadcast delay to every buffer.
 */
case class PulseParamBuffer(p: PulseParamBufferParams) extends Component {
  import p._
  val w = dataWidth

  val io = new Bundle {
    val cmd       = slave  port Flow(RfCmd(addrWidth))   // demuxed posted writes for THIS generator
    val timeBcast = in     port UInt(timeWidth bits)     // shared time broadcast (equal delay to all)
    val phase     = master port Flow(SInt(w bits))
    val amp       = master port Flow(SInt(w bits))
    val addr      = master port Flow(UInt(envAddrWidth bits))
    val dur       = master port Flow(UInt(durWidth bits))
    val freq      = master port Flow(SInt(w bits))
    val time      = out    port UInt(timeWidth bits)     // local copy → pg.io.time
    val startTime = out    port UInt(timeWidth bits)     // per-buffer, cmd-written → pg.io.startTime
  }

  // local low-fanout time copy: equal pipeline delay across buffers ⇒ same-startTime same-cycle rise.
  io.time := RegNext(io.timeBcast).addAttribute("EQUIVALENT_REGISTER_REMOVAL", "NO")

  // ── posted register file ──
  val cmd = io.cmd
  def field(width: Int): Bits = cmd.payload.data(bitOffset, width bits)

  val startTime = Reg(UInt(timeWidth bits)) init 0
  io.startTime := startTime

  val outId = Reg(UInt(log2Up(pulseNum) bit)) init 0

  // ── cmd decode (combinational on address; cmd is the posted Flow, already a registered handoff).
  // The table write is decoded into a (enable, index, which-field) request shared by both storage
  // styles; only one field of one entry is written per beat (the `is` arms are mutually exclusive). ──
  val outParamValid = False
  val tWrEn  = False                                          // table write enable
  val tWrIdx = UInt(log2Up(pulseNum) bit); tWrIdx := outId    // table write index (don't-care default)
  val (wrPhase, wrAmp, wrEnv, wrDur) = (False, False, False, False)
  when(cmd.valid) {
    switch(cmd.payload.address) {
      is(fireAddr) {
        if (pulseNum > 1) outId := cmd.payload.data(0, log2Up(pulseNum) bits).asUInt
        outParamValid := True
      }
      is(startTimeAddr) { startTime := cmd.payload.data(0, timeWidth bits).asUInt }
      for (i <- 0 until pulseNum) {
        is((i + 1) * pulseOffset + 0)  { tWrEn := True; tWrIdx := i; wrPhase := True }
        is((i + 1) * pulseOffset + 4)  { tWrEn := True; tWrIdx := i; wrAmp   := True }
        is((i + 1) * pulseOffset + 8)  { tWrEn := True; tWrIdx := i; wrEnv   := True }
        is((i + 1) * pulseOffset + 12) { tWrEn := True; tWrIdx := i; wrDur   := True }
      }
    }
  }

  // ── pulse table: `pulseNum` PulseTableTerm entries, reset/init to zero so an un-programmed (or
  // spurious reset-window) fire reads a benign dur=0. Two bit-identical storage styles:
  //   - Vec : a flip-flop register file — combinational `table(outId)` read, direct per-field write.
  //   - Mem : a distributed-RAM (async-read) memory — drops the table out of FFs (fewer control sets /
  //           reset FFs) at the cost of a read-modify-write for the per-field write (only one field is
  //           written per beat, so the other fields are read back and re-stored). ──
  val zeroTerm = PulseTableTerm(w, envAddrWidth, durWidth).getZero
  val outParam = PulseTableTerm(w, envAddrWidth, durWidth)    // the fired entry, read by outId
  if (!useMem) {
    val table = Vec.fill(pulseNum)(Reg(PulseTableTerm(w, envAddrWidth, durWidth)) init zeroTerm)
    outParam := table(outId)
    when(tWrEn) {
      val e = table(tWrIdx)
      when(wrPhase) { e.phase := field(w) }
      when(wrAmp)   { e.amp   := field(w) }
      when(wrEnv)   { e.env   := field(envAddrWidth) }
      when(wrDur)   { e.dur   := field(durWidth) }
    }
  } else {
    val table = Mem(PulseTableTerm(w, envAddrWidth, durWidth), pulseNum).init(Seq.fill(pulseNum)(zeroTerm))
    outParam := table.readAsync(outId)
    val rmw = CombInit(table.readAsync(tWrIdx))              // keep the untouched fields
    when(wrPhase) { rmw.phase := field(w) }
    when(wrAmp)   { rmw.amp   := field(w) }
    when(wrEnv)   { rmw.env   := field(envAddrWidth) }
    when(wrDur)   { rmw.dur   := field(durWidth) }
    table.write(tWrIdx, rmw, tWrEn)
  }

  // fire path: writing outId pulses the selected entry into the param flows — Reg(Flow) + Delay
  // staging so the pulse is bit-exact vs the PulseGenerator golden.
  val outParamFlow  = Reg(Flow(PulseTableTerm(w, envAddrWidth, durWidth)))
  outParamFlow.valid init False                       // reset-clean: no X-driven spurious fire at t=0
  outParamFlow.payload := outParam
  outParamFlow.valid   := Delay(outParamValid, 1, init = False)
  KeepAttribute(outParamFlow)

  // freq is a separate always-driven flow (posted write; pulses valid on the freq write, like driveFlow).
  // One extra register stage on the way out cuts the critical path from the cmd address-decode /
  // field-extract into the downstream PulseGenerator freq queues. freq is queued against the per-buffer
  // startTime, which is NOT rewritten between the freq write and the fire, so the +1-cycle delay is
  // timing-invisible (the timed queue still captures the same startTime ⇒ bit-exact). valid inits False —
  // reset-clean, no X-driven spurious freq push at t=0 (mirrors outParamFlow above).
  val freqValid = cmd.valid && (cmd.payload.address === freqAddr)
  io.freq.valid   := RegNext(freqValid) init False
  io.freq.payload := RegNext(field(w).asSInt)

  // fire the popped table entry into the generator's queues.
  io.phase.valid := outParamFlow.valid; io.phase.payload := outParamFlow.phase.asSInt
  io.amp.valid   := outParamFlow.valid; io.amp.payload   := outParamFlow.amp.asSInt
  io.addr.valid  := outParamFlow.valid; io.addr.payload  := outParamFlow.env.asUInt
  io.dur.valid   := outParamFlow.valid; io.dur.payload   := outParamFlow.dur.asUInt
}
