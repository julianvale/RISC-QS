"""RFSoC4x2 Python-DSL example: a low-level 80 MHz AOM carrier with ~10 MHz AM.

The readout envelope RAM has 1024 lines on the accepted RFSoC4x2.  This example stores 21
complete modulation cycles in that bank, which gives 10.08 MHz on the 491.52 MHz envelope grid.
The pulse duration is independently overridden to 2458 batches (about 5.0008 us); the hardware
envelope address wraps and repeats the 1024-line record while the duration counter runs.
"""

from __future__ import annotations

import argparse

import numpy as np

from riscq import ProgramDriver, run
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD
from riscq.pulses import Pulse, envelopes, units


ENV_LINES = 1024
MODULATION_CYCLES = 21
CARRIER_HZ = 80e6
PULSE_BATCHES = 2458
LOW_AMP_CODE = 3276
LOW_AMP = LOW_AMP_CODE / units.AMP_SCALE
SCHEDULE_LEAD = 2048


def modulation_hz(m) -> float:
    """The realized modulation frequency of the complete envelope record."""
    return MODULATION_CYCLES * m.params.dsp_freq_hz / ENV_LINES


def am_envelope(m) -> np.ndarray:
    """Return one full positive-AM loop on the readout channel's stored-sample grid."""
    if m.channel(1).samples_per_line != 1:
        raise ValueError("this example expects one stored readout sample per envelope line")
    n = np.arange(ENV_LINES, dtype=np.float64)
    # 0.5*(1-cos) is conventional positive AM: the 80 MHz carrier never changes phase.
    values = 0.5 * (1.0 - np.cos(2.0 * np.pi * MODULATION_CYCLES * n / ENV_LINES))
    return envelopes.arb(envelopes.FULL * values)


def readout_table(m) -> ParamTable:
    """Build the one-slot readout table carrying the 80 MHz AOM carrier."""
    return ParamTable(1, CARRIER_HZ, {
        "aom": Pulse(am_envelope(m), freq_hz=CARRIER_HZ, amp=LOW_AMP),
    })


@kernel
def k_aom_am(ro: ParamTable, out: Array, duration: int):
    """Fire the AM AOM pulse and return [scheduled_start, duration_batches]."""
    init_pulse_params(ro.pulses)  # noqa: F821
    set_freq(ro, ro.freq)  # noqa: F821  initialize the 80 MHz carrier explicitly
    set_start(ro, now())  # noqa: F821
    # Pulse.env occupies only the 1024-line loop.  The duration counter is independent and
    # deliberately runs for 2458 batches, so the envelope reader wraps twice plus 410 lines.
    set_dur(ro, ro["aom"], duration << 16)  # noqa: F821
    start = now() + SCHEDULE_LEAD  # noqa: F821
    play(ro, ro["aom"], start)  # noqa: F821
    wait_until(start + duration + READOUT_LEAD)  # noqa: F821
    out[0] = start
    out[1] = duration


def build_program(m):
    """Compile the bounded AM pulse for a profile-derived SocMap."""
    return compile_kernel(k_aom_am, m, tables={"ro": readout_table(m)},
                          out=Array(2), duration=PULSE_BATCHES)


def run_aom_am(profile=None, timeout_s: float = 2.0):
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
    result = run_aom_am(args.profile, args.timeout_s)
    modulation = MODULATION_CYCLES * 491_520_000.0 / ENV_LINES
    print(f"carrier={CARRIER_HZ:g} Hz modulation={modulation:g} Hz "
          f"amplitude_code={LOW_AMP_CODE} result={result.tolist()}")


if __name__ == "__main__":
    main()
