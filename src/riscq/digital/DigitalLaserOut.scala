package riscq.digital

import spinal.core._
import spinal.lib._
import riscq.dsp.pulse.{TimedQueue, TimedQueueImpl}
import riscq.soc.link.RfCmd
import scala.io.Source

case class LaserParams(half_period_width: Int = 8, dur_width: Int = 16) extends Bundle {
    val half_period = Bits(half_period_width bits)
    val dur = Bits(dur_width bits)
    val cw = Bits(1 bits)
}

case class laser_out() extends BlackBox {
    val io = new Bundle {
        val clk = in Bool()
        val valid = in Bool()
        val reset = in Bool()
        val params = in Bits(25 bits)
        val d_out = out Bool()
    }
    noIoPrefix()
    val sourceCode = Source.fromFile("src/riscq/digital/laser_out.sv").mkString
    setInlineVerilog(sourceCode)
}

case class LaserParamBufferParams(
    dataWidth: Int = 16,
    durWidth: Int = 16,
    halfPeriodWidth: Int = 8,
    timeWidth: Int = 32,
    addrWidth: Int = 16,         // RfCmd address width (the buffer's RF sub-window)
    fireAddr: Int = 0x0,
    halfPeriodAddr: Int = 0x4,
    durationAddr: Int = 0x8,
    cwAddr: Int =0x0c,
    startTimeAddr: Int = 0x10, 
) {
    require(addrWidth >= log2Up(startTimeAddr + 1), "addrWidth too small for startTimeAddr")
    // the parallel cmd decode splits the address at the 16-byte slot boundary (slot = address >> 4,
    // field = address[3:2]), so the layout must respect it:

}

case class LaserParamBuffer(p: LaserParamBufferParams) extends Component {
    import p._
    val w = dataWidth

    val io = new Bundle {
        val cmd       = slave  port Flow(RfCmd(addrWidth))   // demuxed posted writes for THIS generator
        val timeBcast = in     port UInt(timeWidth bits)     // shared time broadcast (equal delay to all)
        val params    = master port Flow(LaserParams())
        val time      = out    port UInt(timeWidth bits)     // local copy → pg.io.time
        val startTime = out    port UInt(timeWidth bits)     // per-buffer, cmd-written → pg.io.startTime
    }

    val cmd = io.cmd

    val addr = cmd.payload.address
    def hit(a: Int): Bool = cmd.valid && addr === a

    val startTime = Reg(UInt(timeWidth bits)) init 0

    val explicitStartWrite = hit(startTimeAddr)   // also gates the fire auto-advance below (explicit wins)
    when(explicitStartWrite)   { startTime   := cmd.payload.data(0, timeWidth bits).asUInt }

    // saving params:
    val duration = Reg(UInt(durWidth bits)) init(0)
    val halfPeriod = Reg(UInt(halfPeriodWidth bits)) init(0)
    val cw = Reg(Bool) init(False)
    val fireWrite = hit(fireAddr)
    
    when(hit(durationAddr)) {
        duration := cmd.payload.data(0, durWidth bits).asUInt
    }
    when(hit(halfPeriodAddr)) {
        halfPeriod := cmd.payload.data(0, halfPeriodWidth bits).asUInt
    }
    when(hit(cwAddr)) {
        cw := cmd.payload.data(0, 1 bits).asBool
    }

    io.startTime := RegNext(startTime)
    io.time := RegNext(io.timeBcast).addAttribute("EQUIVALENT_REGISTER_REMOVAL", "NO")

    // fill params bundle for scheduler
    io.params.valid := RegNext(fireWrite) init(False)
    io.params.payload.half_period := halfPeriod.asBits
    io.params.payload.dur := duration.asBits
    io.params.payload.cw := cw.asBits
}

case class LaserSchedulerParams (
    durWidth: Int = 16,
    halfPeriodWidth: Int = 8,
    timeWidth: Int = 32,
    queueImpl: TimedQueueImpl = TimedQueueImpl.SrlShadow,
    queueDepth: Int = 4,
    laserLead: Int = 1,
    timeOffset: Int = 0,
    queueUseVec: Boolean = false,
    queueForFMax: Boolean = false

) {
    require(timeWidth >= 3 && durWidth >= 1 && halfPeriodWidth >= 1)
}

case class DigitalLaserScheduler (p: LaserSchedulerParams) extends Component {
    val paramWidth = p.halfPeriodWidth + p.durWidth + 1

    val io = new Bundle {
        val time        = in port UInt(p.timeWidth bits)            
        val startTime   = in port UInt(p.timeWidth bits)
        val params      = slave port Flow(LaserParams())
        val laserOut    = out port Bool
    }

    val laserQ = TimedQueue(LaserParams(), p.timeWidth, p.queueDepth, p.laserLead, p.timeOffset, p.queueUseVec, p.queueForFMax, impl = p.queueImpl)
    laserQ.io.time := io.time
    laserQ.io.push.valid := io.params.valid
    laserQ.io.push.payload.data := io.params.payload
    laserQ.io.push.payload.startTime := io.startTime

    val laserOut = laser_out()
    laserOut.io.clk := ClockDomain.current.readClockWire
    laserOut.io.reset := ClockDomain.current.readResetWire
    laserOut.io.valid := laserQ.io.pop.valid
    val packedParams = Bits(25 bits)
    packedParams(0)          := laserQ.io.pop.payload.cw.asBool
    packedParams(1, 16 bits) := laserQ.io.pop.payload.dur
    packedParams(17, 8 bits) := laserQ.io.pop.payload.half_period
    laserOut.io.params := packedParams

    io.laserOut := laserOut.io.d_out
}
