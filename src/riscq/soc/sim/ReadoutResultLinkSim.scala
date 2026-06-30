package riscq.soc.sim

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.bus.tilelink
import spinal.lib.bus.tilelink.DebugId
import spinal.lib.bus.tilelink.fabric.MasterBus
import spinal.lib.bus.tilelink.sim.{IdAllocator, IdCallback, MasterAgent}
import spinal.lib.bus.misc.SizeMapping
import riscq.dsp._
import riscq.dsp.pulse._
import riscq.soc.fabric.MemMapFiber
import riscq.soc.link.{ReadoutResult, ReadoutResultLink, ReadoutResultSink, RfLink}

import scala.math.{cos, sin}

/**
 * Sign-off for the readout-result up-path: a real [[ReadoutDecoder]] on the "DSP side" integrates a tone
 * over two scheduled windows; its result is emitted on the upstream posted `Flow`
 * ([[ReadoutResultLink.source]]), **pipelined** by `linkPipe` stages, and latched by a core-side
 * [[ReadoutResultSink]]. The CPU (a `MasterAgent`) reads
 * `res`@4 / `real`@8 / `imag`@12 from the sink's **local** map — the `res` read HALTS locally until
 * the integral settles — and the values are checked bit-exact vs the windowed-demod golden. The
 * `dur`-arm is posted **down** (also pipelined) to the decoder while
 * the sink's `valid` is **cleared locally** on the same arm, proving freshness (the second window never
 * returns the first window's stale result).
 *
 * Swept over `linkPipe ∈ {0, 4, 16}` to show the path is distance-tolerant (every stage a plain
 * `RegNext`, absorbed by the lead time). Run with `./.metals/mill runMain riscq.soc.sim.ReadoutResultLinkSim`.
 */
object ReadoutResultLinkSim extends App {
  val N = 4; val w = 16; val timeWidth = 32; val accWidth = 32; val durWidth = 8
  val amax = (BigInt(1) << (w - 1)) - 1
  val saturate = false

  // ── tone + golden (windowed-demod model) ──
  val freq = 1.0 / 16
  def clampCode(s: Long): Int = (if (s > amax) amax.toLong else if (s < -amax) -amax.toLong else s).toInt
  def toCode(v: Double): Int  = clampCode(scala.math.round(v * (1 << (w - 1))))
  def signFor(t: Int): Int    = if (t < 130) 1 else -1
  def carrierCode(t: Int, k: Int): (Int, Int) = {
    val th = (t.toLong * N + k) * freq; (toCode(0.5 * cos(th)), toCode(0.5 * sin(th)))
  }
  def adcCode(t: Int, k: Int): (Int, Int) = { val (cr, ci) = carrierCode(t, k); val s = signFor(t); (s * cr, -s * ci) }
  def demodModel(t: Int, k: Int): (BigInt, BigInt) = {
    val (ar, ai) = adcCode(t, k); val (br, bi) = carrierCode(t, k); ComplexMul.model(w, ar, ai, br, bi, saturate)
  }
  def add(a: (BigInt, BigInt), b: (BigInt, BigInt)) = (a._1 + b._1, a._2 + b._2)
  def batchSum(t: Int): (BigInt, BigInt) = (0 until N).map(demodModel(t, _)).foldLeft((BigInt(0), BigInt(0)))(add)
  def wrap(x: BigInt): BigInt = { val m = BigInt(1) << accWidth; val r = ((x % m) + m) % m; if (r >= (BigInt(1) << (accWidth - 1))) r - m else r }
  def windowSum(st: Int, dur: Int): (BigInt, BigInt) = {
    val s = (st to st + dur).map(batchSum).foldLeft((BigInt(0), BigInt(0)))(add); (wrap(s._1), wrap(s._2))
  }
  def signedAcc(u: BigInt): BigInt = { val m = BigInt(1) << 32; val r = ((u % m) + m) % m; if (r >= (BigInt(1) << 31)) r - m else r }
  def w16(v: BigInt): Int = (((v & 0xFFFF) << 16) & 0xFFFFFFFFL).toInt

  // two windows: A (positive sign, t<130) and B (negative sign, t≥130).
  val rA = (90, 6); val rB = (200, 5); val totalCycles = 360

  case class Dut(linkPipe: Int) extends Component {
    val tlBus = new MasterBus(tilelink.M2sParameters(addressWidth = 8, dataWidth = 32,
      masters = List(tilelink.M2sAgent(name = this, mapping = List(tilelink.M2sSource(
        id = SizeMapping(0, 4), emits = tilelink.M2sTransfers(
          get = tilelink.SizeRange.upTo(0x40), putFull = tilelink.SizeRange.upTo(0x40),
          putPartial = tilelink.SizeRange.upTo(0x40))))))))
    val time      = in port UInt(timeWidth bits)
    val startTime = in port UInt(timeWidth bits)
    val adcIn     = in port ComplexBatch(N, w)
    val carrierIn = in port ComplexBatch(N, w)
    val durIn     = slave port Flow(UInt(durWidth bits))   // the CPU's dur-arm (posted down + local snoop)

    // ── DSP side: decoder fed the tone; dur posted DOWN through the link ──
    val rd = ReadoutDecoder(ReadoutDecoderParams(
      batchSize = N, dataWidth = w, accWidth = accWidth, timeWidth = timeWidth, durWidth = durWidth, saturate = saturate))
    rd.io.time      := time
    rd.io.startTime := startTime
    rd.io.adc       := adcIn
    rd.io.carrier   := carrierIn
    rd.io.dur       << RfLink.pipe(durIn, linkPipe)

    // ── result posted UP through the link into the core-side sink ──
    val upSrc = ReadoutResultLink.source(rd.io.res.valid, rd.io.res.payload, rd.io.real, rd.io.imag, accWidth)
    val sink  = ReadoutResultSink(accWidth, resAddr = 4, realAddr = 8, imagAddr = 12)
    sink.resultIn << RfLink.pipe(upSrc, linkPipe)
    sink.arm      := durIn.valid          // core-local arm snoop (clears a stale result)
    sink.valid.simPublic()

    // ── core-side local read map for res/real/imag ──
    val sinkMap = MemMapFiber(addressWidth = 8, dataWidth = 32)
    sinkMap.addMapping(sink.mapping)
    sinkMap.up at 0 of tlBus.node
  }

  def runOne(linkPipe: Int): Unit = {
    SimConfig.compile(Dut(linkPipe)).doSim(s"readoutResultLink_pipe$linkPipe", seed = 42) { dut =>
      val cd = dut.clockDomain
      dut.tlBus.node.bus.a.valid #= false
      dut.durIn.valid #= false
      cd.forkStimulus(10)
      dut.time #= 0; dut.startTime #= 0
      for (k <- 0 until N) { dut.adcIn(k).re #= 0; dut.adcIn(k).im #= 0; dut.carrierIn(k).re #= 0; dut.carrierIn(k).im #= 0 }
      implicit val idAllocator = new IdAllocator(DebugId.width)
      implicit val idCallback  = new IdCallback
      val agent = new MasterAgent(dut.tlBus.node.bus, cd)

      // free-running tone (drives time + adc/carrier every cycle).
      fork {
        for (c <- 0 until totalCycles) {
          dut.time #= c
          for (k <- 0 until N) {
            val (ar, ai) = adcCode(c, k); val (cr, ci) = carrierCode(c, k)
            dut.adcIn(k).re #= ar; dut.adcIn(k).im #= ai; dut.carrierIn(k).re #= cr; dut.carrierIn(k).im #= ci
          }
          cd.waitSampling()
        }
      }
      cd.waitSampling(10)

      // arm one window (set startTime, pulse durIn for 1 cycle), assert the sink cleared, then read the
      // (locally halting) result through the up-link.
      def armAndRead(st: Int, dur: Int, label: String): (Boolean, BigInt, BigInt) = {
        dut.startTime #= st
        dut.durIn.valid #= true; dut.durIn.payload #= dur
        cd.waitSampling()
        dut.durIn.valid #= false
        cd.waitSampling(2)
        assert(!dut.sink.valid.toBoolean, s"[$label] sink.valid not cleared on arm (stale result readable)")
        val resWord = agent.getInt(0, 4)                 // HALTS locally until the integral settles
        ((resWord & 1) != 0, signedAcc(agent.getInt(0, 8)), signedAcc(agent.getInt(0, 12)))
      }

      // window A then window B (B's arm must clear A's just-read result → freshness).
      waitUntil(dut.time.toBigInt >= 20)
      val (sgnA, reA, imA) = armAndRead(rA._1, rA._2, "A")
      waitUntil(dut.time.toBigInt >= rA._1 + rA._2 + 30)
      val (sgnB, reB, imB) = armAndRead(rB._1, rB._2, "B")

      for ((label, st, dur, sgn, re, im) <- Seq(("A", rA._1, rA._2, sgnA, reA, imA), ("B", rB._1, rB._2, sgnB, reB, imB))) {
        val (gr, gi) = windowSum(st, dur)
        assert(re == gr && im == gi, s"[$label pipe$linkPipe] real/imag dut=($re,$im) golden=($gr,$gi)")
        assert(sgn == (gr < 0), s"[$label pipe$linkPipe] res.sign dut=$sgn golden=${gr < 0}")
      }
      assert(windowSum(rA._1, rA._2)._1 > 0 && windowSum(rB._1, rB._2)._1 < 0, "windows should be +/-")
      println(s"[ReadoutResultLinkSim] PASS linkPipe=$linkPipe: result up-Flow round-trips, local halting res/real/imag " +
        s"reads bit-exact vs golden (+/- integrals), sink cleared on arm (freshness).")
      simSuccess()
    }
  }

  for (pipe <- Seq(0, 4, 16)) runOne(pipe)
}
