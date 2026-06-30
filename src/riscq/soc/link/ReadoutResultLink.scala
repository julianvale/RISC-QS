package riscq.soc.link

import spinal.core._
import spinal.lib._
import spinal.lib.bus.tilelink
import spinal.lib.bus.misc.SingleMapping

/**
 * Readout decoder result, carried **upstream** (DSP → core) on the link's second narrow posted `Flow`.
 * The decoder's integrated point — the 1-bit discrimination `res` plus the integrated I/Q
 * (`real`/`imag`) — travels up once per completed window into a near-core [[ReadoutResultSink]] the CPU
 * polls locally, so the halting `res` read is a short local arc instead of a long bus round-trip.
 */
case class ReadoutResult(accWidth: Int) extends Bundle {
  val res  = Bool()
  val real = SInt(accWidth bits)
  val imag = SInt(accWidth bits)
}

object ReadoutResultLink {
  /**
   * DSP-side source: emit **one** posted [[ReadoutResult]] beat on the rising edge of the decoder's
   * `res.valid` (i.e. when the integral settles). Edge — not level — so no stale beats linger on the
   * link during a window re-arm (the level `resValid` stays high until the next arm; forwarding it
   * raw would re-set the sink after a local arm-clear).
   */
  def source(resValid: Bool, res: Bool, real: SInt, imag: SInt, accWidth: Int): Flow[ReadoutResult] = {
    val out  = Flow(ReadoutResult(accWidth))
    val prev = RegNext(resValid) init False
    out.valid        := resValid && !prev
    out.payload.res  := res
    out.payload.real := real
    out.payload.imag := imag
    out
  }
}

/**
 * Core-side readout-result register — the local end of the up-`Flow`. It latches `{res, real, imag}`
 * when a result arrives and exposes a `valid` flag the CPU's **local** `SlaveFactory` halts the `res`
 * read on (the same software contract as a direct readout-decoder `res` read, but the halt is a short
 * local arc). `valid` is **cleared on window-arm** (the CPU's `dur` write, detected core-locally) so a
 * stale result from the previous window can never be read.
 *
 * The arm-clear and the up-beat are sequenced by the single-pending-readout software contract: the CPU
 * arms a window, then reads `res` (halting) before arming the next — so the result is consumed before
 * the next arm and no stale beat is in flight.
 *
 * @param arm      pulse on this core's local `dur`-write to the decoder (clears a stale result)
 * @param resultIn the up-`Flow` from the DSP-side [[ReadoutResultLink.source]]
 */
case class ReadoutResultSink(
    accWidth: Int,
    resAddr: Int  = 4,
    realAddr: Int = 8,
    imagAddr: Int = 12
) extends Area {
  val resultIn = Flow(ReadoutResult(accWidth))
  val arm      = Bool()

  val valid = RegInit(False)
  val res   = Reg(Bool()) init False
  val real  = Reg(SInt(accWidth bits)) init 0
  val imag  = Reg(SInt(accWidth bits)) init 0
  when(arm)(valid := False)
  when(resultIn.valid) {            // a fresh result wins a same-cycle arm (it is the newer datum)
    valid := True
    res   := resultIn.payload.res
    real  := resultIn.payload.real
    imag  := resultIn.payload.imag
  }

  /** Local read map (the readout decoder's `res`@4 / `real`@8 / `imag`@12, but served here with a
   *  **local** halt instead of a bus round-trip). Contribute to a `MemMapFiber`. */
  def mapping(factory: tilelink.SlaveFactory): Unit = {
    factory.read(res, resAddr)
    factory.onReadPrimitive(SingleMapping(resAddr), haltSensitive = false, null) {
      when(!valid)(factory.writeHalt()) // res read HALTS until the integral has settled (locally)
    }
    factory.read(real, realAddr)
    factory.read(imag, imagAddr)
  }
}
