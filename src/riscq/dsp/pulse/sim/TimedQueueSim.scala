package riscq.dsp.pulse.sim

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import riscq.dsp.pulse._

import scala.collection.mutable
import scala.util.Random

/**
 * Self-checking testbench for the active RISC-Q-style [[TimedQueue]]. A '''cycle-accurate mirror'''
 * of the hardware FSM runs in lock-step:
 * the registered compare `timeUp = RegNext(head.valid && (time + lead + 1 ≥ startTime))` and the
 * fire-once `blank = RegNext(pop)` are modelled exactly, so `pop = head.valid && timeUp && !blank` is
 * asserted equal to the DUT every cycle. This verifies the precise pop cycle (`= startTime − leadTime`
 * for well-spaced schedules, the `+1` cancelling the compare register), the wrap-safe geq, time
 * wrap-around, full-queue backpressure, and in-order completeness. Back-to-back already-due entries
 * drain one every two cycles (the edge-detect blank — II=1 is the variants' job). Run with
 * `./.metals/mill runMain riscq.dsp.pulse.sim.TimedQueueSim`.
 */
object TimedQueueSim extends App {

  val timeWidth = 8
  val depth     = 4
  val mask      = (BigInt(1) << timeWidth) - 1
  val msb       = BigInt(1) << (timeWidth - 1)

  /** wrap-safe geq: (time + lead + offset + 1) ≥ startTime, signed-difference msb test. */
  def geqPlus1(time: BigInt, startTime: BigInt, leadTime: Int, timeOffset: Int): Boolean = {
    val a = (time + leadTime + timeOffset + 1) & mask
    (((a - startTime) & mask) & msb) == 0
  }

  /** One scripted/random run over `cycles`, time starting at `time0` (mod 2^tw). */
  def run(label: String, leadTime: Int, timeOffset: Int, time0: BigInt,
          schedule: Int => Option[(BigInt, BigInt)], cycles: Int,
          backpressureFrom: Int = -1): Unit = {
    SimConfig.compile(TimedQueue(UInt(timeWidth bits), timeWidth, depth, leadTime, timeOffset))
      .doSim(s"$label", seed = 42) { dut =>
      dut.clockDomain.forkStimulus(10)
      dut.io.push.valid #= false
      dut.clockDomain.waitSampling(2)

      val mq     = mutable.Queue[(BigInt, BigInt)]() // (data, startTime), push order = FIFO order
      val pushed = mutable.ArrayBuffer[BigInt]()
      val popped = mutable.ArrayBuffer[BigInt]()
      var time   = time0 & mask
      var timeUp = false // model of the registered compare
      var blank  = false // model of RegNext(pop) — the fire-once blank

      for (c <- 0 until cycles) {
        val pushReq = schedule(c)
        dut.io.time #= time
        dut.io.push.valid #= pushReq.isDefined
        pushReq.foreach { case (d, s) =>
          dut.io.push.payload.data #= d
          dut.io.push.payload.startTime #= s
        }
        sleep(1) // settle the combinational pop / push.ready

        val headValid = mq.nonEmpty
        val expPop    = headValid && timeUp && !blank
        val popV      = dut.io.pop.valid.toBoolean
        val pReady    = dut.io.push.ready.toBoolean
        assert(popV == expPop,
          s"[$label] cycle $c time=$time: pop.valid=$popV but model expects $expPop (head=${mq.headOption})")
        if (popV) assert(dut.io.pop.payload.toBigInt == mq.head._1,
          s"[$label] cycle $c: pop data ${dut.io.pop.payload.toBigInt} != head ${mq.head._1}")
        if (backpressureFrom >= 0 && c >= backpressureFrom && !expPop)
          assert(pReady == (mq.size < depth),
            s"[$label] cycle $c: push.ready=$pReady but model size=${mq.size}, depth=$depth")

        // next-cycle registers, computed from the head this cycle reads (pre-dequeue).
        val nextTimeUp = headValid && geqPlus1(time, mq.head._2, leadTime, timeOffset)
        val nextBlank  = expPop

        dut.clockDomain.waitSampling()
        if (expPop) popped += mq.dequeue()._1
        pushReq.foreach { case (d, s) => if (pReady) { mq.enqueue((d, s)); pushed += d } }
        timeUp = nextTimeUp; blank = nextBlank
        time = (time + 1) & mask
      }
      assert(popped.toSeq == pushed.toSeq,
        s"[$label] pop order ${popped.toSeq} != push order ${pushed.toSeq}")
      println(f"[TimedQueueSim] PASS  $label%-22s lead=$leadTime off=$timeOffset: " +
        f"${pushed.size} pushed / ${popped.size} popped, cycle-exact FSM + in-order + wrap-safe.")
      simSuccess()
    }
  }

  // --- A: clean timing — 4 monotonic, well-spaced future startTimes; each pops at startTime−lead ---
  run("clean-timing", leadTime = 3, timeOffset = 0, time0 = 0,
    schedule = c => Map(0 -> (BigInt(10), BigInt(20)), 1 -> (BigInt(11), BigInt(40)),
                        2 -> (BigInt(12), BigInt(60)), 3 -> (BigInt(13), BigInt(80))).get(c),
    cycles = 100)

  // --- B: past startTime — pushed when already due ⇒ each drains as it reaches the head (II=2) ---
  run("past-due", leadTime = 3, timeOffset = 0, time0 = 50,
    schedule = c => Map(0 -> (BigInt(20), BigInt(5)),
                        1 -> (BigInt(21), BigInt(6)),
                        2 -> (BigInt(22), BigInt(7))).get(c),
    cycles = 30)

  // --- C: backpressure — push every cycle into a queue that can't pop yet (start 15 > time+lead) ---
  run("backpressure", leadTime = 3, timeOffset = 0, time0 = 0,
    schedule = c => if (c < 8) Some((BigInt(100 + c), BigInt(15))) else None,
    cycles = 25, backpressureFrom = 0)

  // --- D: time wrap — counter starts near 2^tw and wraps; startTimes straddle the wrap ---
  run("wrap", leadTime = 3, timeOffset = 0, time0 = mask - 4,
    schedule = c => Map(0 -> (BigInt(30), BigInt(2)),
                        1 -> (BigInt(31), BigInt(10)),
                        2 -> (BigInt(32), BigInt(20))).get(c),
    cycles = 60)

  // --- E: timeOffset — a calibration offset that shifts every due time earlier ---
  run("offset", leadTime = 2, timeOffset = 5, time0 = 0,
    schedule = c => Map(0 -> (BigInt(7), BigInt(30)), 1 -> (BigInt(8), BigInt(55))).get(c),
    cycles = 80)

  // --- F: randomized near-future schedule (within the ±2^(tw-1) wrap window), honouring backpressure ---
  val rng = new Random(1)
  run("random", leadTime = 3, timeOffset = 0, time0 = 100,
    schedule = c => if (c < 3700 && rng.nextInt(4) == 0) { // sparser pushes + early stop so it drains
      val now = (100 + c) & mask.toInt
      Some((BigInt(c & 0xff), BigInt((now + 6 + rng.nextInt(40)) & mask.toInt))) // ≥ a few cycles out
    } else None,
    cycles = 4000)

  println("[TimedQueueSim] all scenarios PASS")
}
