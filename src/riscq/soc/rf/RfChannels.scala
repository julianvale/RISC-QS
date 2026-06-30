package riscq.soc.rf

import spinal.core._
import spinal.lib._
import riscq.dsp.{Complex, ComplexBatch, SinCosMethod}
import riscq.dsp.pulse.{PulseGenerator, PulseGeneratorAligned, PulseGeneratorParams, DemodCarrierGenerator}
import riscq.soc.link.RfCmd

/**
 * Converter-edge **pulse-drive channel** — the self-contained box the floorplan pins: a
 * [[PulseParamBuffer]] (DSP-side register file, driven by the demuxed posted `Flow(RfCmd)`) + a
 * [[PulseGenerator]] + its envelope-RAM read port. Its only CPU-facing input is the `RfCmd` Flow (plus
 * the shared `time` broadcast); it emits the DAC `pulse` and an external envelope-memory `MemReadPort`.
 * No registers cross the Component boundary, so the pulse is bit-exact with the un-packaged
 * composition.
 */
case class PulseDriveChannel(
    pulseNum: Int,
    batchSize: Int,
    dataWidth: Int,
    envAddrWidth: Int,
    durWidth: Int,
    timeWidth: Int,
    memLatency: Int,
    prescaleAmp: Boolean,
    saturate: Boolean,
    phasorMethod: SinCosMethod,
    realOutput: Boolean,
    rfAddrWidth: Int = 16,
    useAligned: Boolean = false   // false = per-parameter lead-time TimedQueues (PulseGenerator);
                                  // true = QubiC-style single combined params FIFO + SRL alignment
                                  // (PulseGeneratorAligned). Bit-identical pulse; trades alignment HW.
) extends Component {
  val N = batchSize; val w = dataWidth
  val io = new Bundle {
    val cmd       = slave  port Flow(RfCmd(rfAddrWidth))
    val timeBcast = in     port UInt(timeWidth bits)
    val memPort   = master port MemReadPort(Bits(N * 2 * w bits), envAddrWidth)
    val pulse     = master port Flow(ComplexBatch(N, w))
  }

  val buf = PulseParamBuffer(PulseParamBufferParams(
    pulseNum = pulseNum, dataWidth = w, envAddrWidth = envAddrWidth, durWidth = durWidth,
    timeWidth = timeWidth, addrWidth = rfAddrWidth))
  buf.io.cmd << io.cmd
  buf.io.timeBcast := io.timeBcast

  val pgParams = PulseGeneratorParams(
    batchSize = N, dataWidth = w, timeWidth = timeWidth, addrWidth = envAddrWidth, durWidth = durWidth,
    memLatency = memLatency, prescaleAmp = prescaleAmp, saturate = saturate, phasorMethod = phasorMethod,
    realOutput = realOutput)

  // The two implementations differ only on the parameter-input side; the envelope read port is
  // forwarded to the external host-writable RAM (no extra register stage) and `pulse` driven out
  // identically in each branch.
  if (!useAligned) {
    val pg = PulseGenerator(pgParams)
    pg.io.time := buf.io.time; pg.io.startTime := buf.io.startTime
    pg.io.phase << buf.io.phase; pg.io.amp << buf.io.amp; pg.io.addr << buf.io.addr
    pg.io.dur << buf.io.dur; pg.io.freq << buf.io.freq
    io.memPort.cmd.valid   := pg.io.memPort.cmd.valid
    io.memPort.cmd.payload := pg.io.memPort.cmd.payload
    pg.io.memPort.rsp      := io.memPort.rsp
    io.pulse << pg.io.pulse
  } else {
    val pg = PulseGeneratorAligned(pgParams)
    pg.io.time := buf.io.time; pg.io.startTime := buf.io.startTime
    // amp/phase/addr/dur all fire on buf's shared outParamFlow.valid ⇒ one combined params Flow.
    pg.io.params.valid         := buf.io.amp.valid
    pg.io.params.payload.amp   := buf.io.amp.payload
    pg.io.params.payload.phase := buf.io.phase.payload
    pg.io.params.payload.addr  := buf.io.addr.payload
    pg.io.params.payload.dur   := buf.io.dur.payload
    pg.io.freq << buf.io.freq
    io.memPort.cmd.valid   := pg.io.memPort.cmd.valid
    io.memPort.cmd.payload := pg.io.memPort.cmd.payload
    pg.io.memPort.rsp      := io.memPort.rsp
    io.pulse << pg.io.pulse
  }

  /** per-buffer startTime, for the SoC/sim to observe the software-written schedule value. */
  def startTime: UInt = buf.startTime
}

/**
 * Converter-edge **demod LO channel** — a degenerate channel: posted `freq`@0 / `phase`@4 (the only
 * writes the demod takes) decoded straight off the demuxed `RfCmd` into a free-running
 * [[DemodCarrierGenerator]] (no table / `startTime` / envelope; the LO is not gated). Exposes
 * `io.carrier` for the paired `ReadoutDecoder`.
 */
case class DemodChannel(
    batchSize: Int,
    dataWidth: Int,
    timeWidth: Int,
    correctGain: Boolean,
    saturate: Boolean,
    phasorMethod: SinCosMethod,
    rfAddrWidth: Int = 16,
    freqAddr: Int = 0x0,
    phaseAddr: Int = 0x4,
    bitOffset: Int = 16
) extends Component {
  val N = batchSize; val w = dataWidth
  val io = new Bundle {
    val cmd     = slave port Flow(RfCmd(rfAddrWidth))
    val time    = in    port UInt(timeWidth bits)
    val carrier = out   port ComplexBatch(N, w)
  }
  val dcg = DemodCarrierGenerator(N, w, timeWidth, correctGain, saturate, phasorMethod)
  dcg.io.time := RegNext(io.time).addAttribute("EQUIVALENT_REGISTER_REMOVAL", "NO")
  val freqCmd = Reg(cloneOf(dcg.io.freq))
  freqCmd >> dcg.io.freq
  freqCmd.valid    := io.cmd.valid && (io.cmd.payload.address === freqAddr)
  freqCmd.payload  := io.cmd.payload.data(bitOffset, w bits).asSInt
  val phaseCmd = Reg(cloneOf(dcg.io.phase))
  phaseCmd >> dcg.io.phase
  phaseCmd.valid   := io.cmd.valid && (io.cmd.payload.address === phaseAddr)
  phaseCmd.payload := io.cmd.payload.data(bitOffset, w bits).asSInt
  io.carrier := dcg.io.carrier
}
