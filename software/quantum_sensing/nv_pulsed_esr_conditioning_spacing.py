"""Separate conditioning pulse dose from elapsed train time.

Each MW-off probe follows an independently reset ABBA block of detuned,
resonant, resonant, detuned conditioning.  A conditioning pair retains the
working 492-batch half-MW geometry, while ``conditioning_pair_period`` sets
the start-to-start period of adjacent pairs.  Thus the pair count and the
idle between pairs can be varied independently.  The default schedules
64x8 us, 128x4 us, and 256x2 us have approximately matched 512-us trains.

The recovery delay starts at the end of the final conditioning laser trigger
interval.  Laser high time is a reliable rising-edge trigger interval, not a
claim about the optical pulse width.
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
from riscq.map import READOUT_LEAD, READOUT_MAX_WIN_LOG2, SocMap, SocParams
from riscq.pulses import units
from software.quantum_sensing.nv_pulsed_esr_conditioning_recovery import summarize
from software.quantum_sensing.nv_pulsed_esr_halfmw import (
    DEFAULT_HALF_DURATION_BATCHES, DEFAULT_LASER_START_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES, DEFAULT_READOUT_DELAY_BATCHES,
    DEFAULT_READOUT_WINDOW_BATCHES, LASER_CW, LASER_HALF_PERIOD,
    MAX_PULSE_BATCHES, SCHEDULE_LEAD, _s32, _tables,
)


DSP_BATCHES_PER_US = 491.52
DEFAULT_RESONANT_HZ = 2.875e9
DEFAULT_DETUNED_HZ = 2.800e9
# Corresponding entries form one schedule; this is deliberately not a
# Cartesian product, so dose can be compared at matched elapsed train time.
DEFAULT_CONDITIONING_PAIRS = (64, 128, 256)
DEFAULT_CONDITIONING_PAIR_PERIOD_US = (8.0, 4.0, 2.0)
DEFAULT_RECOVERY_DELAY_US = 10.0
DEFAULT_RESET_PULSES = 20
DEFAULT_RESET_SPACING_BATCHES = DEFAULT_HALF_DURATION_BATCHES
DEFAULT_BLOCKS_PER_POINT = 100
DEFAULT_AVERAGES = 10
MAX_CONDITIONING_PAIRS = 256
MAX_RESET_PULSES = 64
MAX_BLOCKS_PER_POINT = 1_000
MAX_PAIR_PERIOD_BATCHES = round(100_000 * DSP_BATCHES_PER_US)
MAX_RECOVERY_DELAY_BATCHES = round(100_000 * DSP_BATCHES_PER_US)


def us_to_batches(value_us: float, *, name: str) -> int:
    if not math.isfinite(value_us) or value_us <= 0:
        raise ValueError(f"{name} must be positive finite values")
    return max(1, round(value_us * DSP_BATCHES_PER_US))


def pair_period_us_to_batches(value_us: float) -> int:
    """Quantize a pair period upward so it cannot overlap its two halves."""
    if not math.isfinite(value_us) or value_us <= 0:
        raise ValueError("conditioning pair periods must be positive finite values")
    return max(1, math.ceil(value_us * DSP_BATCHES_PER_US))


def train_duration_batches(conditioning_pairs: int, pair_period_batches: int,
                           half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES) -> int:
    """Elapsed time from first MW half start through final reference half."""
    return ((conditioning_pairs - 1) * pair_period_batches
            + 2 * half_duration_batches)


def validate_schedule_axis(conditioning_pairs: list[int], pair_period_us: list[float],
                           half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES) -> tuple[list[int], list[int]]:
    """Validate paired dose/period schedules and return quantized periods."""
    if not conditioning_pairs or len(conditioning_pairs) != len(pair_period_us):
        raise ValueError("conditioning pairs and pair periods must be non-empty equal-length lists")
    if any(value < 1 or value > MAX_CONDITIONING_PAIRS for value in conditioning_pairs):
        raise ValueError(f"conditioning pairs must be values in 1..{MAX_CONDITIONING_PAIRS}")
    periods = [pair_period_us_to_batches(value) for value in pair_period_us]
    if len(set(zip(conditioning_pairs, periods))) != len(conditioning_pairs):
        raise ValueError("conditioning pair-count/period configurations must be unique")
    minimum_period = 2 * half_duration_batches
    if any(value < minimum_period or value > MAX_PAIR_PERIOD_BATCHES for value in periods):
        raise ValueError("conditioning pair period must fit one complete two-half pair and be at most 100000 us")
    return conditioning_pairs, periods


@no_type_check
@kernel
def k_conditioning_spacing(
        mw: ParamTable, demod: ParamTable, out: Array,
        reset_spacing_batches: int, reset_pulses: int,
        half_duration_batches: int, laser_start_batches: int,
        laser_duration_batches: int, readout_delay_batches: int,
        readout_window_batches: int, detuned_freq_code: int,
        resonant_freq_code: int, mw_amp_code: int,
        conditioning_pairs: int, conditioning_pair_period_batches: int,
        recovery_delay_batches: int, blocks_per_point: int):
    """Accumulate MW-off probes after spacing-controlled conditioning."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_dur(mw, mw["mw"], half_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821

    detuned_sum = 0
    resonant_sum = 0
    block = 0
    while block < blocks_per_point:
        shot = 0
        while shot < 4:
            reset_laser = now() + SCHEDULE_LEAD  # noqa: F821
            reset_index = 0
            while reset_index < reset_pulses:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
                wait_until(reset_laser + laser_duration_batches)  # noqa: F821
                reset_laser = reset_laser + reset_spacing_batches
                reset_index += 1

            if shot == 1 or shot == 2:
                set_freq(mw, resonant_freq_code)  # noqa: F821
            else:
                set_freq(mw, detuned_freq_code)  # noqa: F821

            # One pair is scheduled and drained at a time.  This retains the
            # two laser entries of a pair; the final probe makes at most three
            # future laser events, below the depth-four queue limit.
            pair = 0
            signal_start = now() + SCHEDULE_LEAD  # noqa: F821
            probe_laser = 0
            probe_window = 0
            while pair < conditioning_pairs:
                reference_start = signal_start + half_duration_batches
                signal_laser = signal_start + laser_start_batches
                reference_laser = reference_start + laser_start_batches
                play(mw, mw["mw"], signal_start)  # noqa: F821
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, signal_laser)  # noqa: F821
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reference_laser)  # noqa: F821
                if pair + 1 == conditioning_pairs:
                    probe_laser = (reference_laser + laser_duration_batches
                                   + recovery_delay_batches)
                    probe_window = probe_laser + readout_delay_batches
                    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, probe_laser)  # noqa: F821
                    play(demod, demod["window"], probe_window)  # noqa: F821
                wait_until(reference_laser + laser_duration_batches)  # noqa: F821
                pair += 1
                signal_start = signal_start + conditioning_pair_period_batches

            # The probe has no associated MW play.
            wait_until(probe_window + READOUT_LEAD)  # noqa: F821
            read_res()  # noqa: F821
            if shot == 1 or shot == 2:
                resonant_sum = resonant_sum + read_real()  # noqa: F821
            else:
                detuned_sum = detuned_sum + read_real()  # noqa: F821
            read_imag()  # noqa: F821
            shot += 1
        block += 1
    out[0] = detuned_sum
    out[1] = resonant_sum


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(k_conditioning_spacing, m, tables={"mw": mw, "demod": demod}, out=Array(2))


def _validate(m: SocMap, *, resonant_hz: float, detuned_hz: float, mw_amp: float,
              reset_spacing_batches: int, reset_pulses: int, half_duration_batches: int,
              laser_start_batches: int, laser_duration_batches: int,
              readout_delay_batches: int, readout_window_batches: int,
              conditioning_pairs: int, conditioning_pair_period_batches: int,
              recovery_delay_batches: int, blocks_per_point: int, averages: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not all(math.isfinite(value) and value > 0 for value in (resonant_hz, detuned_hz)) or resonant_hz == detuned_hz:
        raise ValueError("resonant and detuned frequencies must be positive finite values and must differ")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= reset_pulses <= MAX_RESET_PULSES or reset_spacing_batches < laser_duration_batches:
        raise ValueError("reset pulses/spacing are outside safe bounds")
    if not 1 <= half_duration_batches <= MAX_PULSE_BATCHES or not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("half and laser durations must be in 1..65535 batches")
    if laser_start_batches < 0 or laser_start_batches + laser_duration_batches > half_duration_batches:
        raise ValueError("conditioning laser start and duration must fit within one half")
    if readout_delay_batches < 0 or not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout delay/window are outside decoder bounds")
    if not 1 <= conditioning_pairs <= MAX_CONDITIONING_PAIRS:
        raise ValueError(f"conditioning-pairs must be in 1..{MAX_CONDITIONING_PAIRS}")
    if not 2 * half_duration_batches <= conditioning_pair_period_batches <= MAX_PAIR_PERIOD_BATCHES:
        raise ValueError("conditioning pair period must fit one complete two-half pair")
    if not 1 <= recovery_delay_batches <= MAX_RECOVERY_DELAY_BATCHES:
        raise ValueError("recovery delay must be positive and at most 100000 us")
    if not 1 <= blocks_per_point <= MAX_BLOCKS_PER_POINT or averages < 1:
        raise ValueError("blocks-per-point and averages must be positive and within bounds")


def acquire_grid(host: str, *, port: int = 9091, resonant_hz: float = DEFAULT_RESONANT_HZ,
                 detuned_hz: float = DEFAULT_DETUNED_HZ, mw_amp: float | None = None,
                 conditioning_pairs: list[int] | tuple[int, ...] = DEFAULT_CONDITIONING_PAIRS,
                 conditioning_pair_period_us: list[float] | tuple[float, ...] = DEFAULT_CONDITIONING_PAIR_PERIOD_US,
                 recovery_delay_us: float = DEFAULT_RECOVERY_DELAY_US,
                 reset_spacing_batches: int = DEFAULT_RESET_SPACING_BATCHES,
                 reset_pulses: int = DEFAULT_RESET_PULSES,
                 half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES,
                 laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                 readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
                 blocks_per_point: int = DEFAULT_BLOCKS_PER_POINT, averages: int = DEFAULT_AVERAGES,
                 timeout_s: float = 15.0):
    """Acquire run-level condition means for paired dose/elapsed-time schedules."""
    if not host.strip() or mw_amp is None or timeout_s <= 0:
        raise ValueError("host, mw-amp, and positive timeout-s are required")
    pair_axis, period_batches = validate_schedule_axis(list(conditioning_pairs), list(conditioning_pair_period_us), half_duration_batches)
    recovery_batches = us_to_batches(recovery_delay_us, name="recovery delay")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        for pairs, period in zip(pair_axis, period_batches):
            _validate(m, resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp,
                      reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
                      half_duration_batches=half_duration_batches, laser_start_batches=laser_start_batches,
                      laser_duration_batches=laser_duration_batches, readout_delay_batches=readout_delay_batches,
                      readout_window_batches=readout_window_batches, conditioning_pairs=pairs,
                      conditioning_pair_period_batches=period, recovery_delay_batches=recovery_batches,
                      blocks_per_point=blocks_per_point, averages=averages)
        program = build_program(m)
        shared = dict(reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
                      half_duration_batches=half_duration_batches, laser_start_batches=laser_start_batches,
                      laser_duration_batches=laser_duration_batches, readout_delay_batches=readout_delay_batches,
                      readout_window_batches=readout_window_batches, detuned_freq_code=units.freq_to_code(detuned_hz, m.params),
                      resonant_freq_code=units.freq_to_code(resonant_hz, m.params), mw_amp_code=units.amp_to_code(mw_amp),
                      recovery_delay_batches=recovery_batches, blocks_per_point=blocks_per_point)
        shape = (averages, len(pair_axis))
        detuned_probe_mean, resonant_probe_mean = np.empty(shape), np.empty(shape)
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            schedule_order = range(len(pair_axis)) if average_index % 2 == 0 else range(len(pair_axis) - 1, -1, -1)
            for schedule_index in schedule_order:
                result = run.rerun(drv, m, {0: program}, params={0: {**shared,
                    "conditioning_pairs": pair_axis[schedule_index],
                    "conditioning_pair_period_batches": period_batches[schedule_index]}},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)))[0]["out"]
                detuned_probe_mean[average_index, schedule_index] = _s32(int(result[0])) / (2 * blocks_per_point)
                resonant_probe_mean[average_index, schedule_index] = _s32(int(result[1])) / (2 * blocks_per_point)
        return m, pair_axis, period_batches, recovery_batches, detuned_probe_mean, resonant_probe_mean
    finally:
        drv.close()


def save_and_plot(conditioning_pairs: list[int], requested_pair_period_us: list[float],
                  pair_period_batches: list[int], recovery_delay_batches: int,
                  detuned_probe_mean: np.ndarray, resonant_probe_mean: np.ndarray, output: Path, plot: Path,
                  *, resonant_hz: float, detuned_hz: float, mw_amp: float, half_duration_batches: int,
                  reset_spacing_batches: int, reset_pulses: int, laser_start_batches: int,
                  laser_duration_batches: int, readout_delay_batches: int,
                  readout_window_batches: int, blocks_per_point: int, averages: int) -> None:
    # ``summarize`` uses a 3-D grid; schedules are one one-dimensional axis.
    summary = summarize(detuned_probe_mean[:, :, None], resonant_probe_mean[:, :, None])
    summary = {key: (value[:, 0] if value.ndim == 2 else value[:, :, 0]) for key, value in summary.items()}
    periods_us = np.asarray(pair_period_batches) / DSP_BATCHES_PER_US
    train_us = np.asarray([train_duration_batches(pairs, period, half_duration_batches)
                           for pairs, period in zip(conditioning_pairs, pair_period_batches)]) / DSP_BATCHES_PER_US
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(output, conditioning_pairs=np.asarray(conditioning_pairs),
             requested_conditioning_pair_period_us=np.asarray(requested_pair_period_us),
             conditioning_pair_period_batches=np.asarray(pair_period_batches),
             conditioning_pair_period_us=periods_us, inter_pair_idle_batches=np.asarray(pair_period_batches) - 2 * half_duration_batches,
             actual_train_duration_us=train_us, recovery_delay_batches=recovery_delay_batches,
             actual_recovery_delay_us=recovery_delay_batches / DSP_BATCHES_PER_US,
             detuned_probe_mean=detuned_probe_mean, resonant_probe_mean=resonant_probe_mean,
             resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp, half_duration_batches=half_duration_batches,
             reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
             laser_start_batches=laser_start_batches, laser_duration_batches=laser_duration_batches,
             readout_delay_batches=readout_delay_batches, readout_window_batches=readout_window_batches,
             averages=averages,
             blocks_per_point=blocks_per_point, samples_per_condition=2 * blocks_per_point,
             condition_order="detuned_resonant_resonant_detuned", grid_order="forward_even_averages_reverse_odd_averages",
             recovery_delay_origin="end_of_final_conditioning_laser_trigger_interval", **summary)
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    labels = [f"N={pairs}, T={period:g} us\\ntrain={duration:.1f} us" for pairs, period, duration in zip(conditioning_pairs, periods_us, train_us)]
    fig, axes = plt.subplots(1, 2, layout="constrained", figsize=(11, 4))
    axes[0].errorbar(labels, summary["resonant_minus_detuned"], yerr=summary["resonant_minus_detuned_sem"], fmt="o")
    axes[0].set(ylabel="resonant - detuned probe (ADC code)", title="MW-off probe difference")
    axes[1].errorbar(labels, 100 * summary["positive_contrast"], yerr=100 * summary["positive_contrast_sem"], fmt="o")
    axes[1].set(ylabel="positive contrast (%)", title="Ratio-of-means contrast")
    fig.suptitle(f"{resonant_hz / 1e9:.3f} vs {detuned_hz / 1e9:.3f} GHz conditioning; {2 * blocks_per_point} probes/condition/run")
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--conditioning-pairs", type=int, nargs="+", default=list(DEFAULT_CONDITIONING_PAIRS))
    parser.add_argument("--conditioning-pair-period-us", type=float, nargs="+", default=list(DEFAULT_CONDITIONING_PAIR_PERIOD_US))
    parser.add_argument("--recovery-delay-us", type=float, default=DEFAULT_RECOVERY_DELAY_US)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--detuned-hz", type=float, default=DEFAULT_DETUNED_HZ)
    parser.add_argument("--blocks-per-point", type=int, default=DEFAULT_BLOCKS_PER_POINT)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=15.0)
    parser.add_argument("--output", type=Path, default=Path(f"data/esr/nv_pulsed_esr_conditioning_spacing_{timestamp}.npz"))
    parser.add_argument("--plot", type=Path, default=Path(f"data/esr/nv_pulsed_esr_conditioning_spacing_{timestamp}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    result = acquire_grid(args.host, port=args.port, resonant_hz=args.resonant_hz, detuned_hz=args.detuned_hz,
                          mw_amp=args.mw_amp, conditioning_pairs=args.conditioning_pairs,
                          conditioning_pair_period_us=args.conditioning_pair_period_us,
                          recovery_delay_us=args.recovery_delay_us, blocks_per_point=args.blocks_per_point,
                          averages=args.averages, timeout_s=args.timeout_s)
    _, pairs, periods, recovery, detuned, resonant = result
    save_and_plot(pairs, args.conditioning_pair_period_us, periods, recovery, detuned, resonant, args.output, args.plot,
                  resonant_hz=args.resonant_hz, detuned_hz=args.detuned_hz, mw_amp=args.mw_amp,
                  half_duration_batches=DEFAULT_HALF_DURATION_BATCHES,
                  reset_spacing_batches=DEFAULT_RESET_SPACING_BATCHES, reset_pulses=DEFAULT_RESET_PULSES,
                  laser_start_batches=DEFAULT_LASER_START_BATCHES, laser_duration_batches=DEFAULT_LASER_TRIGGER_BATCHES,
                  readout_delay_batches=DEFAULT_READOUT_DELAY_BATCHES, readout_window_batches=DEFAULT_READOUT_WINDOW_BATCHES,
                  blocks_per_point=args.blocks_per_point, averages=args.averages)
    print(f"saved {args.averages} runs of {len(pairs)} matched schedules; {2 * args.blocks_per_point} probes/condition/run to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
