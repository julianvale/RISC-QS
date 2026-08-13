"""DAC0 maximum-duration MW burst train for an external RF power meter.

The default is a single 65,535-batch (about 133.33 us) DAC0 pulse.  Set
``--repetitions`` above one to make a high-duty-cycle burst train for an
average-reading meter; this does not change the per-burst peak power.  No
laser, ADC capture, or readout drive is scheduled.
"""

from __future__ import annotations

import argparse
import math
from typing import no_type_check

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD, SocMap, SocParams
from riscq.pulses import Pulse, envelopes, units


SCHEDULE_LEAD = 2_048
MAX_DURATION_BATCHES = 65_535
DEFAULT_DURATION_BATCHES = MAX_DURATION_BATCHES
DEFAULT_GAP_BATCHES = SCHEDULE_LEAD


def _table(m: SocMap) -> ParamTable:
    """Return a full-bank, unmodulated DAC0 MW table."""
    envelope = envelopes.square(m.channel(0).samples_per_line * m.params.env_depth)
    return ParamTable(0, 0.0, {"mw": Pulse(envelope, amp=0.0)})


def duty_cycle(duration_batches: int, gap_batches: int) -> float:
    """Return RF-on fraction for one repeated burst period."""
    return duration_batches / (duration_batches + gap_batches)


@no_type_check
@kernel
def k_mw_power_meter(mw: ParamTable, out: Array, duration_batches: int, frequency_code: int,
                     amplitude_code: int, repetitions: int, gap_batches: int):
    """Emit one or more maximum-length, unmodulated DAC0 RF bursts."""
    init_pulse_params(mw.pulses)  # noqa: F821
    set_freq(mw, frequency_code)  # noqa: F821
    set_amp(mw, mw["mw"], amplitude_code)  # noqa: F821
    set_start(mw, now())  # noqa: F821
    set_dur(mw, mw["mw"], duration_batches << 16)  # noqa: F821

    start = now() + SCHEDULE_LEAD  # noqa: F821
    first_start = start
    count = 0
    while count < repetitions:
        play(mw, mw["mw"], start)  # noqa: F821
        wait_until(start + duration_batches)  # noqa: F821
        count += 1
        if count < repetitions:
            # ``gap_batches`` is validated to leave a full scheduling lead.
            start = now() + gap_batches  # noqa: F821

    wait_until(start + duration_batches + READOUT_LEAD)  # noqa: F821
    out[0] = first_start
    out[1] = duration_batches
    out[2] = repetitions
    out[3] = gap_batches


def build_program(m: SocMap):
    return compile_kernel(k_mw_power_meter, m, tables={"mw": _table(m)}, out=Array(4))


def _validate(m: SocMap, frequency_hz: float, amplitude: float, duration_batches: int,
              repetitions: int, gap_batches: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this program is only valid for the rfsoc4x2-nv-1q platform")
    if not math.isfinite(frequency_hz) or frequency_hz <= 0:
        raise ValueError("frequency-hz must be positive and finite")
    if not -1.0 <= amplitude <= 1.0:
        raise ValueError("amplitude must be in [-1, 1]")
    if not 1 <= duration_batches <= MAX_DURATION_BATCHES:
        raise ValueError(f"duration-batches must be in 1..{MAX_DURATION_BATCHES}")
    if repetitions < 1:
        raise ValueError("repetitions must be positive")
    if repetitions > 1 and gap_batches < SCHEDULE_LEAD:
        raise ValueError(f"gap-batches must be at least {SCHEDULE_LEAD} for repeated bursts")


def run_power_meter(host: str, *, frequency_hz: float, amplitude: float,
                    duration_batches: int = DEFAULT_DURATION_BATCHES, repetitions: int = 1,
                    gap_batches: int = DEFAULT_GAP_BATCHES, port: int = 9091,
                    timeout_s: float = 2.0):
    """Program the board and emit the requested DAC0 burst train once."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, frequency_hz, amplitude, duration_batches, repetitions, gap_batches)
        program = build_program(m)
        run.setup(drv, m, {0: program})
        params = {
            "duration_batches": duration_batches,
            "frequency_code": units.freq_to_code(frequency_hz, m.params),
            "amplitude_code": units.amp_to_code(amplitude),
            "repetitions": repetitions,
            "gap_batches": gap_batches,
        }
        return m, run.rerun(drv, m, {0: program}, params={0: params}, results=["out"],
                            timeout=max(1, math.ceil(timeout_s * 1000)))[0]["out"]
    finally:
        drv.close()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True)
    parser.add_argument("--frequency-hz", required=True, type=float)
    parser.add_argument("--amplitude", required=True, type=float,
                        help="DAC0 amplitude fraction in [-1, 1]")
    parser.add_argument("--duration-batches", type=int, default=DEFAULT_DURATION_BATCHES)
    parser.add_argument("--repetitions", type=int, default=1,
                        help="number of maximum-length bursts; one is the safest default")
    parser.add_argument("--gap-batches", type=int, default=DEFAULT_GAP_BATCHES,
                        help="RF-off interval between repeated bursts")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    args = parser.parse_args(argv)
    m, result = run_power_meter(
        args.host, frequency_hz=args.frequency_hz, amplitude=args.amplitude,
        duration_batches=args.duration_batches, repetitions=args.repetitions,
        gap_batches=args.gap_batches, port=args.port, timeout_s=args.timeout_s,
    )
    pulse_us = args.duration_batches / m.params.dsp_freq_hz * 1e6
    if args.repetitions > 1:
        duty = duty_cycle(args.duration_batches, args.gap_batches)
        average_offset_db = 10.0 * math.log10(duty)
        print(f"DAC0 {args.frequency_hz:g} Hz: {args.repetitions} bursts of {pulse_us:.6g} us; "
              f"duty={duty:.5f}, average is {average_offset_db:.3f} dB relative to burst power; "
              f"result={result.tolist()}")
    else:
        print(f"DAC0 {args.frequency_hz:g} Hz: one {pulse_us:.6g} us burst; result={result.tolist()}")


if __name__ == "__main__":
    main()
