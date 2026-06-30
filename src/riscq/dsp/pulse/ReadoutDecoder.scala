package riscq.dsp.pulse

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._
import riscq.dsp._

case class ReadoutDecoderParams(
    batchSize: Int = 16,    // N, power of two (one ADC batch per tick)
    dataWidth: Int = 16,    // w: SF width of adc/carrier/demod
    accWidth:  Int = 32,    // integrated-I/Q width — read back by software as one word
    timeWidth: Int = 32,    // global batch-time counter width
    durWidth:  Int = 12,    // window length, in batches
    timeOffset: Int = 0,    // external calibration: shifts the integrated window vs startTime (≥ 0)
    saturate:  Boolean = false  // → ComplexMul saturation; default matches PulseGeneratorParams.saturate
) {
  require(isPow2(batchSize), "batchSize must be a power of two")
  require(dataWidth >= 2 && timeWidth >= 3 && durWidth >= 1)
  // no-overflow contract: the worst-case integral is N·Amax over up to 2^durWidth batches.
  require(accWidth >= dataWidth + log2Up(batchSize) + durWidth,
    s"accWidth ($accWidth) must hold the worst-case window integral " +
      s"dataWidth + log2Up(batchSize) + durWidth = ${dataWidth + log2Up(batchSize) + durWidth} bits")
}

/**
 * Demodulating readout integrator — the inverse of the
 * [[PulseGenerator]]. For a scheduled window `[startTime, startTime + dur]` (in batches) it
 * '''demodulates''' each incoming ADC batch against a reference carrier (the digital LO),
 * '''integrates''' the product across the lanes and across the window, and emits the integrated I/Q
 * point plus a one-bit state discrimination:
 *
 * {{{
 *   demod[t][k] = adc[t][k] · carrier[t][k]            // complex × complex, per lane  (down-conversion)
 *   real/imag   = Σ_{t ∈ window} Σ_k demod[t][k]        // integrated I / Q
 *   res         = sign(real)                            // threshold 0 on the real axis
 * }}}
 *
 * '''Reused, verified blocks''': the per-lane demod is `riscq.dsp.ComplexMul` (the same DSP48-packed,
 * II = 1 product the pulse side uses); the lane sum is the balanced [[AdderTree]]
 * (`reduceBalancedTree(_ + _, RegNext)`), not the reference's hand-indexed buffer heap.
 *
 * '''Derived window alignment (no magic numbers)''' — the central rule, mirroring PulseGenerator's
 * lead-time derivation: the accumulator reads the tree output `Ldemod = ComplexMul.latency + 1 +
 * log2Up(N)` cycles after the corresponding ADC batch entered, so the FSM is armed to fire when
 * `io.time` reaches `startTime + Ldemod − 1 + timeOffset`. With `timeOffset = 0` the integrated
 * batches are '''exactly''' those whose timestamps are `[startTime, startTime + dur]` (the end-to-end
 * TB asserts this); `timeOffset` is the one external calibration constant (converter/cable latency).
 * The wrap-safe time compare is evaluated '''one cycle early and registered''', so the `fire` that
 * gates the I/Q accumulators and the FSM is a flop, not the long 32-bit compare; the registered
 * `fire` still lands at the same `io.time`, so this window alignment is unchanged.
 *
 * `dur` arms a single pending readout; `res.valid` rises once the integral has settled (the SoC halts
 * the readback bus until then). `demodData` streams the raw per-batch demod (for trace/averaging),
 * valid across the integration window — note it lags the integrated batches by `1 + log2Up(N)` (the
 * tree latency), as in the reference.
 */
case class ReadoutDecoder(p: ReadoutDecoderParams) extends Component {
  // Fence the datapath so its ComplexMuls pack into DSP48E2s per-instance, not via the global
  // resource-balancer that over-spills to LUTs at scale.
  this.addAttribute("KEEP_HIERARCHY", "TRUE")
  val N = p.batchSize
  val w = p.dataWidth

  val io = new Bundle {
    val time      = in  port UInt(p.timeWidth bits)
    val startTime = in  port UInt(p.timeWidth bits)
    val adc       = in  port ComplexBatch(N, w)
    val carrier   = in  port ComplexBatch(N, w)
    val dur       = slave port Flow(UInt(p.durWidth bits))    // arm a readout window
    val real      = out port SInt(p.accWidth bits)            // integrated I
    val imag      = out port SInt(p.accWidth bits)            // integrated Q
    val res       = master port Flow(Bool())                  // valid once the integral settles
    val demodData = master port Flow(ComplexBatch(N, w))      // per-batch demod trace, valid in-window
  }

  // ── per-lane demod: adc[k] · carrier[k] ──
  // resetValid = false: the mul rsp.valid is unused — integration is gated by the
  // reset-bearing time-compare, so the reset-free valid chain sheds the global reset.
  val muls = Array.fill(N)(ComplexMul(w, p.saturate, resetValid = false))
  for (k <- 0 until N) {
    muls(k).io.cmd.valid     := True
    muls(k).io.cmd.payload.a := io.adc(k)
    muls(k).io.cmd.payload.b := io.carrier(k)
  }
  val Lmul = ComplexMul.latency(p.saturate)

  // ── lane sum: one input register (fanout/retiming, as in the reference) + the balanced adder tree ──
  val treeR  = AdderTree(muls.map(m => RegNext(m.io.rsp.payload.re)).toSeq, p.accWidth)
  val treeI  = AdderTree(muls.map(m => RegNext(m.io.rsp.payload.im)).toSeq, p.accWidth)
  val Ltree  = 1 + AdderTree.latency(N)
  val Ldemod = Lmul + Ltree                          // adc/carrier input → tree output

  // ── window scheduler: single pending slot; fire offset derived from Ldemod (no magic +4) ──
  val armed      = RegInit(False)
  val resValid   = RegInit(False)
  val durR       = Reg(UInt(p.durWidth bits))
  val fireOffset = Ldemod - 1 + p.timeOffset
  require(fireOffset >= 1,
    "timeOffset too negative: Ldemod − 1 + timeOffset must be ≥ 1 (one cycle reserved for the buffered fire)")
  // threshold = startTime + (fireOffset − 1), precomputed at arm so io.startTime stays off the
  // time-compare path. The −1 pays back the buffer register below: the *registered* fire still lands
  // at io.time = startTime + fireOffset, so the integrated window is identical to the unbuffered design.
  val threshold = Reg(UInt(p.timeWidth bits))
  when(io.dur.valid) {
    armed     := True
    threshold := io.startTime + U(fireOffset - 1, p.timeWidth bits)
    durR      := io.dur.payload
    resValid  := False
  }
  // Buffer the control signal driven by startTime/time: evaluate the wrap-safe ≥ one cycle early and
  // register it, so the fire → {sumR, sumI, timer} / FSM control arc is launched from a flop instead
  // of the long 32-bit time compare (the previous critical control path).
  val due       = !((io.time - threshold).msb)       // wrap-safe io.time ≥ threshold (one cycle early)
  val fireEarly = armed && due
  val fire      = RegNext(fireEarly) init (False)     // actual fire, one cycle later
  when(fireEarly) { armed := False }

  // ── window FSM: idle → sampling (dur+1 batches) → settle → res.valid ──
  val integrating = Bool()
  integrating := False
  val timer = Reg(UInt(p.durWidth bits))
  val fsm = new StateMachine {
    val idle     = makeInstantEntry()
    val sampling = new State
    val settle   = new StateDelay(cyclesCount = 1) { whenCompleted { resValid := True; exit() } }
    idle.whenIsActive { when(fire)(goto(sampling)) }
    sampling.whenIsActive {
      integrating := True
      when(timer === 0)(goto(settle))
    }
  }

  // ── timer + I/Q accumulators: reset at fire (the cycle before integrating), run while integrating ──
  val sumR = Reg(SInt(p.accWidth bits))
  val sumI = Reg(SInt(p.accWidth bits))
  when(fire) {
    timer := durR
    sumR  := 0
    sumI  := 0
  }.elsewhen(integrating) {
    timer := timer - 1
    sumR  := sumR + treeR
    sumI  := sumI + treeI
  }

  // ── outputs ──
  io.real := sumR
  io.imag := sumI
  io.res.valid       := resValid
  io.res.payload     := sumR.msb                     // sign(sumR): true ⇒ negative
  io.demodData.valid := integrating
  for (k <- 0 until N) io.demodData.payload(k) := muls(k).io.rsp.payload

  /** ComplexMul cmd→rsp latency (demodData lags the ADC input by this much). */
  def mulLatency: Int = Lmul
  /** ADC/carrier input → tree output: the alignment between `io.time` and the integrated batch. */
  def demodLatency: Int = Ldemod
}
