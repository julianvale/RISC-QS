package riscq.soc.sim

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import riscq.dsp._
import riscq.dsp.pulse._
import riscq.soc.link.RfCmd
import riscq.soc.rf.{PulseParamBuffer, PulseParamBufferParams}

/**
 * Sign-off for [[PulseParamBuffer]]: drive the buffer's **posted** `Flow(RfCmd)` directly — write a
 * pulse table entry + the shared `freq` + the per-buffer `startTime`, then "fire" it by writing
 * `outId` — feed its output `Flow`s into a real [[PulseGenerator]], and check the generated pulse
 * bit-exact vs the **existing [[PulseGenerator]] golden** (the composed per-block model, reused from
 * `PulseGeneratorSim`).
 *
 * This proves the posted-link register file is value-preserving: the RF register map (offsets /
 * `bitOffset=16` field packing / fire semantics) decoded off a one-way `RfCmd` stream, with
 * `startTime` folded into the buffer (per-buffer register).
 *
 * Run with `./.metals/mill runMain riscq.soc.sim.PulseParamBufferSim`.
 */
object PulseParamBufferSim extends App {

  // small but faithful config: pulseNum=2, batchSize 4, complex envelope.
  val batchSize  = 4
  val w          = 16
  val timeWidth  = 32
  val envAddrW   = 6
  val durWidth   = 8
  val pulseNum   = 2
  val memLatency = 2
  val addrWidth  = 16
  val prescaleAmp = true
  val saturate    = false
  val useMem      = sys.env.get("RISCQ_PARAMBUF_USEMEM").exists(_.toBoolean) // A/B the table storage style

  val N     = batchSize
  val amax  = (BigInt(1) << (w - 1)) - 1
  val maskW = BigInt(1) << w
  val nA    = 1 << envAddrW
  def signedW(pat: BigInt): BigInt = if (pat.testBit(w - 1)) pat - maskW else pat
  def uMod(x: BigInt, m: BigInt): BigInt = ((x % m) + m) % m

  // complex envelope memory content (same scheme as PulseGeneratorSim).
  def reK(a: Int, k: Int): BigInt = (if (k == 0) BigInt(a) else BigInt(a * 5 + k * 11 + 3)) & (maskW - 1)
  def imK(a: Int, k: Int): BigInt = BigInt(a * 7 + k * 13 + 1) & (maskW - 1)
  val content: Seq[BigInt] = (0 until nA).map { a =>
    var word = BigInt(0)
    for (k <- 0 until N) { word |= reK(a, k) << (2 * k * w); word |= imK(a, k) << ((2 * k + 1) * w) }
    word
  }

  // ── golden (composition of the per-block bit-exact models), from PulseGeneratorSim ──
  val cp = CordicParams(xyWidth = w, zWidth = w, correctGain = !prescaleAmp, saturate = saturate)
  val phMag: BigInt =
    if (saturate) amax else amax - BigInt(scala.math.ceil(Cordic.errorBound(cp, amax.toDouble)).toLong) - 1
  val phasorMag: BigInt = if (prescaleAmp) BigInt((phMag.toDouble / Cordic.gain(cp.iters)).round) else phMag

  def cmul(ar: BigInt, ai: BigInt, br: BigInt, bi: BigInt): (BigInt, BigInt) = {
    val v = ComplexMul.model(w, ar, ai, br, bi, saturate)
    if (!saturate) assert(v == ComplexMul.model(w, ar, ai, br, bi, saturate = true), s"[no-sat] ComplexMul overflow")
    v
  }
  def crot(mag: BigInt, z: BigInt): (BigInt, BigInt) = {
    val v = Cordic.rotate(cp, mag, BigInt(0), z)
    if (!saturate) assert(v == Cordic.rotate(cp.copy(saturate = true), mag, BigInt(0), z), s"[no-sat] Cordic overflow")
    v
  }
  def gPhase(freq: BigInt, phase: BigInt, tau: BigInt): BigInt = {
    val bt = signedW((tau * N) & (maskW - 1)); val tpLow = signedW(uMod(freq * bt, maskW))
    signedW(uMod(tpLow + phase, maskW))
  }
  def env(addr: Int, k: Int): (BigInt, BigInt) = (signedW(reK(addr & (nA - 1), k)), signedW(imK(addr & (nA - 1), k)))
  def phasor(freq: BigInt, k: Int): (BigInt, BigInt) = crot(phasorMag, signedW((BigInt(k) * freq) & (maskW - 1)))
  def carrier(amp: BigInt, freq: BigInt, phase: BigInt, tau: BigInt, k: Int): (BigInt, BigInt) = {
    val (cr, ci) = crot(amp, gPhase(freq, phase, tau)); val (pr, pi) = phasor(freq, k); cmul(cr, ci, pr, pi)
  }
  def goldenPulse(amp: BigInt, freq: BigInt, phase: BigInt, base: Int, i: Int, tau: BigInt, k: Int): (BigInt, BigInt) = {
    val (cr, ci) = carrier(amp, freq, phase, tau, k); val (er, ei) = env(base + i, k); cmul(cr, ci, er, ei)
  }

  case class Pulse(idx: Int, startTime: Int, amp: BigInt, freq: BigInt, phase: BigInt, base: Int, dur: Int)
  val pA = Pulse(0, startTime = 300, amp = 10000, freq = 2000, phase = 3000, base = 10, dur = 6)
  val pB = Pulse(1, startTime = 450, amp = 7000,  freq = -1500, phase = 1000, base = 20, dur = 5)
  val totalCycles = 560

  /** Test top: a [[PulseParamBuffer]] driven by a poke-able `RfCmd` Flow, its output Flows feeding a
   *  real [[PulseGenerator]]; poke-able `timeBcast`; the complex envelope Mem; the pulse re-exported. */
  case class Dut() extends Component {
    val cmd       = slave port Flow(RfCmd(addrWidth))
    val timeBcast = in port UInt(timeWidth bits)

    val buf = PulseParamBuffer(PulseParamBufferParams(
      pulseNum = pulseNum, dataWidth = w, envAddrWidth = envAddrW, durWidth = durWidth,
      timeWidth = timeWidth, addrWidth = addrWidth, useMem = useMem))
    buf.io.cmd << cmd
    buf.io.timeBcast := timeBcast

    val pg = PulseGenerator(PulseGeneratorParams(
      batchSize = batchSize, dataWidth = w, timeWidth = timeWidth, addrWidth = envAddrW,
      durWidth = durWidth, memLatency = memLatency, prescaleAmp = prescaleAmp, saturate = saturate))
    pg.io.time      := buf.io.time
    pg.io.startTime := buf.io.startTime
    pg.io.phase << buf.io.phase
    pg.io.amp   << buf.io.amp
    pg.io.addr  << buf.io.addr
    pg.io.dur   << buf.io.dur
    pg.io.freq  << buf.io.freq

    val mem = Mem.fill(content.length)(Bits(N * 2 * w bits)) init (content.map(c => B(c, N * 2 * w bits)))
    pg.io.memPort.rsp := Delay(mem.readSync(pg.io.memPort.cmd.payload), memLatency - 1)

    val pulse = master port cloneOf(pg.io.pulse)
    pulse << pg.io.pulse
  }

  def w16(v: BigInt): Int = (((v & 0xFFFF) << 16) & 0xFFFFFFFFL).toInt // 16-bit field in data[31:16]

  SimConfig.compile(Dut()).doSim("pulseParamBuffer", seed = 42) { dut =>
    val cd = dut.clockDomain
    dut.cmd.valid #= false
    dut.cmd.payload.address #= 0
    dut.cmd.payload.data #= 0
    dut.timeBcast #= 0
    cd.forkStimulus(10)
    cd.waitSampling(20)

    // ── posted-write helpers: pulse one RfCmd beat ──
    def post(addr: Int, data: Int): Unit = {
      dut.cmd.valid #= true
      dut.cmd.payload.address #= addr
      dut.cmd.payload.data #= data & 0xFFFFFFFFL
      cd.waitSampling()
      dut.cmd.valid #= false
      cd.waitSampling(2)
    }
    val startTimeAddr = 0x4100
    def writePulse(p: Pulse): Unit = {
      post(startTimeAddr, p.startTime)         // per-buffer startTime
      post(0x4, w16(p.freq))                   // shared freq @4
      val base = (p.idx + 1) * 0x10
      post(base + 0,  w16(p.phase))            // table[idx].phase
      post(base + 4,  w16(p.amp))              // table[idx].amp
      post(base + 8,  w16(BigInt(p.base)))     // table[idx].env (base address)
      post(base + 12, w16(BigInt(p.dur)))      // table[idx].dur
      post(0x0, p.idx)                         // fire: write outId
    }
    writePulse(pA)
    writePulse(pB)

    // ── ramp timeBcast and capture the pulse per cycle ──
    val capV  = Array.ofDim[Boolean](totalCycles)
    val capRe = Array.ofDim[BigInt](totalCycles, N)
    val capIm = Array.ofDim[BigInt](totalCycles, N)
    for (c <- 0 until totalCycles) {
      dut.timeBcast #= c
      cd.waitSampling()
      capV(c) = dut.pulse.valid.toBoolean
      for (k <- 0 until N) { capRe(c)(k) = dut.pulse.payload(k).re.toBigInt; capIm(c)(k) = dut.pulse.payload(k).im.toBigInt }
    }

    val timeToPulse = dut.pg.timeToPulse

    // verify one pulse: contiguous valid window exactly `dur` long, bit-exact vs the golden, returning
    // its measured wall-clock start offset from startTime (the uniform bulk latency).
    def checkPulse(p: Pulse): Int = {
      val win = (0 until totalCycles).filter(capV).filter(c => c >= p.startTime - 10 && c < p.startTime + p.dur + 20)
      assert(win.nonEmpty, s"[pulse ${p.idx}] no valid window near startTime=${p.startTime}")
      val c0 = win.head
      assert(win == (c0 until c0 + p.dur), s"[pulse ${p.idx}] window $win != [$c0, ${c0 + p.dur})")
      for (i <- 0 until p.dur; k <- 0 until N) {
        val tau = BigInt(p.startTime + i - timeToPulse)
        val (gre, gim) = goldenPulse(p.amp, p.freq, p.phase, p.base, i, tau, k)
        assert(capRe(c0 + i)(k) == gre && capIm(c0 + i)(k) == gim,
          s"[pulse ${p.idx}] batch $i lane $k: dut(${capRe(c0 + i)(k)},${capIm(c0 + i)(k)}) != golden($gre,$gim)")
      }
      c0 - p.startTime
    }
    val offA = checkPulse(pA)
    val offB = checkPulse(pB)
    assert(offA == offB, s"channel bulk latency differs between pulses: $offA vs $offB")

    val totalValid = (0 until totalCycles).count(capV)
    assert(totalValid == pA.dur + pB.dur, s"total valid cycles $totalValid != ${pA.dur + pB.dur}")
    for (c <- 0 until totalCycles if !capV(c); k <- 0 until N)
      assert(capRe(c)(k) == 0 && capIm(c)(k) == 0, s"non-zero payload at idle cycle $c lane $k")

    println(s"[PulseParamBufferSim] PASS  pulseNum=$pulseNum N=$N w=$w useMem=$useMem: 2 posted-RfCmd-driven pulses bit-exact " +
      s"vs the PulseGenerator golden; valid window exactly [startTime+$offA, +dur); uniform bulk latency $offA.")
    simSuccess()
  }
}
