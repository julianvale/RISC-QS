"""RFSoC4x2 Python-DSL example: a clean low-level 80 MHz AOM carrier.

The readout envelope RAM has 1024 lines on the accepted RFSoC4x2.  Every line is held at
full scale, so its wrap during the 2458-batch (about 5.0008 us) pulse introduces no amplitude
modulation.
"""

from __future__ import annotations

import argparse

from riscq import ProgramDriver, run
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD
from riscq.pulses import Pulse, envelopes, units


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


def run_aom(profile=None, timeout_s: float = 2.0):
    """Connect to the restricted Program service, set up once, and execute once."""
    drv = ProgramDriver.connect(profile)
    try:
        program = build_program(drv.map)
        run.setup(drv, drv.map, {0: program})
        return run.rerun(drv, drv.map, {0: program}, results=["out"], timeout_s=timeout_s)[0]["out"]
    finally:
        drv.close()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--profile", default=None)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    args = parser.parse_args(argv)
    result = run_aom(args.profile, args.timeout_s)
    print(f"carrier={CARRIER_HZ:g} Hz amplitude_code={AMP_CODE} result={result.tolist()}")


if __name__ == "__main__":
    main()
