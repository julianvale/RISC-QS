package riscq.dsp.pulse

import spinal.core._
import spinal.lib._

/** One queued parameter update: the `data` to apply and the `startTime` it must land at the DAC. */
case class TimedEntry[T <: Data](dataType: HardType[T], timeWidth: Int) extends Bundle {
  val data      = dataType()
  val startTime = UInt(timeWidth bits)
}

/** Shared IO for every TimedQueue implementation (RISC-Q [[TimedQueue]] + the variants), so one
 *  testbench body can drive any of them: external `time`, a `Stream` push of `{data, startTime}`,
 *  and a `Flow` pop that fires once when the head is due. */
case class TimedQueueIo[T <: Data](dataType: HardType[T], timeWidth: Int) extends Bundle {
  val time = in port UInt(timeWidth bits)                  // external SoC batch-time counter
  val push = slave port Stream(TimedEntry(dataType, timeWidth))
  val pop  = master port Flow(dataType)                    // fires once, when the head is due
}

/** Common supertype of all TimedQueue implementations — exposes the shared [[TimedQueueIo]] and the
 *  exported pop `latency`, so testbenches can drive any of them uniformly. */
trait TimedQueueLike[T <: Data] extends Component {
  def io: TimedQueueIo[T]
  def latency: Int
}

/**
 * Lead-time scheduler — the RISC-Q `TimedFifo` approach. A
 * `StreamFifo` of `{data, startTime}` whose wrap-safe due test is '''registered''' and then
 * edge-detected to fire the pop `Flow` once per entry:
 *
 * {{{
 *   due    = ! ( (time + (leadTime + timeOffset + 1) − startTime) .msb )   // wrap-safe geq, +1 below
 *   timeUp = RegNext(head.valid && due)                                    // registered 32-bit compare
 *   blank  = RegNext(pop.valid)                                            // fire-once / drain blank
 *   pop    = head.valid && timeUp && !blank
 * }}}
 *
 * '''Why registered''': putting the 32-bit compare between registers keeps it off the combinational
 * `pop.valid → consumer` path (the critical path) at roughly half the LUTs of a per-slot-registered
 * queue — this is how the RISC-Q design hits its high fmax. The cost is '''no back-to-back II=1''':
 * the `blank` cycle that makes the edge-detect fire once also means several already-due entries drain
 * one every two cycles. The pulse generator schedules each parameter's updates far apart, so this never
 * binds (II=1 only matters for malformed/overlapping schedules); when it is needed, swap in
 * [[TimedQueueRegArray]] / [[TimedQueueDeadline]], both II=1 / latency 0.
 *
 * The `+1` inside the compare cancels the compare register's cycle, so the pop `Flow` still asserts at
 * exactly `time = startTime − leadTime` (external [[latency]] 0): the toplevel's lead-time
 * derivation and the end-to-end golden are unchanged. `leadTime` is the consumer path's latency to the
 * DAC, so the entry is popped that many cycles early and lands at the DAC at `startTime`.
 *
 * Wrap-safe: the signed difference is correct for any schedule within ±2^(timeWidth−1) of now, so the
 * time counter wrapping `2^timeWidth` is a non-event. Push is a `Stream` so phase-2 Tilelink glue sees
 * backpressure when full.
 */
case class TimedQueue[T <: Data](
    dataType: HardType[T],
    timeWidth: Int,
    depth: Int,
    leadTime: Int,
    timeOffset: Int = 0,
    useVec: Boolean = false,  // FIFO storage: false (default) = distributed-RAM Mem (fewest control
                              // sets); true = register array (higher fmax).
    forFMax: Boolean = false  // FIFO pointers: false (default) = plain binary (fewer control sets);
                              // true = fmax-tuned (gray/empty-tracker)
) extends Component with TimedQueueLike[T] {
  require(depth >= 1, "queue needs at least one entry")
  require(leadTime + timeOffset >= 0, "lead time must be non-negative")
  require((leadTime + timeOffset) < (BigInt(1) << timeWidth), "lead time must fit in timeWidth bits")

  val io = TimedQueueIo(dataType, timeWidth)

  // Async-read FIFO (the head must be combinationally available for the registered due-test, so the
  // external latency stays 0). `useVec`/`forFMax` trade fmax for congestion: `useVec = true` is a
  // register array that gives every slot its own write-enable (depth control sets/queue, the GShare
  // pattern) plus, with `forFMax = true`, the fmax pointer machinery; the **default** `useVec = false`
  // moves the payload into a distributed-RAM Mem (one write port ⇒ those per-slot control sets vanish)
  // and `forFMax = false` uses plain binary pointers — the congestion-best config.
  val fifo = new StreamFifo(TimedEntry(dataType, timeWidth), depth,
    withAsyncRead = true, forFMax = forFMax, useVec = useVec)
  fifo.io.push << io.push
  val head = fifo.io.pop

  // wrap-safe geq with a +1 so the registered pop still lands at time = startTime − leadTime.
  val leadC1 = U(leadTime + timeOffset + 1, timeWidth bits)
  val due    = !(io.time + leadC1 - head.payload.startTime).msb

  val timeUp = RegNext(head.valid && due) init False         // registered compare (off the pop path)
  val blank  = RegNext(io.pop.valid) init False              // blank one cycle after a pop ⇒ fire-once
  io.pop.valid   := head.valid && timeUp && !blank
  io.pop.payload := head.payload.data
  head.ready     := io.pop.valid

  /** external cmd→pop latency: 0 (the +1 compensates the compare register). */
  def latency: Int = 0
}
