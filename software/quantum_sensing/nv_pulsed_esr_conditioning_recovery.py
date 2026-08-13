"""Measure resonance-conditioned fluorescence buildup and recovery.

Every acquired probe is preceded by an independent optical reset and a
gap-free train of qdSpectro-style half-MW conditioning pairs.  The train uses
either the detuned or resonant microwave frequency, then ends with a
programmable delay and one MW-off optical probe.  Only that probe is
integrated.  Conditions are ordered detuned/resonant/resonant/detuned (ABBA)
inside the resident kernel so slow fluorescence drift is locally balanced.

The programmed recovery delay begins after the final conditioning laser
trigger interval.  The external laser is rising-edge triggered, so this is a
digital timing definition rather than a claim about optical pulse duration.
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
from software.quantum_sensing.nv_pulsed_esr_halfmw import (
    DEFAULT_HALF_DURATION_BATCHES,
    DEFAULT_LASER_START_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES,
    DEFAULT_READOUT_DELAY_BATCHES,
    DEFAULT_READOUT_WINDOW_BATCHES,
    LASER_CW,
    LASER_HALF_PERIOD,
    MAX_PULSE_BATCHES,
    SCHEDULE_LEAD,
    _s32,
    _tables,
)


DSP_BATCHES_PER_US = 491.52
DEFAULT_RESONANT_HZ = 2.875e9
DEFAULT_DETUNED_HZ = 2.800e9
DEFAULT_CONDITIONING_PAIRS = (1, 2, 4, 8, 16, 32, 64, 128, 256)
DEFAULT_RECOVERY_DELAYS_US = (1.0, 2.0, 5.0, 10.0, 20.0, 50.0,
                              100.0, 200.0, 500.0, 1_000.0)
DEFAULT_RESET_PULSES = 20
DEFAULT_RESET_SPACING_BATCHES = DEFAULT_HALF_DURATION_BATCHES
DEFAULT_BLOCKS_PER_POINT = 100
DEFAULT_AVERAGES = 10
MAX_CONDITIONING_PAIRS = 256
MAX_RESET_PULSES = 64
MAX_BLOCKS_PER_POINT = 1_000
MAX_RECOVERY_DELAY_BATCHES = round(100_000 * DSP_BATCHES_PER_US)


def recovery_us_to_batches(delay_us: float) -> int:
    """Quantize a positive programmed recovery delay to DSP batches."""
    if not math.isfinite(delay_us) or delay_us <= 0:
        raise ValueError("recovery delays must be positive finite values")
    return max(1, round(delay_us * DSP_BATCHES_PER_US))


def validate_axes(conditioning_pairs: list[int], recovery_delays_us: list[float]) -> tuple[list[int], list[int]]:
    """Validate ordered scan axes and return quantized recovery delays."""
    if not conditioning_pairs or any(value < 1 or value > MAX_CONDITIONING_PAIRS
                                     for value in conditioning_pairs):
        raise ValueError(f"conditioning pairs must be in 1..{MAX_CONDITIONING_PAIRS}")
    if conditioning_pairs != sorted(set(conditioning_pairs)):
        raise ValueError("conditioning pairs must be unique and strictly increasing")
    if not recovery_delays_us:
        raise ValueError("at least one recovery delay is required")
    recovery_batches = [recovery_us_to_batches(value) for value in recovery_delays_us]
    if recovery_batches != sorted(set(recovery_batches)):
        raise ValueError("recovery delays must be unique and strictly increasing after batch quantization")
    if recovery_batches[-1] > MAX_RECOVERY_DELAY_BATCHES:
        raise ValueError("recovery delays must not exceed 100000 us")
    return conditioning_pairs, recovery_batches


@no_type_check
@kernel
def k_conditioning_recovery(
        mw: ParamTable, demod: ParamTable, out: Array,
        reset_spacing_batches: int, reset_pulses: int,
        half_duration_batches: int, laser_start_batches: int,
        laser_duration_batches: int, readout_delay_batches: int,
        readout_window_batches: int, detuned_freq_code: int,
        resonant_freq_code: int, mw_amp_code: int,
        conditioning_pairs: int, recovery_delay_batches: int,
        blocks_per_point: int):
    """Return accumulated MW-off probes after detuned/resonant conditioning."""
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
            # Every ABBA member has an independent, identical reset history.
            reset_laser = now() + SCHEDULE_LEAD  # noqa: F821
            reset_index = 0
            while reset_index < reset_pulses:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
                wait_until(reset_laser + laser_duration_batches)  # noqa: F821
                reset_laser = reset_laser + reset_spacing_batches
                reset_index += 1

            # A occupies shots 0/3 and B occupies shots 1/2.  Both use the
            # same amplitude, pulse count, laser count, and timing.
            if shot == 1 or shot == 2:
                set_freq(mw, resonant_freq_code)  # noqa: F821
            else:
                set_freq(mw, detuned_freq_code)  # noqa: F821

            # Prime two complete half-MW conditioning pairs.  Each pair has
            # one MW-on signal-position laser and one MW-off reference-position
            # laser, matching the train in nv_pulsed_esr_halfmw.py.
            pair = 0
            signal_start = now() + SCHEDULE_LEAD  # noqa: F821
            reference_start = signal_start + half_duration_batches
            signal_laser = signal_start + laser_start_batches
            reference_laser = reference_start + laser_start_batches
            play(mw, mw["mw"], signal_start)  # noqa: F821
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, signal_laser)  # noqa: F821
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reference_laser)  # noqa: F821
            if conditioning_pairs > 1:
                second_signal_start = signal_start + 2 * half_duration_batches
                second_reference_start = second_signal_start + half_duration_batches
                second_signal_laser = second_signal_start + laser_start_batches
                second_reference_laser = second_reference_start + laser_start_batches
                play(mw, mw["mw"], second_signal_start)  # noqa: F821
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, second_signal_laser)  # noqa: F821
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, second_reference_laser)  # noqa: F821

            probe_laser = 0
            probe_window = 0
            while pair < conditioning_pairs:
                # Schedule the sole acquired probe while the final
                # conditioning pair is still in flight.  At most the final
                # pair's two laser entries plus this probe occupy the queue.
                if pair + 1 == conditioning_pairs:
                    probe_laser = (reference_laser + laser_duration_batches
                                   + recovery_delay_batches)
                    probe_window = probe_laser + readout_delay_batches
                    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, probe_laser)  # noqa: F821
                    play(demod, demod["window"], probe_window)  # noqa: F821

                wait_until(reference_laser + laser_duration_batches)  # noqa: F821
                next_pair = pair + 2
                if next_pair < conditioning_pairs:
                    next_signal_start = signal_start + 4 * half_duration_batches
                    next_reference_start = next_signal_start + half_duration_batches
                    next_signal_laser = next_signal_start + laser_start_batches
                    next_reference_laser = next_reference_start + laser_start_batches
                    play(mw, mw["mw"], next_signal_start)  # noqa: F821
                    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, next_signal_laser)  # noqa: F821
                    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, next_reference_laser)  # noqa: F821

                pair += 1
                signal_start = signal_start + 2 * half_duration_batches
                reference_start = signal_start + half_duration_batches
                signal_laser = signal_start + laser_start_batches
                reference_laser = reference_start + laser_start_batches

            # There is deliberately no MW play associated with this probe.
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
    return compile_kernel(
        k_conditioning_recovery, m,
        tables={"mw": mw, "demod": demod}, out=Array(2),
    )


def _validate(
        m: SocMap, *, resonant_hz: float, detuned_hz: float, mw_amp: float,
        reset_spacing_batches: int, reset_pulses: int,
        half_duration_batches: int, laser_start_batches: int,
        laser_duration_batches: int, readout_delay_batches: int,
        readout_window_batches: int, conditioning_pairs: int,
        recovery_delay_batches: int, blocks_per_point: int,
        averages: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not all(math.isfinite(value) and value > 0 for value in (resonant_hz, detuned_hz)):
        raise ValueError("resonant and detuned frequencies must be positive finite values")
    if resonant_hz == detuned_hz:
        raise ValueError("resonant and detuned frequencies must differ")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= reset_pulses <= MAX_RESET_PULSES:
        raise ValueError(f"reset-pulses must be in 1..{MAX_RESET_PULSES}")
    if reset_spacing_batches < laser_duration_batches:
        raise ValueError("reset spacing must be at least the laser trigger width")
    if not 1 <= half_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("half duration must be in 1..65535 batches")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser duration must be in 1..65535 batches")
    if laser_start_batches < 0 or laser_start_batches + laser_duration_batches > half_duration_batches:
        raise ValueError("conditioning laser start and duration must fit within one half")
    if readout_delay_batches < 0:
        raise ValueError("readout delay must be non-negative")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window must be within the decoder limit")
    if not 1 <= conditioning_pairs <= MAX_CONDITIONING_PAIRS:
        raise ValueError(f"conditioning-pairs must be in 1..{MAX_CONDITIONING_PAIRS}")
    if not 1 <= recovery_delay_batches <= MAX_RECOVERY_DELAY_BATCHES:
        raise ValueError("recovery delay must be positive and at most 100000 us")
    if not 1 <= blocks_per_point <= MAX_BLOCKS_PER_POINT:
        raise ValueError(f"blocks-per-point must be in 1..{MAX_BLOCKS_PER_POINT}")
    if averages < 1:
        raise ValueError("averages must be positive")


def summarize(detuned_probe_mean: np.ndarray, resonant_probe_mean: np.ndarray) -> dict[str, np.ndarray]:
    """Return paired probe differences and ratio-of-means contrast."""
    detuned = np.asarray(detuned_probe_mean, dtype=float)
    resonant = np.asarray(resonant_probe_mean, dtype=float)
    if detuned.shape != resonant.shape or detuned.ndim != 3:
        raise ValueError("probe means must have shape (averages, conditioning, recovery)")
    difference_by_run = resonant - detuned
    difference = difference_by_run.mean(axis=0)
    detuned_mean = detuned.mean(axis=0)
    resonant_mean = resonant.mean(axis=0)
    common_mean = (detuned_mean + resonant_mean) / 2
    positive_difference_by_run = -difference_by_run
    positive_contrast = np.divide(
        detuned_mean - resonant_mean, detuned_mean,
        out=np.full_like(detuned_mean, np.nan), where=detuned_mean != 0,
    )
    if len(detuned) == 1:
        difference_sem = np.full(difference.shape, np.nan)
        positive_contrast_sem = np.full(difference.shape, np.nan)
    else:
        difference_sem = difference_by_run.std(axis=0, ddof=1) / math.sqrt(len(detuned))
        positive_difference_sem = (positive_difference_by_run.std(axis=0, ddof=1)
                                   / math.sqrt(len(detuned)))
        positive_contrast_sem = np.divide(
            positive_difference_sem, np.abs(detuned_mean),
            out=np.full_like(detuned_mean, np.nan), where=detuned_mean != 0,
        )
    separation_z = np.divide(
        difference, difference_sem,
        out=np.full_like(difference, np.nan), where=difference_sem != 0,
    )
    return {
        "detuned_probe_grand_mean": detuned_mean,
        "resonant_probe_grand_mean": resonant_mean,
        "common_probe_mean": common_mean,
        "resonant_minus_detuned": difference,
        "resonant_minus_detuned_sem": difference_sem,
        "difference_by_run": difference_by_run,
        "positive_contrast": positive_contrast,
        "positive_contrast_sem": positive_contrast_sem,
        "separation_z": separation_z,
    }


def acquire_grid(
        host: str, *, port: int = 9091,
        resonant_hz: float = DEFAULT_RESONANT_HZ,
        detuned_hz: float = DEFAULT_DETUNED_HZ,
        mw_amp: float | None = None,
        conditioning_pairs: list[int] | tuple[int, ...] = DEFAULT_CONDITIONING_PAIRS,
        recovery_delays_us: list[float] | tuple[float, ...] = DEFAULT_RECOVERY_DELAYS_US,
        reset_spacing_batches: int = DEFAULT_RESET_SPACING_BATCHES,
        reset_pulses: int = DEFAULT_RESET_PULSES,
        half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES,
        laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
        laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
        readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
        readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
        blocks_per_point: int = DEFAULT_BLOCKS_PER_POINT,
        averages: int = DEFAULT_AVERAGES,
        timeout_s: float = 15.0):
    """Acquire run-level MW-off probe means across conditioning/recovery axes."""
    if not host.strip():
        raise ValueError("host must be non-empty")
    if mw_amp is None:
        raise ValueError("mw-amp is required")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    pair_axis, recovery_batches = validate_axes(list(conditioning_pairs), list(recovery_delays_us))
    actual_recovery_us = [value / DSP_BATCHES_PER_US for value in recovery_batches]

    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        for pair_count in pair_axis:
            for delay_batches in recovery_batches:
                _validate(
                    m, resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp,
                    reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
                    half_duration_batches=half_duration_batches,
                    laser_start_batches=laser_start_batches,
                    laser_duration_batches=laser_duration_batches,
                    readout_delay_batches=readout_delay_batches,
                    readout_window_batches=readout_window_batches,
                    conditioning_pairs=pair_count,
                    recovery_delay_batches=delay_batches,
                    blocks_per_point=blocks_per_point, averages=averages,
                )
        program = build_program(m)
        shared = {
            "reset_spacing_batches": reset_spacing_batches,
            "reset_pulses": reset_pulses,
            "half_duration_batches": half_duration_batches,
            "laser_start_batches": laser_start_batches,
            "laser_duration_batches": laser_duration_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "detuned_freq_code": units.freq_to_code(detuned_hz, m.params),
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp),
            "blocks_per_point": blocks_per_point,
        }
        shape = (averages, len(pair_axis), len(recovery_batches))
        detuned_probe_mean = np.empty(shape, dtype=float)
        resonant_probe_mean = np.empty(shape, dtype=float)
        samples_per_condition = 2 * blocks_per_point
        points = [(pair_index, delay_index)
                  for pair_index in range(len(pair_axis))
                  for delay_index in range(len(recovery_batches))]
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            point_order = points if average_index % 2 == 0 else reversed(points)
            for pair_index, delay_index in point_order:
                result = run.rerun(
                    drv, m, {0: program},
                    params={0: {
                        **shared,
                        "conditioning_pairs": pair_axis[pair_index],
                        "recovery_delay_batches": recovery_batches[delay_index],
                    }},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                )[0]["out"]
                detuned_probe_mean[average_index, pair_index, delay_index] = (
                    _s32(int(result[0])) / samples_per_condition
                )
                resonant_probe_mean[average_index, pair_index, delay_index] = (
                    _s32(int(result[1])) / samples_per_condition
                )
        return (m, pair_axis, list(recovery_delays_us), actual_recovery_us,
                recovery_batches, detuned_probe_mean, resonant_probe_mean)
    finally:
        drv.close()


def save_and_plot(
        conditioning_pairs: list[int], requested_recovery_us: list[float],
        actual_recovery_us: list[float], recovery_batches: list[int],
        detuned_probe_mean: np.ndarray, resonant_probe_mean: np.ndarray,
        output: Path, plot: Path, *, resonant_hz: float, detuned_hz: float,
        mw_amp: float, reset_spacing_batches: int, reset_pulses: int,
        half_duration_batches: int, laser_start_batches: int,
        laser_duration_batches: int, readout_delay_batches: int,
        readout_window_batches: int, blocks_per_point: int) -> None:
    summary = summarize(detuned_probe_mean, resonant_probe_mean)
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(
        output,
        conditioning_pairs=np.asarray(conditioning_pairs),
        requested_recovery_delay_us=np.asarray(requested_recovery_us),
        actual_recovery_delay_us=np.asarray(actual_recovery_us),
        recovery_delay_batches=np.asarray(recovery_batches),
        detuned_probe_mean=detuned_probe_mean,
        resonant_probe_mean=resonant_probe_mean,
        resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp,
        reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
        half_duration_batches=half_duration_batches,
        laser_start_batches=laser_start_batches,
        laser_duration_batches=laser_duration_batches,
        readout_delay_batches=readout_delay_batches,
        readout_window_batches=readout_window_batches,
        blocks_per_point=blocks_per_point,
        samples_per_condition=2 * blocks_per_point,
        condition_order="detuned_resonant_resonant_detuned",
        grid_order="forward_even_averages_reverse_odd_averages",
        recovery_delay_origin="end_of_final_conditioning_laser_trigger_interval",
        **summary,
    )
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc

    difference = summary["resonant_minus_detuned"]
    contrast_percent = 100 * summary["positive_contrast"]
    separation_z = summary["separation_z"]
    fig, axes = plt.subplots(1, 3, layout="constrained", figsize=(15, 5))
    panels = (
        (difference, "resonant - detuned probe", "ADC code", "coolwarm"),
        (contrast_percent, "positive probe contrast", "%", "coolwarm"),
        (separation_z, "paired separation", "mean / SEM", "coolwarm"),
    )
    x_ticks = np.arange(len(actual_recovery_us))
    y_ticks = np.arange(len(conditioning_pairs))
    for ax, (values, title, colorbar_label, cmap) in zip(axes, panels):
        image = ax.imshow(values, origin="lower", aspect="auto", cmap=cmap)
        ax.set(
            xlabel="recovery delay after trigger interval (us)",
            ylabel="conditioning pairs", title=title,
            xticks=x_ticks, yticks=y_ticks,
            xticklabels=[f"{value:g}" for value in actual_recovery_us],
            yticklabels=[str(value) for value in conditioning_pairs],
        )
        ax.tick_params(axis="x", labelrotation=60)
        fig.colorbar(image, ax=ax, label=colorbar_label)
    fig.suptitle(
        f"MW-off probe after {resonant_hz / 1e9:.3f} vs {detuned_hz / 1e9:.3f} GHz conditioning; "
        f"{2 * blocks_per_point} probes/condition/run",
    )
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--detuned-hz", type=float, default=DEFAULT_DETUNED_HZ)
    parser.add_argument("--conditioning-pairs", type=int, nargs="+",
                        default=list(DEFAULT_CONDITIONING_PAIRS))
    parser.add_argument("--recovery-delay-us", type=float, nargs="+",
                        default=list(DEFAULT_RECOVERY_DELAYS_US))
    parser.add_argument("--reset-spacing-batches", type=int,
                        default=DEFAULT_RESET_SPACING_BATCHES)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--half-duration-batches", type=int,
                        default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--laser-start-batches", type=int,
                        default=DEFAULT_LASER_START_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int,
                        default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int,
                        default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--readout-window-batches", type=int,
                        default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--blocks-per-point", type=int, default=DEFAULT_BLOCKS_PER_POINT)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=15.0)
    parser.add_argument(
        "--output", type=Path,
        default=Path(f"data/esr/nv_pulsed_esr_conditioning_recovery_{timestamp}.npz"),
    )
    parser.add_argument(
        "--plot", type=Path,
        default=Path(f"data/esr/nv_pulsed_esr_conditioning_recovery_{timestamp}.png"),
    )
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    result = acquire_grid(
        args.host, port=args.port, resonant_hz=args.resonant_hz,
        detuned_hz=args.detuned_hz, mw_amp=args.mw_amp,
        conditioning_pairs=args.conditioning_pairs,
        recovery_delays_us=args.recovery_delay_us,
        reset_spacing_batches=args.reset_spacing_batches,
        reset_pulses=args.reset_pulses,
        half_duration_batches=args.half_duration_batches,
        laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        blocks_per_point=args.blocks_per_point, averages=args.averages,
        timeout_s=args.timeout_s,
    )
    _, pair_axis, requested_us, actual_us, recovery_batches, detuned, resonant = result
    save_and_plot(
        pair_axis, requested_us, actual_us, recovery_batches, detuned, resonant,
        args.output, args.plot, resonant_hz=args.resonant_hz,
        detuned_hz=args.detuned_hz, mw_amp=args.mw_amp,
        reset_spacing_batches=args.reset_spacing_batches,
        reset_pulses=args.reset_pulses,
        half_duration_batches=args.half_duration_batches,
        laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        blocks_per_point=args.blocks_per_point,
    )
    print(
        f"saved {args.averages} runs of {len(pair_axis)} conditioning counts x "
        f"{len(recovery_batches)} recovery delays; {2 * args.blocks_per_point} "
        f"probes/condition/run to {args.output} and {args.plot}"
    )


if __name__ == "__main__":
    main()
