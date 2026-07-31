"""RFSoC4x2 oscilloscope smoke test for the PMODA-1 laser output.

The default is one 100 us, approximately 1.92 MHz square-wave burst.  Connect the
scope probe to PMODA pin 1 (AF16) and its ground clip to a PMOD ground pin.  The
signal is LVCMOS18: use a high-impedance probe and expect a 1.8 V logic-high level.
"""

from __future__ import annotations

import argparse

from riscq import ProgramDriver, run
from riscq.lang import Array, compile_kernel, kernel


# 491.52 MHz / (2 * 128) = 1.92 MHz.  49,152 ticks = 100 us at 491.52 MHz.
DEFAULT_HALF_PERIOD = 128
DEFAULT_DURATION = 49_152
SCHEDULE_LEAD = 2_048
SETTLE_TICKS = 64


@kernel
def laser_burst(out: Array, half_period: int, duration: int, cw: int):
    """Schedule one complete laser event, then remain alive until it has completed."""
    start = now() + SCHEDULE_LEAD  # noqa: F821
    play_laser(half_period, duration, cw, start)  # noqa: F821
    wait_until(start + duration + SETTLE_TICKS)  # noqa: F821
    out[0] = start
    out[1] = half_period
    out[2] = duration
    out[3] = cw


def _validate(half_period: int, duration: int, cw: int) -> None:
    if not 1 <= half_period <= 255:
        raise ValueError("half-period must be in 1..255 DSP ticks")
    if not 1 <= duration <= 65_535:
        raise ValueError("duration must be in 1..65535 DSP ticks")
    if cw not in (0, 1):
        raise ValueError("cw must be 0 or 1")


def run_once(profile: str | None, half_period: int, duration: int, cw: int,
             timeout_s: float = 2.0):
    """Load and run the core-0 laser test, returning its recorded schedule values."""
    _validate(half_period, duration, cw)
    drv = ProgramDriver.connect(profile)
    try:
        if drv.map.params.name != "rfsoc4x2-nv-1q":
            raise RuntimeError("this test is only valid for the rfsoc4x2-nv-1q platform")
        program = compile_kernel(laser_burst, drv.map, out=Array(4))
        run.setup(drv, drv.map, {0: program})
        return run.rerun(
            drv, drv.map, {0: program},
            params={0: {"half_period": half_period, "duration": duration, "cw": cw}},
            results=["out"], timeout_s=timeout_s,
        )[0]["out"]
    finally:
        drv.close()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--profile", default=None, help="board-service profile path")
    parser.add_argument("--half-period", type=int, default=DEFAULT_HALF_PERIOD)
    parser.add_argument("--duration", type=int, default=DEFAULT_DURATION,
                        help="burst length in DSP ticks")
    parser.add_argument("--cw", action="store_true",
                        help="hold the output high for the duration instead of toggling it")
    parser.add_argument("--timeout-s", type=float, default=2.0)
    args = parser.parse_args(argv)

    result = run_once(args.profile, args.half_period, args.duration, int(args.cw), args.timeout_s)
    _, half_period, duration, cw = (int(value) for value in result)
    dsp_hz = 491_520_000.0
    mode = "high-level pulse" if cw else f"square wave at {dsp_hz / (2 * half_period):.6g} Hz"
    print(f"scheduled laser burst: {mode}, duration={duration / dsp_hz * 1e6:.3f} us "
          f"({duration} ticks), half_period={half_period}")


if __name__ == "__main__":
    main()
