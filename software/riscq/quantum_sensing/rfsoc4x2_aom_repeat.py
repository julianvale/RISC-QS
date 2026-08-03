"""RFSoC4x2 Python-DSL example: a clean low-level 80 MHz AOM carrier.

The readout envelope RAM has 1024 lines on the accepted RFSoC4x2.  Every line is held at
full scale, so its wrap during the 2458-batch (about 5.0008 us) pulse introduces no amplitude
modulation.
"""

from __future__ import annotations

import argparse
import math

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD, SocMap, SocParams
from riscq.pulses import Pulse, envelopes, units
import time


ENV_LINES = 1024
CARRIER_HZ = 80e6
PULSE_BATCHES = 65500
AMP_CODE = 7000
AMP = AMP_CODE / units.AMP_SCALE
SCHEDULE_LEAD = 2048


def carrier_envelope(m):
    """Return a constant envelope for an unmodulated carrier."""
    if m.channel(1).samples_per_line != 1:
        raise ValueError("this example expects one stored readout sample per envelope line")
    return envelopes.square(ENV_LINES)


def readout_table(m) -> ParamTable:
    """Build the one-slot readout table carrying the unmodulated 80 MHz AOM carrier."""
    return ParamTable(1, CARRIER_HZ, {
        "aom": Pulse(carrier_envelope(m), freq_hz=CARRIER_HZ, amp=AMP),
    })


@kernel
def k_aom(ro: ParamTable, out: Array, duration: int):
    """Fire the unmodulated AOM pulse and return [scheduled_start, duration_batches]."""
    init_pulse_params(ro.pulses)  # noqa: F821
    set_freq(ro, ro.freq)  # noqa: F821  initialize the 80 MHz carrier explicitly
    set_start(ro, now())  # noqa: F821
    # The constant 1024-line envelope wraps during the longer pulse without modulation.
    set_dur(ro, ro["aom"], duration << 16)  # noqa: F821
    start = now() + SCHEDULE_LEAD  # noqa: F821
    play(ro, ro["aom"], start)  # noqa: F821
    wait_until(start + duration + READOUT_LEAD)  # noqa: F821
    out[0] = start
    out[1] = duration


def build_program(m):
    """Compile the bounded unmodulated pulse for a profile-derived SocMap."""
    return compile_kernel(k_aom, m, tables={"ro": readout_table(m)},
                          out=Array(2), duration=PULSE_BATCHES)


def run_aom(host: str, port: int = 9091, timeout_s: float = 2.0):
    """Connect through the standard RemoteDriver, set up once, and execute once."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        program = build_program(m)
        run.setup(drv, m, {0: program})
        return run.rerun(drv, m, {0: program}, results=["out"],
                         timeout=max(1, math.ceil(timeout_s * 1000)))[0]["out"]
    finally:
        drv.close()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    args = parser.parse_args(argv)
    while True:
        result = run_aom(args.host, args.port, args.timeout_s)
        print(f"carrier={CARRIER_HZ:g} Hz amplitude_code={AMP_CODE} result={result.tolist()}")
        time.sleep(0.001)


if __name__ == "__main__":
    main()
