"""Two nearby DACB tone bursts for a scope check of runtime frequency changes.

The RFSoC4x2 ``rfsoc4x2-nv-1q`` map routes the readout channel (logical
channel 1) to physical DAC1/DACB.  This diagnostic emits one burst, waits for
it to finish, changes the carrier frequency, and then emits the second burst.
No laser, ADC capture, or microwave-amplifier control is scheduled.
"""

from __future__ import annotations

import argparse
import math
import os
from typing import no_type_check

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD, SocMap, SocParams
from riscq.pulses import Pulse, envelopes, units


SCHEDULE_LEAD = 2_048
MAX_DURATION_BATCHES = 65_535
DEFAULT_FIRST_FREQUENCY_HZ = 50e6
DEFAULT_SECOND_FREQUENCY_HZ = 55e6
DEFAULT_DURATION_BATCHES = 492  # about 1.001 us at 491.52 MHz
DEFAULT_AMPLITUDE = 0.2


def _table(m: SocMap) -> ParamTable:
    """Return a constant-envelope table on logical DAC1/DACB."""
    envelope = envelopes.square(m.channel(1).samples_per_line * m.params.env_depth)
    return ParamTable(1, 0.0, {"tone": Pulse(envelope, amp=0.0)})


@no_type_check
@kernel
def k_dacb_frequency_switch(
        dacb: ParamTable, out: Array, first_frequency_code: int,
        second_frequency_code: int, amplitude_code: int, duration_batches: int):
    """Emit the first tone completely before programming and emitting the second."""
    init_pulse_params(dacb.pulses)  # noqa: F821
    set_amp(dacb, dacb["tone"], amplitude_code)  # noqa: F821
    set_dur(dacb, dacb["tone"], duration_batches << 16)  # noqa: F821
    set_start(dacb, now())  # noqa: F821

    set_freq(dacb, first_frequency_code)  # noqa: F821
    first_start = now() + SCHEDULE_LEAD  # noqa: F821
    play(dacb, dacb["tone"], first_start)  # noqa: F821
    wait_until(first_start + duration_batches)  # noqa: F821

    # The wait is intentional: changing the live carrier register while the
    # first queued pulse is active could make the first burst change frequency.
    set_freq(dacb, second_frequency_code)  # noqa: F821
    second_start = now() + SCHEDULE_LEAD  # noqa: F821
    play(dacb, dacb["tone"], second_start)  # noqa: F821
    wait_until(second_start + duration_batches + READOUT_LEAD)  # noqa: F821

    out[0] = first_start
    out[1] = second_start
    out[2] = duration_batches


def build_program(m: SocMap):
    return compile_kernel(
        k_dacb_frequency_switch,
        m,
        tables={"dacb": _table(m)},
        out=Array(3),
    )


def _validate(
        m: SocMap, first_frequency_hz: float, second_frequency_hz: float,
        amplitude: float, duration_batches: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this diagnostic is only valid for the rfsoc4x2-nv-1q platform")
    if m.ro_dac(0) != 1:
        raise RuntimeError("logical readout channel is not mapped to DAC1/DACB")
    if not all(math.isfinite(frequency) and frequency > 0
               for frequency in (first_frequency_hz, second_frequency_hz)):
        raise ValueError("frequencies must be positive and finite")
    if first_frequency_hz == second_frequency_hz:
        raise ValueError("the two frequencies must differ")
    if not -1.0 <= amplitude <= 1.0:
        raise ValueError("amplitude must be in [-1, 1]")
    if not 1 <= duration_batches <= MAX_DURATION_BATCHES:
        raise ValueError(f"duration-batches must be in 1..{MAX_DURATION_BATCHES}")


def run_scope_check(
        host: str, *, first_frequency_hz: float = DEFAULT_FIRST_FREQUENCY_HZ,
        second_frequency_hz: float = DEFAULT_SECOND_FREQUENCY_HZ,
        amplitude: float = DEFAULT_AMPLITUDE,
        duration_batches: int = DEFAULT_DURATION_BATCHES,
        port: int = 9091, timeout_s: float = 2.0):
    """Load and execute the two-burst DACB diagnostic once."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, first_frequency_hz, second_frequency_hz, amplitude, duration_batches)
        program = build_program(m)
        run.setup(drv, m, {0: program})
        params = {
            "first_frequency_code": units.freq_to_code(first_frequency_hz, m.params),
            "second_frequency_code": units.freq_to_code(second_frequency_hz, m.params),
            "amplitude_code": units.amp_to_code(amplitude),
            "duration_batches": duration_batches,
        }
        result = run.rerun(
            drv, m, {0: program}, params={0: params}, results=["out"],
            timeout=max(1, math.ceil(timeout_s * 1000)),
        )[0]["out"]
        return m, result
    finally:
        drv.close()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"),
                        help="board host (default: BOARD_IP environment variable)")
    parser.add_argument("--first-frequency-hz", type=float,
                        default=DEFAULT_FIRST_FREQUENCY_HZ)
    parser.add_argument("--second-frequency-hz", type=float,
                        default=DEFAULT_SECOND_FREQUENCY_HZ)
    parser.add_argument("--amplitude", type=float, default=DEFAULT_AMPLITUDE)
    parser.add_argument("--duration-batches", type=int, default=DEFAULT_DURATION_BATCHES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")

    m, result = run_scope_check(
        args.host,
        first_frequency_hz=args.first_frequency_hz,
        second_frequency_hz=args.second_frequency_hz,
        amplitude=args.amplitude,
        duration_batches=args.duration_batches,
        port=args.port,
        timeout_s=args.timeout_s,
    )
    batch_us = 1e6 / m.params.dsp_freq_hz
    first_start, second_start, duration = (int(value) for value in result)
    pulse_us = duration * batch_us
    gap_us = (second_start - first_start - duration) * batch_us
    print(
        f"DACB: {args.first_frequency_hz / 1e6:g} MHz for {pulse_us:.6g} us, "
        f"then {gap_us:.6g} us low, then "
        f"{args.second_frequency_hz / 1e6:g} MHz for {pulse_us:.6g} us; "
        f"amplitude={args.amplitude:g}; starts={first_start},{second_start}"
    )


if __name__ == "__main__":
    main()
