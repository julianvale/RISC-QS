package riscq.digital

import spinal.core._
import spinal.lib._
import riscq.soc.link.RfCmd

case class LaserChannel(
    timeWidth: Int = 32,
    addrWidth: Int = 16
) extends Component {
    val io = new Bundle {
        val cmd       = slave  port Flow(RfCmd(addrWidth))
        val timeBcast = in     port UInt(timeWidth bits)
        val pulse     = out port Bool
    }

    val buf = LaserParamBuffer(LaserParamBufferParams(timeWidth = timeWidth, addrWidth = addrWidth))
    buf.io.cmd << io.cmd
    buf.io.timeBcast := io.timeBcast

    val scheduler = DigitalLaserScheduler(LaserSchedulerParams(timeWidth = timeWidth))
    scheduler.io.time := buf.io.time
    scheduler.io.startTime := buf.io.startTime
    scheduler.io.params << buf.io.params
    io.pulse := scheduler.io.laserOut
}