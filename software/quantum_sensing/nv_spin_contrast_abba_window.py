"""Integration-window scan using independently reset dark-MW ABBA shots."""

from __future__ import annotations

import argparse
import math
import os
import time
from datetime import datetime
from pathlib import Path

import numpy as np

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.map import READOUT_MAX_WIN_LOG2, SocMap, SocParams
from riscq.pulses import units
from software.quantum_sensing.nv_pulsed_esr_halfmw import _s32
from software.quantum_sensing.nv_pulsed_rabi_abba import (
    DEFAULT_AVERAGES,
    DEFAULT_BLOCKS_PER_DURATION,
    DEFAULT_DETUNED_HZ,
    DEFAULT_POST_MW_DELAY_BATCHES,
    DEFAULT_RESET_PULSES,
    DEFAULT_RESONANT_HZ,
    DEFAULT_HALF_DURATION_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES,
    MAX_BLOCKS_PER_DURATION,
    _validate as _validate_abba,
    build_program,
    duration_ns_to_batches,
)


DEFAULT_MW_DURATION_NS = 2_000.0
DEFAULT_DELAY_START_BATCHES = 50
DEFAULT_DELAY_STOP_BATCHES = 100
DEFAULT_DELAY_STEP_BATCHES = 5
DEFAULT_WINDOW_START_BATCHES = 8
DEFAULT_WINDOW_STOP_BATCHES = 32
DEFAULT_WINDOW_STEP_BATCHES = 4


def inclusive_grid(start: int, stop: int, step: int, name: str) -> list[int]:
    if step <= 0:
        raise ValueError(f"{name} step must be positive")
    if stop < start:
        raise ValueError(f"{name} stop must be at least its start")
    values = list(range(start, stop + 1, step))
    if values[-1] != stop:
        values.append(stop)
    return values


def summarize_windows(detuned_mean: np.ndarray, resonant_mean: np.ndarray):
    detuned = np.asarray(detuned_mean, dtype=float)
    resonant = np.asarray(resonant_mean, dtype=float)
    if detuned.shape != resonant.shape or detuned.ndim != 3:
        raise ValueError("detuned and resonant means must have shape (averages, delay, duration)")
    difference_by_run = resonant - detuned
    difference = difference_by_run.mean(axis=0)
    if len(difference_by_run) == 1:
        difference_std = np.full(difference.shape, np.nan)
        difference_sem = np.full(difference.shape, np.nan)
    else:
        difference_std = difference_by_run.std(axis=0, ddof=1)
        difference_sem = difference_std / np.sqrt(len(difference_by_run))
    contrast_snr = np.divide(
        np.abs(difference), difference_std,
        out=np.full_like(difference, np.nan), where=difference_std != 0,
    )
    separation_z = np.divide(
        np.abs(difference), difference_sem,
        out=np.full_like(difference, np.nan), where=difference_sem != 0,
    )
    return difference, difference_std, difference_sem, contrast_snr, separation_z, difference_by_run


def acquire_scan(host: str, *, port: int = 9091,
                 resonant_hz: float = DEFAULT_RESONANT_HZ,
                 detuned_hz: float = DEFAULT_DETUNED_HZ,
                 mw_amp: float | None = None,
                 mw_duration_ns: float = DEFAULT_MW_DURATION_NS,
                 delay_start_batches: int = DEFAULT_DELAY_START_BATCHES,
                 delay_stop_batches: int = DEFAULT_DELAY_STOP_BATCHES,
                 delay_step_batches: int = DEFAULT_DELAY_STEP_BATCHES,
                 window_start_batches: int = DEFAULT_WINDOW_START_BATCHES,
                 window_stop_batches: int = DEFAULT_WINDOW_STOP_BATCHES,
                 window_step_batches: int = DEFAULT_WINDOW_STEP_BATCHES,
                 reset_spacing_batches: int = DEFAULT_HALF_DURATION_BATCHES,
                 reset_pulses: int = DEFAULT_RESET_PULSES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 post_mw_delay_batches: int = DEFAULT_POST_MW_DELAY_BATCHES,
                 warmup_blocks: int = 0,
                 blocks_per_window: int = DEFAULT_BLOCKS_PER_DURATION,
                 averages: int = DEFAULT_AVERAGES,
                 timeout_s: float = 10.0):
    if not host.strip():
        raise ValueError("host must be non-empty")
    if mw_amp is None:
        raise ValueError("mw-amp is required")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    delays = inclusive_grid(delay_start_batches, delay_stop_batches, delay_step_batches, "delay")
    windows = inclusive_grid(window_start_batches, window_stop_batches, window_step_batches, "window")
    if min(delays) < 0:
        raise ValueError("readout delays must be non-negative")
    if min(windows) < 1 or max(windows) > 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("window durations must be within the decoder limit")
    mw_duration_batches = duration_ns_to_batches(mw_duration_ns)

    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate_abba(
            m, resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp,
            reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
            laser_duration_batches=laser_duration_batches,
            post_mw_delay_batches=post_mw_delay_batches,
            readout_delay_batches=max(delays), readout_window_batches=max(windows),
            duration_batches=[mw_duration_batches], warmup_blocks=warmup_blocks,
            blocks_per_duration=blocks_per_window, averages=averages,
        )
        if not 1 <= blocks_per_window <= MAX_BLOCKS_PER_DURATION:
            raise ValueError(f"blocks-per-window must be in 1..{MAX_BLOCKS_PER_DURATION}")
        program = build_program(m)
        shared = {
            "reset_spacing_batches": reset_spacing_batches,
            "reset_pulses": reset_pulses,
            "laser_duration_batches": laser_duration_batches,
            "post_mw_delay_batches": post_mw_delay_batches,
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "detuned_freq_code": units.freq_to_code(detuned_hz, m.params),
            "mw_duration_batches": mw_duration_batches,
            "mw_amp_code": units.amp_to_code(mw_amp),
            "warmup_blocks": warmup_blocks,
            "blocks_per_duration": blocks_per_window,
        }
        shape = (averages, len(delays), len(windows))
        detuned_mean = np.empty(shape, dtype=float)
        resonant_mean = np.empty(shape, dtype=float)
        samples_per_condition = 2 * blocks_per_window
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            for delay_index, delay_batches in enumerate(delays):
                for window_index, window_batches in enumerate(windows):
                    result = run.rerun(
                        drv, m, {0: program},
                        params={0: {
                            **shared,
                            "readout_delay_batches": delay_batches,
                            "readout_window_batches": window_batches,
                        }},
                        results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                    )[0]["out"]
                    detuned_mean[average_index, delay_index, window_index] = (
                        _s32(int(result[0])) / samples_per_condition
                    )
                    resonant_mean[average_index, delay_index, window_index] = (
                        _s32(int(result[1])) / samples_per_condition
                    )
        return m, delays, windows, mw_duration_batches, detuned_mean, resonant_mean
    finally:
        drv.close()


def save_and_plot(delays, windows, mw_duration_batches, detuned_mean, resonant_mean,
                  output: Path, plot: Path, *, resonant_hz: float, detuned_hz: float,
                  mw_amp: float, reset_spacing_batches: int, reset_pulses: int,
                  laser_duration_batches: int, post_mw_delay_batches: int,
                  warmup_blocks: int, blocks_per_window: int):
    difference, difference_std, difference_sem, contrast_snr, separation_z, difference_by_run = (
        summarize_windows(detuned_mean, resonant_mean)
    )
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(
        output, readout_delay_batches=np.asarray(delays),
        readout_window_batches=np.asarray(windows), mw_duration_batches=mw_duration_batches,
        detuned_mean=detuned_mean, resonant_mean=resonant_mean,
        resonant_minus_detuned=difference, resonant_minus_detuned_std=difference_std,
        resonant_minus_detuned_sem=difference_sem, contrast_snr=contrast_snr,
        separation_z=separation_z, difference_by_run=difference_by_run,
        resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp,
        reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
        laser_duration_batches=laser_duration_batches,
        post_mw_delay_batches=post_mw_delay_batches, warmup_blocks=warmup_blocks,
        blocks_per_window=blocks_per_window,
    )
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc

    extent = [windows[0] - 0.5, windows[-1] + 0.5, delays[0] - 0.5, delays[-1] + 0.5]
    fig, axes = plt.subplots(1, 3, layout="constrained", figsize=(14, 5))
    panels = (
        (difference, "resonant - detuned", "ADC code", "coolwarm"),
        (contrast_snr, "contrast SNR", "abs(mean) / run std", "viridis"),
        (separation_z, "separation", "abs(mean) / SEM", "magma"),
    )
    for ax, (values, title, colorbar_label, cmap) in zip(axes, panels):
        image = ax.imshow(values, origin="lower", aspect="auto", extent=extent, cmap=cmap)
        ax.set(xlabel="window duration (batches)", ylabel="delay after laser (batches)", title=title)
        fig.colorbar(image, ax=ax, label=colorbar_label)
    fig.suptitle(
        f"Dark-MW ABBA window scan: {resonant_hz / 1e9:.3f} vs {detuned_hz / 1e9:.3f} GHz; "
        f"{2 * blocks_per_window} shots/condition, {len(detuned_mean)} scans",
    )
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--detuned-hz", type=float, default=DEFAULT_DETUNED_HZ)
    parser.add_argument("--mw-duration-ns", type=float, default=DEFAULT_MW_DURATION_NS)
    parser.add_argument("--delay-start-batches", type=int, default=DEFAULT_DELAY_START_BATCHES)
    parser.add_argument("--delay-stop-batches", type=int, default=DEFAULT_DELAY_STOP_BATCHES)
    parser.add_argument("--delay-step-batches", type=int, default=DEFAULT_DELAY_STEP_BATCHES)
    parser.add_argument("--window-start-batches", type=int, default=DEFAULT_WINDOW_START_BATCHES)
    parser.add_argument("--window-stop-batches", type=int, default=DEFAULT_WINDOW_STOP_BATCHES)
    parser.add_argument("--window-step-batches", type=int, default=DEFAULT_WINDOW_STEP_BATCHES)
    parser.add_argument("--reset-spacing-batches", type=int, default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--post-mw-delay-batches", type=int, default=DEFAULT_POST_MW_DELAY_BATCHES)
    parser.add_argument("--warmup-blocks", type=int, default=0)
    parser.add_argument("--blocks-per-window", type=int, default=DEFAULT_BLOCKS_PER_DURATION)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_spin_contrast_abba_window_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_spin_contrast_abba_window_{formatted_time}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    _, delays, windows, mw_duration_batches, detuned_mean, resonant_mean = acquire_scan(
        args.host, port=args.port, resonant_hz=args.resonant_hz, detuned_hz=args.detuned_hz,
        mw_amp=args.mw_amp, mw_duration_ns=args.mw_duration_ns,
        delay_start_batches=args.delay_start_batches, delay_stop_batches=args.delay_stop_batches,
        delay_step_batches=args.delay_step_batches, window_start_batches=args.window_start_batches,
        window_stop_batches=args.window_stop_batches, window_step_batches=args.window_step_batches,
        reset_spacing_batches=args.reset_spacing_batches, reset_pulses=args.reset_pulses,
        laser_duration_batches=args.laser_duration_batches,
        post_mw_delay_batches=args.post_mw_delay_batches,
        warmup_blocks=args.warmup_blocks, blocks_per_window=args.blocks_per_window,
        averages=args.averages, timeout_s=args.timeout_s,
    )
    save_and_plot(
        delays, windows, mw_duration_batches, detuned_mean, resonant_mean,
        args.output, args.plot, resonant_hz=args.resonant_hz, detuned_hz=args.detuned_hz,
        mw_amp=args.mw_amp, reset_spacing_batches=args.reset_spacing_batches,
        reset_pulses=args.reset_pulses, laser_duration_batches=args.laser_duration_batches,
        post_mw_delay_batches=args.post_mw_delay_batches,
        warmup_blocks=args.warmup_blocks, blocks_per_window=args.blocks_per_window,
    )
    print(f"saved {len(delays)} x {len(windows)} windows; {args.averages} scans and "
          f"{2 * args.blocks_per_window} shots/condition to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
