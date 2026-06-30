package riscq.dsp.pulse.sim

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import riscq.dsp._
import riscq.dsp.pulse._

/**
 * End-to-end self-checking testbench for [[ReadoutDecoder]].
 * Mirrors `PulseGeneratorSim`: a free-running `adc`/`carrier` stream (`io.time` = cycle), a couple of
 * scheduled readout windows, and a '''golden model = the composition of the per-block bit-exact
 * models''' (`ComplexMul.model` per lane, summed across lanes and across the window).
 *
 * The stream is a tone whose `adc` is `±conj(carrier)`, so the demod is `±|carrier|²` — a clean
 * positive (readout A) / negative (readout B) integral exercising both `res` signs. Checks:
 *
 *   1. `real`/`imag` '''bit-exact''' vs the integral of the per-lane demod over the timestamps
 *      `[startTime, startTime+dur]` — which, since each batch's demod differs, simultaneously
 *      validates the '''derived window alignment''' (`timeOffset = 0` ⇒ exactly that window). A
 *      shifted-window cross-check confirms the alignment test is sharp (off-by-one would be caught).
 *   2. `res.payload == sign(real)`, low during integration, valid after the settle.
 *   3. `demodData` valid exactly `dur+1` cycles per window, payload bit-exact vs the demod model
 *      (it lags the integrated batches by the tree latency, as in the reference).
 *
 * Run with `./.metals/mill runMain riscq.dsp.pulse.sim.ReadoutDecoderSim`.
 */
object ReadoutDecoderSim extends App {

  case class Readout(startTime: Int, dur: Int)

  def run(saturate: Boolean): Unit = {
    val p = ReadoutDecoderParams(batchSize = 4, dataWidth = 16, accWidth = 32, timeWidth = 16,
      durWidth = 8, saturate = saturate)
    val N = p.batchSize
    val w = p.dataWidth
    val amax = (1 << (w - 1)) - 1

    // ── stimulus codes (deterministic tone; adc = ±conj(carrier)) ──
    def clampCode(s: Long): Int = (if (s > amax) amax.toLong else if (s < -amax) -amax.toLong else s).toInt
    def toCode(v: Double): Int  = clampCode(scala.math.round(v * (1 << (w - 1))))
    val freq = 1.0 / 16
    def signFor(t: Int): Int    = if (t < 70) 1 else -1   // flip between the two windows ⇒ +/− integrals
    def carrierCode(t: Int, k: Int): (Int, Int) = {
      val th = (t.toLong * N + k) * freq
      (toCode(0.5 * scala.math.cos(th)), toCode(0.5 * scala.math.sin(th)))
    }
    def adcCode(t: Int, k: Int): (Int, Int) = {
      val (cr, ci) = carrierCode(t, k); val s = signFor(t)
      (s * cr, -s * ci)                                   // s · conj(carrier), |adc| = |carrier| < 1
    }

    // ── golden model ──
    def demodModel(t: Int, k: Int): (BigInt, BigInt) = {
      val (ar, ai) = adcCode(t, k); val (br, bi) = carrierCode(t, k)
      val v = ComplexMul.model(w, ar, ai, br, bi, saturate)
      if (!saturate) assert(v == ComplexMul.model(w, ar, ai, br, bi, saturate = true),
        s"[no-sat] demod overflowed at t=$t k=$k — headroom too small")
      v
    }
    def add(a: (BigInt, BigInt), b: (BigInt, BigInt)) = (a._1 + b._1, a._2 + b._2)
    def batchSum(t: Int): (BigInt, BigInt) = (0 until N).map(demodModel(t, _)).foldLeft((BigInt(0), BigInt(0)))(add)
    def wrap(x: BigInt): BigInt = {
      val m = BigInt(1) << p.accWidth; val r = ((x % m) + m) % m
      if (r >= (BigInt(1) << (p.accWidth - 1))) r - m else r
    }
    def windowSum(st: Int, dur: Int): (BigInt, BigInt) = {
      val s = (st to st + dur).map(batchSum).foldLeft((BigInt(0), BigInt(0)))(add)
      (wrap(s._1), wrap(s._2))
    }

    val rA = Readout(startTime = 40, dur = 6)   // arm 30, fire ~startTime+Ldemod−1, positive integral
    val rB = Readout(startTime = 90, dur = 5)    // arm 80, negative integral
    val armA = 30; val armB = 80
    val totalCycles = 135

    SimConfig.compile(ReadoutDecoder(p)).doSim(s"readout_sat$saturate", seed = 42) { dut =>
      val cd = dut.clockDomain
      cd.forkStimulus(10)
      dut.io.dur.valid #= false
      dut.io.time #= 0; dut.io.startTime #= 0
      for (k <- 0 until N) {
        dut.io.adc(k).re #= 0; dut.io.adc(k).im #= 0
        dut.io.carrier(k).re #= 0; dut.io.carrier(k).im #= 0
      }
      cd.waitSampling(2)

      val Lmul = dut.mulLatency
      val resV  = Array.ofDim[Boolean](totalCycles)
      val resP  = Array.ofDim[Boolean](totalCycles)
      val realC = Array.ofDim[BigInt](totalCycles)
      val imagC = Array.ofDim[BigInt](totalCycles)
      val dV    = Array.ofDim[Boolean](totalCycles)
      val dRe   = Array.ofDim[BigInt](totalCycles, N)
      val dIm   = Array.ofDim[BigInt](totalCycles, N)

      for (c <- 0 until totalCycles) {
        dut.io.time #= c
        for (k <- 0 until N) {
          val (ar, ai) = adcCode(c, k); val (cr, ci) = carrierCode(c, k)
          dut.io.adc(k).re #= ar; dut.io.adc(k).im #= ai
          dut.io.carrier(k).re #= cr; dut.io.carrier(k).im #= ci
        }
        dut.io.dur.valid #= false
        if (c == armA) { dut.io.dur.valid #= true; dut.io.dur.payload #= rA.dur; dut.io.startTime #= rA.startTime }
        if (c == armB) { dut.io.dur.valid #= true; dut.io.dur.payload #= rB.dur; dut.io.startTime #= rB.startTime }
        cd.waitSampling()
        resV(c)  = dut.io.res.valid.toBoolean
        resP(c)  = dut.io.res.payload.toBoolean
        realC(c) = dut.io.real.toBigInt
        imagC(c) = dut.io.imag.toBigInt
        dV(c)    = dut.io.demodData.valid.toBoolean
        for (k <- 0 until N) {
          dRe(c)(k) = dut.io.demodData.payload(k).re.toBigInt
          dIm(c)(k) = dut.io.demodData.payload(k).im.toBigInt
        }
      }

      // ── integral + sign + alignment (read at a settled cycle between/after the windows) ──
      def checkReadout(r: Readout, readCycle: Int, label: String): Unit = {
        val (gr, gi) = windowSum(r.startTime, r.dur)
        assert(resV(readCycle), s"[$label] res.valid not set at read cycle $readCycle")
        assert(realC(readCycle) == gr && imagC(readCycle) == gi,
          s"[$label] real/imag dut=(${realC(readCycle)},${imagC(readCycle)}) golden=($gr,$gi)")
        assert(resP(readCycle) == (gr < 0), s"[$label] res.payload dut=${resP(readCycle)} golden=${gr < 0}")
        // sharpness: a +1-shifted window differs ⇒ an off-by-one in the alignment would be caught here.
        val (sr, _) = windowSum(r.startTime + 1, r.dur)
        if (sr != gr) assert(realC(readCycle) != sr, s"[$label] alignment not sharp: +1-shifted window matched")
      }
      checkReadout(rA, readCycle = 75, "A(+)")
      checkReadout(rB, readCycle = 128, "B(-)")
      assert(windowSum(rA.startTime, rA.dur)._1 > 0, "readout A should integrate positive")
      assert(windowSum(rB.startTime, rB.dur)._1 < 0, "readout B should integrate negative")
      assert(!resV(52), "res.valid should be low mid-integration (A)")

      // ── demodData: exactly dur+1 valids per window, payload bit-exact (lags by the tree latency) ──
      val demodCycles = (0 until totalCycles).filter(dV)
      assert(demodCycles.length == (rA.dur + 1) + (rB.dur + 1),
        s"demodData valid count ${demodCycles.length} != ${(rA.dur + 1) + (rB.dur + 1)}")
      for (s <- demodCycles; k <- 0 until N) {
        val t = s - Lmul                                   // demodData payload = demod of batch (cycle − Lmul)
        val (er, ei) = demodModel(t, k)
        assert(dRe(s)(k) == er && dIm(s)(k) == ei,
          s"demodData cycle $s lane $k dut=(${dRe(s)(k)},${dIm(s)(k)}) golden=($er,$ei) (batch ts=$t)")
      }
      simSuccess()
    }
    println(s"[ReadoutDecoderSim] PASS saturate=$saturate: 2 readouts (+/−) — bit-exact integral + sign + " +
      s"derived window alignment ([startTime,+dur]) + demodData trace.")
  }

  run(saturate = false)
  run(saturate = true)
}
