"""Pulsed ESR with an independent optical reset before each acquired shot.

Each pair at one MW frequency is deliberately serial:

``N reset laser triggers -> MW-on signal laser/readout``
``N reset laser triggers -> MW-off reference laser/readout``

Only the final laser pulse in each line is integrated.  Unlike the earlier
asymmetric reset diagnostic, the signal and reference therefore have the same
reset history.  The MW/recorded-laser geometry and RFSoC readout window retain
the calibrated half-MW settings.
"""

from __future__ import annotations

import argparse
import math
import os
import time
from datetime import datetime
from pathlib import Path
from typing import no_type_check

import numpy as np

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD, SocMap, SocParams
from riscq.pulses import units
from software.quantum_sensing.nv_pulsed_esr_halfmw import (
    DEFAULT_AVERAGES,
    DEFAULT_FREQUENCY_STEPS,
    DEFAULT_HALF_DURATION_BATCHES,
    DEFAULT_LASER_START_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES,
    DEFAULT_READOUT_DELAY_BATCHES,
    DEFAULT_READOUT_WINDOW_BATCHES,
    DEFAULT_SAMPLES_PER_FREQUENCY,
    DEFAULT_START_HZ,
    DEFAULT_STOP_HZ,
    LASER_CW,
    LASER_HALF_PERIOD,
    MAX_RESET_PULSES,
    SCHEDULE_LEAD,
    _s32,
    _tables,
    _validate,
    frequency_grid,
    save_and_plot,
)


DEFAULT_RESET_PULSES = 20
DSP_BATCHES_PER_US = 491.52


@no_type_check
@kernel
def k_pulsed_esr_halfmw_symmetric_reset(
        mw: ParamTable, demod: ParamTable, out: Array,
        half_duration_batches: int, laser_start_batches: int,
        laser_duration_batches: int, readout_delay_batches: int,
        readout_window_batches: int, mw_freq_code: int, mw_amp_code: int,
        warmup_pairs: int, samples_per_frequency: int, reset_pulses: int,
        post_reset_settle_batches: int, mw_enabled: int, laser_enabled: int):
    """Accumulate one frequency point with matched reset trains per shot."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    if mw_enabled:
        set_freq(mw, mw_freq_code)  # noqa: F821
        set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
        set_dur(mw, mw["mw"], half_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821

    total_pairs = warmup_pairs + samples_per_frequency
    pair = 0
    signal_sum = 0
    reference_sum = 0
    while pair < total_pairs:
        # Signal reset train.  Each wait retires the laser queue entry before
        # the next reset trigger is scheduled.
        reset_laser = now() + SCHEDULE_LEAD + laser_start_batches  # noqa: F821
        reset_index = 0
        while reset_index < reset_pulses:
            if laser_enabled:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
            wait_until(reset_laser + laser_duration_batches)  # noqa: F821
            reset_laser = reset_laser + half_duration_batches
            reset_index += 1

        # The recorded signal pulse follows the final reset by one half period.
        # Its MW start remains laser_start_batches before its laser trigger.
        signal_laser = reset_laser + post_reset_settle_batches
        signal_start = signal_laser - laser_start_batches
        signal_window = signal_laser + readout_delay_batches
        if mw_enabled:
            play(mw, mw["mw"], signal_start)  # noqa: F821
        if laser_enabled:
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, signal_laser)  # noqa: F821
        play(demod, demod["window"], signal_window)  # noqa: F821
        wait_until(signal_window + READOUT_LEAD)  # noqa: F821
        read_res()  # noqa: F821
        if pair >= warmup_pairs:
            signal_sum = signal_sum + read_real()  # noqa: F821
        else:
            read_real()  # noqa: F821
        read_imag()  # noqa: F821

        # An equally sized reset train precedes the independently acquired
        # MW-off reference pulse.
        reset_laser = now() + SCHEDULE_LEAD + laser_start_batches  # noqa: F821
        reset_index = 0
        while reset_index < reset_pulses:
            if laser_enabled:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
            wait_until(reset_laser + laser_duration_batches)  # noqa: F821
            reset_laser = reset_laser + half_duration_batches
            reset_index += 1

        reference_laser = reset_laser + post_reset_settle_batches
        reference_window = reference_laser + readout_delay_batches
        if laser_enabled:
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reference_laser)  # noqa: F821
        play(demod, demod["window"], reference_window)  # noqa: F821
        wait_until(reference_window + READOUT_LEAD)  # noqa: F821
        read_res()  # noqa: F821
        if pair >= warmup_pairs:
            reference_sum = reference_sum + read_real()  # noqa: F821
        else:
            read_real()  # noqa: F821
        read_imag()  # noqa: F821
        pair += 1

    out[0] = signal_sum
    out[1] = reference_sum


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(
        k_pulsed_esr_halfmw_symmetric_reset, m,
        tables={"mw": mw, "demod": demod}, out=Array(2),
    )


def settle_us_to_batches(settle_us: float) -> int:
    if not math.isfinite(settle_us) or settle_us < 0:
        raise ValueError("post-reset-settle-us must be a non-negative finite value")
    return round(settle_us * DSP_BATCHES_PER_US)


def acquire_scan(host: str, *, port: int = 9091, start_hz: float = DEFAULT_START_HZ,
                 stop_hz: float = DEFAULT_STOP_HZ, frequency_steps: int = DEFAULT_FREQUENCY_STEPS,
                 mw_amp: float | None = None,
                 half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES,
                 laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                 readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
                 warmup_pairs: int = 0, samples_per_frequency: int = DEFAULT_SAMPLES_PER_FREQUENCY,
                 averages: int = DEFAULT_AVERAGES, reset_pulses: int = DEFAULT_RESET_PULSES,
                 post_reset_settle_us: float = 0.0, mw_enabled: bool = True,
                 laser_enabled: bool = True,
                 timeout_s: float = 10.0) -> tuple[SocMap, list[float], np.ndarray, np.ndarray]:
    """Acquire per-scan signal/reference means with matched reset histories."""
    if not host.strip():
        raise ValueError("host must be non-empty (set BOARD_IP or pass --host explicitly)")
    if mw_amp is None:
        raise ValueError("mw-amp is required: choose a reviewed DAC0 amplitude for your MW chain")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    if not 1 <= reset_pulses <= MAX_RESET_PULSES:
        raise ValueError(f"reset-pulses must be in 1..{MAX_RESET_PULSES} for the symmetric-reset experiment")
    post_reset_settle_batches = settle_us_to_batches(post_reset_settle_us)
    frequencies_hz = frequency_grid(start_hz, stop_hz, frequency_steps)
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, frequencies_hz, mw_amp, half_duration_batches, laser_start_batches,
                  laser_duration_batches, readout_delay_batches, readout_window_batches,
                  warmup_pairs, samples_per_frequency, averages, reset_pulses)
        program = build_program(m)
        shared = {
            "half_duration_batches": half_duration_batches,
            "laser_start_batches": laser_start_batches,
            "laser_duration_batches": laser_duration_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "mw_amp_code": units.amp_to_code(mw_amp),
            "warmup_pairs": warmup_pairs,
            "samples_per_frequency": samples_per_frequency,
            "reset_pulses": reset_pulses,
            "post_reset_settle_batches": post_reset_settle_batches,
            "mw_enabled": int(mw_enabled),
            "laser_enabled": int(laser_enabled),
        }
        reference_mean = np.empty((averages, len(frequencies_hz)), dtype=float)
        signal_mean = np.empty_like(reference_mean)
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            for frequency_index, frequency_hz in enumerate(frequencies_hz):
                result = run.rerun(
                    drv, m, {0: program},
                    params={0: {**shared, "mw_freq_code": units.freq_to_code(frequency_hz, m.params)}},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                )[0]["out"]
                signal_mean[average_index, frequency_index] = _s32(int(result[0])) / samples_per_frequency
                reference_mean[average_index, frequency_index] = _s32(int(result[1])) / samples_per_frequency
        return m, frequencies_hz, reference_mean, signal_mean
    finally:
        drv.close()


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"),
                        help="board-service host or Pyro URI; defaults to BOARD_IP")
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--start-hz", type=float, default=DEFAULT_START_HZ)
    parser.add_argument("--stop-hz", type=float, default=DEFAULT_STOP_HZ)
    parser.add_argument("--frequency-steps", type=int, default=DEFAULT_FREQUENCY_STEPS)
    parser.add_argument("--half-duration-batches", type=int, default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--laser-start-batches", type=int, default=DEFAULT_LASER_START_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--readout-window-batches", type=int, default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--warmup-pairs", type=int, default=0)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--post-reset-settle-us", type=float, default=0.0,
                        help="extra dark time after each reset train, before the MW/readout shot")
    parser.add_argument("--disable-mw", action="store_true",
                        help="do not schedule the microwave waveform; frequency loop remains unchanged")
    parser.add_argument("--disable-laser", action="store_true",
                        help="do not emit laser triggers; timing waits and ADC gates remain unchanged")
    parser.add_argument("--samples-per-frequency", type=int, default=DEFAULT_SAMPLES_PER_FREQUENCY)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_pulsed_esr_halfmw_symmetric_reset_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_pulsed_esr_halfmw_symmetric_reset_{formatted_time}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    _, frequencies_hz, reference_mean, signal_mean = acquire_scan(
        args.host, port=args.port, start_hz=args.start_hz, stop_hz=args.stop_hz,
        frequency_steps=args.frequency_steps, mw_amp=args.mw_amp,
        half_duration_batches=args.half_duration_batches, laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches, readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches, warmup_pairs=args.warmup_pairs,
        samples_per_frequency=args.samples_per_frequency, averages=args.averages,
        reset_pulses=args.reset_pulses, post_reset_settle_us=args.post_reset_settle_us,
        mw_enabled=not args.disable_mw, laser_enabled=not args.disable_laser,
        timeout_s=args.timeout_s,
    )
    save_and_plot(
        frequencies_hz, reference_mean, signal_mean, args.output, args.plot,
        half_duration_batches=args.half_duration_batches, laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches, readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches, warmup_pairs=args.warmup_pairs,
        samples_per_frequency=args.samples_per_frequency, reset_pulses=args.reset_pulses,
        post_reset_settle_batches=settle_us_to_batches(args.post_reset_settle_us),
        mw_enabled=not args.disable_mw, laser_enabled=not args.disable_laser,
    )
    print(f"saved {args.averages} ascending scans of {args.frequency_steps} frequencies; "
          f"{args.samples_per_frequency} pairs/frequency to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
