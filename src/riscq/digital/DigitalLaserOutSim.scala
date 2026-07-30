package riscq.digital.sim

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import riscq.digital._
import riscq.soc.link.RfCmd

/**
 * Small end-to-end simulation for the laser register buffer, timed queue, and SV output block.
 *
 * Run from the repository root with:
 *   ./.metals/mill runMain riscq.digital.sim.DigitalLaserOutSim
 */
object DigitalLaserOutSim extends App {
  val addrWidth = 16
  val timeWidth = 32
  val startTime = 30
  val duration  = 4

  case class Dut() extends Component {
    val dspCd = ClockDomain.external("dsp")
    val cmd       = slave port Flow(RfCmd(addrWidth))
    val timeBcast = in port UInt(timeWidth bits)

    val paramsValid = out Bool()
    val paramsBits  = out Bits(25 bits)
    val laserOut    = out Bool()

    val logic = new ClockingArea(dspCd) {
      val buffer = LaserParamBuffer(LaserParamBufferParams(
        timeWidth = timeWidth, addrWidth = addrWidth))
      val sched = DigitalLaserScheduler(LaserSchedulerParams(
        timeWidth = timeWidth, laserLead = 1, queueDepth = 4))

      buffer.io.cmd       << cmd
      buffer.io.timeBcast := timeBcast
      sched.io.time       := buffer.io.time
      sched.io.startTime  := buffer.io.startTime
      sched.io.params     << buffer.io.params
    }

    paramsValid := logic.buffer.io.params.valid
    paramsBits  := logic.buffer.io.params.payload.asBits
    laserOut    := logic.sched.io.laserOut
  }

  SimConfig.compile(Dut()).doSim("digitalLaserOut", seed = 42) { dut =>
    val cd = dut.dspCd
    dut.cmd.valid #= false
    dut.cmd.payload.address #= 0
    dut.cmd.payload.data #= 0
    dut.timeBcast #= 0
    cd.forkStimulus(10)
    cd.resetSim #= true
    cd.waitSampling(4)
    cd.resetSim #= false
    cd.waitSampling(2)

    var paramEvents = 0
    var paramBits = BigInt(0)
    def observeParams(): Unit = {
      if (dut.paramsValid.toBoolean) {
        paramEvents += 1
        paramBits = dut.paramsBits.toBigInt
      }
    }

    def post(address: Int, data: BigInt): Unit = {
      dut.cmd.valid #= true
      dut.cmd.payload.address #= address
      dut.cmd.payload.data #= data
      cd.waitSampling()
      sleep(1)
      observeParams()
      dut.cmd.valid #= false
      cd.waitSampling()
      sleep(1)
      observeParams()
    }

    // Program held registers, then issue one fire command. The parameter event is delayed by
    // one cycle in the buffer, matching the delayed startTime export.
    post(0x04, 2)                 // half-period
    post(0x08, duration)          // duration
    post(0x0c, 1)                 // continuous-wave mode
    post(0x10, startTime)         // scheduled start time
    post(0x00, 1)                 // fire; write data is intentionally ignored

    var firstHighTime = Option.empty[Int]
    var highSeen = false
    var lowAfterHigh = false

    for (t <- 0 until 80) {
      dut.timeBcast #= t
      cd.waitSampling()
      sleep(1)

      observeParams()
      if (dut.laserOut.toBoolean && !highSeen) firstHighTime = Some(t)
      if (dut.laserOut.toBoolean) highSeen = true
      if (highSeen && !dut.laserOut.toBoolean) lowAfterHigh = true
    }

    val expectedParams = (1L << 24) | (duration.toLong << 8) | 2L
    assert(paramEvents == 1, s"expected one parameter event, observed $paramEvents")
    assert(paramBits == expectedParams, s"unexpected packed params $paramBits")
    assert(highSeen, "laser output never asserted")
    assert(firstHighTime.exists(t => t >= startTime - 1 && t <= startTime + 2),
      s"laser output first asserted at $firstHighTime, expected near scheduled time $startTime")
    assert(lowAfterHigh, "laser output did not return low after its duration")

    println(s"[DigitalLaserOutSim] PASS params=$paramEvents firstHigh=$firstHighTime")
    simSuccess()
  }
}
