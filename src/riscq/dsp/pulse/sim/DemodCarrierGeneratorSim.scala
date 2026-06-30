package riscq.dsp.pulse.sim

import spinal.core.sim._
import riscq.dsp._
import riscq.dsp.pulse._

import scala.math.{Pi, abs, cos, pow, sin}

/**
 * Self-checking testbench for [[DemodCarrierGenerator]]. One `freq`/`phase` pair is driven once and
 * held (a free-running LO); for each test time the pipeline settles and `io.carrier[k]` is checked
 * two ways, exactly as `CarrierBatchGeneratorSim`:
 *
 *   1. '''bit-exact''' vs the composed model `ComplexMul(Cordic(amp,0,gPhase), phasor[k])`, where
 *      `phasor[k] = Cordic(amp,0,(k·freq) mod 2^w)` — the same single `freq` driving both, which is
 *      what makes the carrier phase-coherent across lanes and time;
 *   2. against the '''Double''' reference `amp·exp(iπ·(freq·N·t + phase))·phasor[k]` with the composed
 *      CORDIC-through-ComplexMul error bound.
 *
 * Large and wrap-straddling times exercise the phase-coherence (truncating-wrap = exact mod 2π).
 * Run with `./.metals/mill runMain riscq.dsp.pulse.sim.DemodCarrierGeneratorSim`.
 */
object DemodCarrierGeneratorSim extends App {

  val N         = 4
  val w         = 16
  val timeWidth = 32
  val amax      = (BigInt(1) << (w - 1)) - 1
  val maskW     = BigInt(1) << w
  def signedW(pat: BigInt): BigInt = if (pat.testBit(w - 1)) pat - maskW else pat
  def uMod(x: BigInt, m: BigInt): BigInt = ((x % m) + m) % m

  // static stimulus: an arbitrary freq/phase (held).
  val phase: BigInt = 5000
  val freq: BigInt  = 1234

  /** gPhase(t) = (freq·((t·N) mod 2^w) + phase) mod 2^w, signed — mirrors the hardware. */
  def gPhase(t: BigInt): BigInt = {
    val bt    = signedW((t * N) & (maskW - 1))
    val tpLow = signedW(uMod(freq * bt, maskW))
    signedW(uMod(tpLow + phase, maskW))
  }

  def run(correctGain: Boolean, saturate: Boolean): Unit = {
    val cp        = CordicParams(xyWidth = w, zWidth = w, correctGain = correctGain, saturate = saturate)
    val g         = if (correctGain) 1.0 else Cordic.gain(cp.iters)
    val ampMag    = if (saturate) amax else amax - BigInt(scala.math.ceil(Cordic.errorBound(cp, amax.toDouble)).toLong) - 1
    val ampInput  = if (correctGain) ampMag else BigInt((ampMag.toDouble / Cordic.gain(cp.iters)).round)
    // per-lane phasor[k] = Cordic(amp, 0, (k·freq) mod 2^w) — the PhasorBatchGenerator output.
    val phasor: Array[(BigInt, BigInt)] =
      (0 until N).map(k => Cordic.rotate(cp, ampInput, BigInt(0), signedW((BigInt(k) * freq) & (maskW - 1)))).toArray

    def modelCarrier(t: BigInt, k: Int): (BigInt, BigInt) = {
      val (cr, ci) = Cordic.rotate(cp, ampInput, BigInt(0), gPhase(t))
      ComplexMul.model(w, cr, ci, phasor(k)._1, phasor(k)._2, saturate)
    }
    def idealCarrier(t: BigInt, k: Int): (Double, Double, Double) = {
      val ang = gPhase(t).toDouble / (1 << (w - 1)) * Pi
      val cr  = g * ampInput.toDouble * cos(ang)
      val ci  = g * ampInput.toDouble * sin(ang)
      val pr  = phasor(k)._1.toDouble
      val pi  = phasor(k)._2.toDouble
      val sc  = pow(2, -(w - 1))
      val bound = Cordic.errorBound(cp, abs(g * ampInput.toDouble)) * (abs(pr) + abs(pi)) * sc + 0.5
      ((cr * pr - ci * pi) * sc, (cr * pi + ci * pr) * sc, bound)
    }

    var maxErr = 0.0
    SimConfig.compile(DemodCarrierGenerator(N, w, timeWidth, correctGain, saturate))
      .doSim(s"demodCarrier_cg${correctGain}_sat$saturate", seed = 42) { dut =>
      dut.clockDomain.forkStimulus(10)
      dut.io.phase.valid #= false; dut.io.freq.valid #= false
      dut.io.time #= 0
      dut.clockDomain.waitSampling(2)

      dut.io.phase.valid #= true; dut.io.phase.payload #= phase
      dut.io.freq.valid #= true;  dut.io.freq.payload #= freq
      dut.clockDomain.waitSampling()
      dut.io.phase.valid #= false; dut.io.freq.valid #= false
      dut.clockDomain.waitSampling(60) // settle the phasor regen + parameter registers

      def checkAtTime(t: BigInt): Unit = {
        dut.io.time #= t
        dut.clockDomain.waitSampling(45)
        for (k <- 0 until N) {
          val (mre, mim) = modelCarrier(t, k)
          val cre = dut.io.carrier(k).re.toBigInt
          val cim = dut.io.carrier(k).im.toBigInt
          assert(cre == mre && cim == mim, s"bit-exact t=$t lane $k: dut($cre,$cim) != model($mre,$mim)")
          val (ire, iim, bound) = idealCarrier(t, k)
          val er = abs(cre.toDouble - ire); val ei = abs(cim.toDouble - iim)
          assert(er <= bound + 1e-6, f"re bound t=$t lane $k: $er%.3f > $bound%.3f")
          assert(ei <= bound + 1e-6, f"im bound t=$t lane $k: $ei%.3f > $bound%.3f")
          maxErr = math.max(maxErr, math.max(er, ei))
        }
      }

      val times = Seq[BigInt](0, 1, 2, 3, 17, 255, 256, 1000, 16383, 16384, 16385, 100000, 1234567,
        (BigInt(1) << 31), (BigInt(1) << timeWidth) - 3, (BigInt(1) << timeWidth) - 1)
      times.foreach(checkAtTime)
      simSuccess()
    }
    println(f"[DemodCarrierGeneratorSim] PASS  N=$N w=$w correctGain=$correctGain saturate=$saturate: " +
      f"bit-exact + composed bound (max |err| $maxErr%.3f codes) + phase coherence.")
  }

  run(correctGain = true,  saturate = false)
  run(correctGain = true,  saturate = true)
  run(correctGain = false, saturate = false)
}
