package riscq.dsp.pulse

import spinal.core._
import spinal.lib._
import riscq.dsp._

/**
 * Free-running demodulation carrier (the digital LO for [[ReadoutDecoder]]) — the agentic counterpart
 * of the RISC-Q reference `pulse.DemodCarrierGenerator`. It is the
 * [[PulseGenerator]] carrier path with **no scheduling and a hard-wired full-scale amplitude**:
 *
 * {{{
 *   carrier[k](t) = amp · exp(iπ·(freq·(N·t + k) + phase)) ,   k = 0 .. N−1
 * }}}
 *
 * Composed from the two verified blocks — [[PhasorBatchGenerator]] regenerates the static per-lane
 * phasors `Amax·exp(iπ·freq·k)` on each `freq` write, and [[CarrierBatchGenerator]] combines them with
 * the time-dependent factor `amp·exp(iπ·(freq·N·t + phase))` recomputed from absolute `io.time` every
 * cycle (so the LO stays phase-coherent across arbitrary gaps, like the drive). Unlike the reference,
 * the datapath is pure `SInt` (no AFix) and the amplitude rides the CORDIC `x` input — no separate
 * amplitude multiply.
 *
 * The amplitude is derived (not a literal) the same way [[PhasorBatchGenerator]] derives its CORDIC
 * input magnitude, so carrier and phasor share one scale and the un-clamped (`saturate = false`)
 * datapath keeps the CORDIC-error headroom that prevents overflow.
 */
case class DemodCarrierGenerator(
    batchSize: Int,
    dataWidth: Int,
    timeWidth: Int,
    correctGain: Boolean = true,
    saturate: Boolean = false,
    phasorMethod: SinCosMethod = SinCosMethod.Cordic
) extends Component {
  // Fence the datapath so its ComplexMuls pack into DSP48E2s per-instance, not via the global
  // resource-balancer that over-spills to LUTs at scale.
  this.addAttribute("KEEP_HIERARCHY", "TRUE")
  require(isPow2(batchSize), "batchSize must be a power of two")
  val N    = batchSize
  val w    = dataWidth
  val amax = (BigInt(1) << (w - 1)) - 1

  val io = new Bundle {
    val time    = in port UInt(timeWidth bits)
    val phase   = slave port Flow(SInt(w bits))
    val freq    = slave port Flow(SInt(w bits))
    val carrier = out port ComplexBatch(N, w)
  }

  // Full-scale LO amplitude on the carrier CORDIC's x input, derived exactly as
  // PhasorBatchGenerator derives its CORDIC input magnitude: with saturate = false the magnitude is
  // pulled in by the CORDIC error bound so the un-clamped rotation can't overflow (headroom),
  // and with correctGain = false it is prescaled by 1/K to cancel the un-corrected CORDIC gain. This
  // keeps the carrier and the phasors at the same scale.
  val cp       = CordicParams(xyWidth = w, zWidth = w, correctGain = correctGain, saturate = saturate)
  val ampMag   = if (saturate) amax else amax - BigInt(scala.math.ceil(Cordic.errorBound(cp, amax.toDouble)).toLong) - 1
  val ampInput = if (correctGain) ampMag else BigInt((ampMag.toDouble / Cordic.gain(cp.iters)).round)

  val phasorGen  = PhasorBatchGenerator(N, w, correctGain, saturate, phasorMethod)
  val carrierGen = CarrierBatchGenerator(N, w, timeWidth, correctGain, saturate)

  phasorGen.io.freq << io.freq
  carrierGen.io.freq << io.freq
  carrierGen.io.phase << io.phase
  carrierGen.io.phasors << phasorGen.io.phasors
  carrierGen.io.time := io.time
  carrierGen.io.amp.valid   := True
  carrierGen.io.amp.payload := S(ampInput, w bits)

  io.carrier := carrierGen.io.carrier

  // Exported latencies (mirroring the sub-blocks) for the SoC's time-alignment derivation.
  def timeLatency: Int      = carrierGen.timeLatency
  def phaseLatency: Int     = carrierGen.phaseLatency
  def freqRegenCycles: Int  = phasorGen.regenCycles
}
