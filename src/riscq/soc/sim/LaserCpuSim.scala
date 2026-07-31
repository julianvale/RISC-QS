package riscq.soc.sim

import spinal.core._
import spinal.core.sim._
import spinal.lib.misc.Elf
import spinal.lib.sim.SparseMemory
import spinal.lib.bus.amba4.axi.sim.Axi4Master
import riscq.soc.PulseTableSoc

import java.io.File

/**
 * CPU-in-the-loop sign-off for the core-0 digital-laser path.  Core 0 executes
 * [[sw/laser_sched.S]], which reads batch time then issues the normal ordered posted RF stores to
 * the laser target.  The assertion samples the external `io.laserOut` port, not scheduler internals.
 *
 * Run with `./.metals/mill --no-server runMain riscq.soc.sim.LaserCpuSim`.
 */
object LaserCpuSim extends App {
  val qubitNum = 2
  val dacMap   = Map((0, 0) -> 0, (0, 1) -> 1, (1, 0) -> 2, (1, 1) -> 3)
  val adcMap   = Map(0 -> 12, 1 -> 13)
  val memOffset = 0x80000000L
  val requestedDuration = 8
  val JAL_SELF = BigInt("6f", 16)
  val elfFile = new File(sys.env.getOrElse("RISCQ_ELF", "src/riscq/soc/sim/sw/laser_sched.elf"))
  require(elfFile.exists(), s"missing ${elfFile.getPath} — rebuild it per sw/laser_sched.S")

  SimConfig.addSimulatorFlag("-Wno-MULTIDRIVEN")
    .addSimulatorFlag("--x-initial 0")
    .compile {
      val dut = PulseTableSoc(qubitNum, dacMap, adcMap, withTest = false)
      dut.riscqArea.time.simPublic()
      // Capture the CPU's posted start-time write to identify the requested timestamp.  Waveform
      // observations below still use only the external top-level laser pin.
      dut.riscqArea.riscqCores(0).riscvSoc.cmd.valid.simPublic()
      dut.riscqArea.riscqCores(0).riscvSoc.cmd.payload.address.simPublic()
      dut.riscqArea.riscqCores(0).riscvSoc.cmd.payload.data.simPublic()
      dut
    }.doSim("laserCpu", seed = 42) { dut =>
      val hostCd = dut.clockDomain
      val dspCd = dut.dspCd

      dut.io.axi.ar.valid #= false; dut.io.axi.aw.valid #= false; dut.io.axi.w.valid #= false
      dut.io.axi.r.ready #= false; dut.io.axi.b.ready #= false
      for (adc <- dut.io.adc) { adc.valid #= true; adc.payload #= 0 }
      hostCd.forkStimulus(10)
      dspCd.forkStimulus(10)

      val image = SparseMemory(seed = 0)
      new Elf(elfFile, 32).load(image, 0)
      hostCd.waitSampling(40)
      val axi = Axi4Master(dut.io.axi, hostCd)
      def leBytes(v: BigInt, n: Int): List[Byte] = List.tabulate(n)(i => ((v >> (8 * i)) & 0xff).toByte)
      def loadInstr(core: Int, word: Int, value: BigInt): Unit =
        axi.write(BigInt(dut.map.coreMemOffset(core)) + word.toLong * 4, leBytes(value, 4))

      // The host load is the same route used by the established CPU simulation.  Core 1 is parked
      // in a benign loop so only core 0 can originate posted RF traffic.
      for (i <- 0 until 256)
        loadInstr(0, i, BigInt(image.readInt(memOffset + 4L * i).toLong & 0xffffffffL))
      loadInstr(1, 0, JAL_SELF)

      val hostCtrlAddr = BigInt(dut.map.hostCtrlBase)
      axi.write(hostCtrlAddr, List(0x01, 0, 0, 0).map(_.toByte))
      hostCd.waitSampling(20)
      axi.write(hostCtrlAddr, List(0x00, 0, 0, 0).map(_.toByte))

      // Start looking immediately: this tiny program can post all five writes during the normal
      // reset-release CDC settle interval used by PulseTableSocCpuSim.
      val timeBefore = dut.riscqArea.time.toBigInt.toInt
      val postedCmd = dut.riscqArea.riscqCores(0).riscvSoc.cmd
      var guard = 0
      var requestedStart = Option.empty[Int]
      // The RfLinkBridge rebases CPU 0x40010 to RF-link address 0x30010.
      while (requestedStart.isEmpty && guard < 6000) {
        dspCd.waitSampling()
        guard += 1
        if (postedCmd.valid.toBoolean && postedCmd.payload.address.toBigInt == 0x30010)
          requestedStart = Some(postedCmd.payload.data.toBigInt.toInt)
      }
      val timeAfter = dut.riscqArea.time.toBigInt.toInt
      assert(timeAfter != timeBefore, s"[laser time] batch time did not advance ($timeBefore -> $timeAfter)")
      assert(requestedStart.nonEmpty, "[laser start] core 0 never posted laser startTime")
      val start = requestedStart.get

      var firstHigh = Option.empty[Int]
      var highRun = 0
      var maxHighRun = 0
      var sawLowAfterHigh = false
      var sawHigh = false
      var lowBeforeWindow = true
      guard = 0
      while (dut.riscqArea.time.toBigInt.toInt < start + 32 && guard < 8000) {
        dspCd.waitSampling()
        guard += 1
        val now = dut.riscqArea.time.toBigInt.toInt
        val high = dut.io.laserOut.toBoolean
        if (now < start - 1 && high) lowBeforeWindow = false
        if (high && !sawHigh) firstHigh = Some(now)
        if (high) {
          sawHigh = true
          highRun += 1
          maxHighRun = scala.math.max(maxHighRun, highRun)
        } else {
          if (sawHigh) sawLowAfterHigh = true
          highRun = 0
        }
      }

      assert(lowBeforeWindow, "[laser waveform] laser asserted before its scheduled window")
      assert(firstHigh.exists(t => t >= start - 1 && t <= start + 4),
        s"[laser waveform] first high $firstHigh was not near requested start $start")
      assert(maxHighRun >= requestedDuration,
        s"[laser waveform] contiguous high run $maxHighRun < requested duration $requestedDuration")
      assert(sawLowAfterHigh, "[laser waveform] laser did not return low after the CW window")
      println(s"[LaserCpuSim] PASS requestedStart=$start firstHigh=${firstHigh.get} highRun=$maxHighRun")
      simSuccess()
    }
}
