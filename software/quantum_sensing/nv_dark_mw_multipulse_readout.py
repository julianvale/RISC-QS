"""Pulse-resolved destructive readout after a dark microwave preparation.

Each independently reset shot reserves the same dark-MW interval, then records
one or more laser-triggered integrator windows.  The six shots in a block are
MW-off, resonant, off-resonant, off-resonant, resonant, MW-off.  Thus a later
laser pulse is a further destructive readout of the *same* prepared state; it
is not used as the reference for an earlier pulse.

The host retains every pulse position and evaluates both per-pulse and
cumulative contrast/SNR.  A useful conventional spin readout should be
largest in the first pulse and decay under optical repolarization.  A response
that appears only late in the readout train is instead evidence for a
readout-induced history effect.
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
DEFAULT_OFF_RESONANT_HZ = 2.950e9
DEFAULT_DARK_MW_DURATIONS_US = (2.0, 5.0, 10.0)
DEFAULT_RESET_PULSES = 20
DEFAULT_RESET_SPACING_BATCHES = DEFAULT_HALF_DURATION_BATCHES
DEFAULT_READOUT_PULSES = 16
DEFAULT_READOUT_SPACING_BATCHES = DEFAULT_HALF_DURATION_BATCHES
DEFAULT_POST_MW_DELAY_BATCHES = 50
DEFAULT_BLOCKS_PER_DURATION = 100
DEFAULT_AVERAGES = 10
MAX_READOUT_PULSES = 32
MAX_BLOCKS_PER_DURATION = 1_000


def us_to_batches(value_us: float, *, name: str) -> int:
    if not math.isfinite(value_us) or value_us <= 0:
        raise ValueError(f"{name} must be positive finite values")
    return max(1, round(value_us * DSP_BATCHES_PER_US))


def duration_axis(durations_us: list[float]) -> tuple[list[float], list[int]]:
    if not durations_us:
        raise ValueError("at least one dark-MW duration is required")
    batches = [us_to_batches(value, name="dark-MW durations") for value in durations_us]
    if len(set(batches)) != len(batches):
        raise ValueError("dark-MW durations must be unique after batch quantization")
    if any(value > MAX_PULSE_BATCHES for value in batches):
        raise ValueError("dark-MW durations must fit in 65535 batches")
    return durations_us, batches


@no_type_check
@kernel
def k_dark_mw_multipulse_readout(
        mw: ParamTable, demod: ParamTable, out: Array,
        reset_spacing_batches: int, reset_pulses: int,
        laser_start_batches: int, laser_duration_batches: int,
        readout_spacing_batches: int, readout_pulses: int,
        post_mw_delay_batches: int, readout_delay_batches: int,
        readout_window_batches: int, resonant_freq_code: int,
        off_resonant_freq_code: int, mw_amp_code: int,
        dark_mw_duration_batches: int, blocks_per_duration: int):
    """Accumulate pulse-resolved no-MW, resonant, and off-resonant readouts."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_dur(mw, mw["mw"], dark_mw_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821

    # Three condition banks: no MW, resonant MW, and off-resonant MW.
    index = 0
    while index < 3 * MAX_READOUT_PULSES:
        out[index] = 0
        index += 1

    block = 0
    while block < blocks_per_duration:
        # 0/5: MW off; 1/4: resonant; 2/3: off-resonant.  This balances
        # linear drift while retaining two independent preparations/condition.
        shot = 0
        while shot < 6:
            reset_laser = now() + SCHEDULE_LEAD  # noqa: F821
            reset_index = 0
            while reset_index < reset_pulses:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
                wait_until(reset_laser + laser_duration_batches)  # noqa: F821
                reset_laser = reset_laser + reset_spacing_batches
                reset_index += 1

            mw_start = reset_laser
            condition = 0
            if shot == 1 or shot == 4:
                condition = 1
                set_freq(mw, resonant_freq_code)  # noqa: F821
                play(mw, mw["mw"], mw_start)  # noqa: F821
            elif shot == 2 or shot == 3:
                condition = 2
                set_freq(mw, off_resonant_freq_code)  # noqa: F821
                play(mw, mw["mw"], mw_start)  # noqa: F821

            # MW-off shots retain the same dark reservation.  Every readout
            # is scheduled and drained before the next, keeping laser and
            # demod queues below their depth-four limit.
            readout_laser = mw_start + dark_mw_duration_batches + post_mw_delay_batches
            readout_index = 0
            while readout_index < readout_pulses:
                readout_window = readout_laser + readout_delay_batches
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_laser)  # noqa: F821
                play(demod, demod["window"], readout_window)  # noqa: F821
                wait_until(readout_window + READOUT_LEAD)  # noqa: F821
                read_res()  # noqa: F821
                out[condition * MAX_READOUT_PULSES + readout_index] = (
                    out[condition * MAX_READOUT_PULSES + readout_index] + read_real()  # noqa: F821
                )
                read_imag()  # noqa: F821
                readout_index += 1
                readout_laser = readout_laser + readout_spacing_batches
            shot += 1
        block += 1


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(
        k_dark_mw_multipulse_readout, m,
        tables={"mw": mw, "demod": demod}, out=Array(3 * MAX_READOUT_PULSES),
    )


def _validate(
        m: SocMap, *, resonant_hz: float, off_resonant_hz: float, mw_amp: float,
        reset_spacing_batches: int, reset_pulses: int,
        laser_start_batches: int, laser_duration_batches: int,
        readout_spacing_batches: int, readout_pulses: int,
        post_mw_delay_batches: int, readout_delay_batches: int,
        readout_window_batches: int, dark_mw_duration_batches: list[int],
        blocks_per_duration: int, averages: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if (not all(math.isfinite(value) and value > 0 for value in (resonant_hz, off_resonant_hz))
            or resonant_hz == off_resonant_hz):
        raise ValueError("resonant and off-resonant frequencies must be distinct positive finite values")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= reset_pulses <= 64 or reset_spacing_batches < laser_duration_batches:
        raise ValueError("reset pulses/spacing are outside safe bounds")
    if not 0 <= laser_start_batches:
        raise ValueError("laser-start-batches must be non-negative")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser duration must be in 1..65535 batches")
    if not 1 <= readout_pulses <= MAX_READOUT_PULSES:
        raise ValueError(f"readout-pulses must be in 1..{MAX_READOUT_PULSES}")
    if post_mw_delay_batches < 0 or readout_delay_batches < 0:
        raise ValueError("post-MW and readout delays must be non-negative")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window must be within the decoder limit")
    minimum_spacing = readout_delay_batches + READOUT_LEAD
    if readout_spacing_batches < minimum_spacing:
        raise ValueError("readout spacing must allow the preceding integration to drain")
    if (not dark_mw_duration_batches or min(dark_mw_duration_batches) < 1
            or max(dark_mw_duration_batches) > MAX_PULSE_BATCHES):
        raise ValueError("dark-MW durations must be in 1..65535 batches")
    if not 1 <= blocks_per_duration <= MAX_BLOCKS_PER_DURATION or averages < 1:
        raise ValueError("blocks-per-duration and averages must be positive and within bounds")


def _mean_sem(values: np.ndarray) -> tuple[np.ndarray, np.ndarray]:
    mean = values.mean(axis=0)
    if len(values) == 1:
        return mean, np.full_like(mean, np.nan, dtype=float)
    return mean, values.std(axis=0, ddof=1) / math.sqrt(len(values))


def summarize(readout_by_run: np.ndarray) -> dict[str, np.ndarray]:
    """Summarize pulse-resolved and cumulative paired readout statistics.

    ``readout_by_run`` has axes ``(run, duration, condition, readout_pulse)``
    with conditions no-MW, resonant, off-resonant.
    """
    values = np.asarray(readout_by_run, dtype=float)
    if values.ndim != 4 or values.shape[2] != 3:
        raise ValueError("readout data must have shape (run, duration, 3, readout_pulse)")
    no_mw, resonant, off_resonant = values[:, :, 0], values[:, :, 1], values[:, :, 2]
    resonant_minus_no_mw = resonant - no_mw
    off_resonant_minus_no_mw = off_resonant - no_mw
    cumulative_difference_by_run = np.cumsum(resonant_minus_no_mw, axis=2)
    cumulative_off_resonant_difference_by_run = np.cumsum(off_resonant_minus_no_mw, axis=2)
    cumulative_no_mw = np.cumsum(no_mw, axis=2)
    cumulative_resonant = np.cumsum(resonant, axis=2)
    no_mw_mean, no_mw_sem = _mean_sem(no_mw)
    resonant_mean, resonant_sem = _mean_sem(resonant)
    off_resonant_mean, off_resonant_sem = _mean_sem(off_resonant)
    difference_mean, difference_sem = _mean_sem(resonant_minus_no_mw)
    off_difference_mean, off_difference_sem = _mean_sem(off_resonant_minus_no_mw)
    cumulative_difference_mean, cumulative_difference_sem = _mean_sem(cumulative_difference_by_run)
    cumulative_off_difference_mean, cumulative_off_difference_sem = _mean_sem(cumulative_off_resonant_difference_by_run)
    cumulative_no_mw_mean = cumulative_no_mw.mean(axis=0)
    cumulative_resonant_mean = cumulative_resonant.mean(axis=0)
    positive_cumulative_contrast = np.divide(
        cumulative_no_mw_mean - cumulative_resonant_mean, cumulative_no_mw_mean,
        out=np.full_like(cumulative_no_mw_mean, np.nan), where=cumulative_no_mw_mean != 0,
    )
    positive_cumulative_contrast_sem = np.divide(
        cumulative_difference_sem, np.abs(cumulative_no_mw_mean),
        out=np.full_like(cumulative_no_mw_mean, np.nan), where=cumulative_no_mw_mean != 0,
    )
    cumulative_snr = np.divide(
        cumulative_difference_mean, cumulative_difference_sem,
        out=np.full_like(cumulative_difference_mean, np.nan), where=cumulative_difference_sem != 0,
    )
    return {
        "no_mw_mean": no_mw_mean, "no_mw_sem": no_mw_sem,
        "resonant_mean": resonant_mean, "resonant_sem": resonant_sem,
        "off_resonant_mean": off_resonant_mean, "off_resonant_sem": off_resonant_sem,
        "resonant_minus_no_mw_by_run": resonant_minus_no_mw,
        "off_resonant_minus_no_mw_by_run": off_resonant_minus_no_mw,
        "resonant_minus_no_mw": difference_mean,
        "resonant_minus_no_mw_sem": difference_sem,
        "off_resonant_minus_no_mw": off_difference_mean,
        "off_resonant_minus_no_mw_sem": off_difference_sem,
        "cumulative_difference_by_run": cumulative_difference_by_run,
        "cumulative_off_resonant_difference_by_run": cumulative_off_resonant_difference_by_run,
        "cumulative_resonant_minus_no_mw": cumulative_difference_mean,
        "cumulative_resonant_minus_no_mw_sem": cumulative_difference_sem,
        "cumulative_off_resonant_minus_no_mw": cumulative_off_difference_mean,
        "cumulative_off_resonant_minus_no_mw_sem": cumulative_off_difference_sem,
        "positive_cumulative_contrast": positive_cumulative_contrast,
        "positive_cumulative_contrast_sem": positive_cumulative_contrast_sem,
        "cumulative_snr": cumulative_snr,
    }


def acquire(host: str, *, port: int = 9091, resonant_hz: float = DEFAULT_RESONANT_HZ,
            off_resonant_hz: float = DEFAULT_OFF_RESONANT_HZ, mw_amp: float | None = None,
            dark_mw_durations_us: list[float] | tuple[float, ...] = DEFAULT_DARK_MW_DURATIONS_US,
            reset_spacing_batches: int = DEFAULT_RESET_SPACING_BATCHES,
            reset_pulses: int = DEFAULT_RESET_PULSES,
            laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
            laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
            readout_spacing_batches: int = DEFAULT_READOUT_SPACING_BATCHES,
            readout_pulses: int = DEFAULT_READOUT_PULSES,
            post_mw_delay_batches: int = DEFAULT_POST_MW_DELAY_BATCHES,
            readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
            readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
            blocks_per_duration: int = DEFAULT_BLOCKS_PER_DURATION,
            averages: int = DEFAULT_AVERAGES, timeout_s: float = 15.0):
    """Acquire run-level pulse-resolved condition means."""
    if not host.strip() or mw_amp is None or timeout_s <= 0:
        raise ValueError("host, mw-amp, and positive timeout-s are required")
    requested_us, duration_batches = duration_axis(list(dark_mw_durations_us))
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(
            m, resonant_hz=resonant_hz, off_resonant_hz=off_resonant_hz, mw_amp=mw_amp,
            reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
            laser_start_batches=laser_start_batches, laser_duration_batches=laser_duration_batches,
            readout_spacing_batches=readout_spacing_batches, readout_pulses=readout_pulses,
            post_mw_delay_batches=post_mw_delay_batches,
            readout_delay_batches=readout_delay_batches, readout_window_batches=readout_window_batches,
            dark_mw_duration_batches=duration_batches, blocks_per_duration=blocks_per_duration,
            averages=averages,
        )
        program = build_program(m)
        shared = {
            "reset_spacing_batches": reset_spacing_batches, "reset_pulses": reset_pulses,
            "laser_start_batches": laser_start_batches,
            "laser_duration_batches": laser_duration_batches,
            "readout_spacing_batches": readout_spacing_batches, "readout_pulses": readout_pulses,
            "post_mw_delay_batches": post_mw_delay_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "off_resonant_freq_code": units.freq_to_code(off_resonant_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp),
            "blocks_per_duration": blocks_per_duration,
        }
        values = np.empty((averages, len(duration_batches), 3, readout_pulses), dtype=float)
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            order = range(len(duration_batches)) if average_index % 2 == 0 else range(len(duration_batches) - 1, -1, -1)
            for duration_index in order:
                raw = run.rerun(
                    drv, m, {0: program},
                    params={0: {**shared, "dark_mw_duration_batches": duration_batches[duration_index]}},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                )[0]["out"]
                decoded = np.asarray([_s32(int(value)) for value in raw], dtype=float)
                values[average_index, duration_index] = decoded.reshape(3, MAX_READOUT_PULSES)[:, :readout_pulses] / (2 * blocks_per_duration)
        return m, requested_us, duration_batches, values
    finally:
        drv.close()


def save_and_plot(m: SocMap, requested_durations_us: list[float], duration_batches: list[int],
                  readout_by_run: np.ndarray, output: Path, plot: Path, *,
                  resonant_hz: float, off_resonant_hz: float, mw_amp: float,
                  reset_spacing_batches: int, reset_pulses: int,
                  laser_start_batches: int, laser_duration_batches: int,
                  readout_spacing_batches: int, readout_pulses: int,
                  post_mw_delay_batches: int, readout_delay_batches: int,
                  readout_window_batches: int, blocks_per_duration: int) -> None:
    summary = summarize(readout_by_run)
    actual_durations_us = np.asarray(duration_batches) / DSP_BATCHES_PER_US
    readout_index = np.arange(1, readout_pulses + 1)
    readout_time_us = (readout_index - 1) * readout_spacing_batches / DSP_BATCHES_PER_US
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(
        output, requested_dark_mw_duration_us=np.asarray(requested_durations_us),
        actual_dark_mw_duration_us=actual_durations_us,
        dark_mw_duration_batches=np.asarray(duration_batches),
        readout_by_run=readout_by_run, readout_pulse_index=readout_index,
        readout_time_us=readout_time_us, resonant_hz=resonant_hz,
        off_resonant_hz=off_resonant_hz, mw_amp=mw_amp,
        reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
        laser_start_batches=laser_start_batches, laser_duration_batches=laser_duration_batches,
        readout_spacing_batches=readout_spacing_batches, readout_pulses=readout_pulses,
        post_mw_delay_batches=post_mw_delay_batches,
        readout_delay_batches=readout_delay_batches,
        readout_window_batches=readout_window_batches,
        blocks_per_duration=blocks_per_duration,
        samples_per_condition=2 * blocks_per_duration,
        condition_order="no_mw_resonant_off_resonant_off_resonant_resonant_no_mw",
        duration_order="forward_even_averages_reverse_odd_averages",
        **summary,
    )
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, axes = plt.subplots(len(duration_batches), 3, layout="constrained",
                             figsize=(14, 3.6 * len(duration_batches)), squeeze=False)
    for row, duration_us in enumerate(actual_durations_us):
        ax_pulse, ax_cumulative, ax_snr = axes[row]
        for mean, sem, label in (
            (summary["resonant_minus_no_mw"][row], summary["resonant_minus_no_mw_sem"][row],
             f"resonant {resonant_hz / 1e9:.3f} GHz - MW off"),
            (summary["off_resonant_minus_no_mw"][row], summary["off_resonant_minus_no_mw_sem"][row],
             f"off-res {off_resonant_hz / 1e9:.3f} GHz - MW off"),
        ):
            ax_pulse.errorbar(readout_index, mean, yerr=sem, fmt="o-", label=label)
        ax_pulse.axhline(0, color="black", linewidth=0.8)
        ax_pulse.set(title=f"{duration_us:.3g} us dark MW: per-pulse difference",
                     xlabel="readout pulse number", ylabel="ADC code")
        ax_pulse.legend(fontsize="small")
        for mean, sem, label in (
            (summary["cumulative_resonant_minus_no_mw"][row],
             summary["cumulative_resonant_minus_no_mw_sem"][row], "resonant - MW off"),
            (summary["cumulative_off_resonant_minus_no_mw"][row],
             summary["cumulative_off_resonant_minus_no_mw_sem"][row], "off-resonant - MW off"),
        ):
            ax_cumulative.errorbar(readout_index, mean, yerr=sem, fmt="o-", label=label)
        ax_cumulative.axhline(0, color="black", linewidth=0.8)
        ax_cumulative.set(title="cumulative paired difference", xlabel="pulses summed", ylabel="ADC-code sum")
        ax_cumulative.legend(fontsize="small")
        ax_snr.plot(readout_index, summary["cumulative_snr"][row], "o-", label="resonant cumulative SNR")
        ax_snr.axhline(0, color="black", linewidth=0.8)
        ax_snr.set(title="cumulative contrast and SNR", xlabel="pulses summed", ylabel="mean / SEM")
        right = ax_snr.twinx()
        right.plot(readout_index, 100 * summary["positive_cumulative_contrast"][row], "s--",
                   color="tab:orange", label="positive contrast")
        right.set_ylabel("positive contrast (%)", color="tab:orange")
        for axis in (ax_pulse, ax_cumulative, ax_snr):
            axis.grid(True, alpha=0.3)
    fig.suptitle(f"Pulse-resolved destructive readout: {2 * blocks_per_duration} samples/condition/run")
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--off-resonant-hz", type=float, default=DEFAULT_OFF_RESONANT_HZ)
    parser.add_argument("--dark-mw-duration-us", type=float, nargs="+",
                        default=list(DEFAULT_DARK_MW_DURATIONS_US))
    parser.add_argument("--reset-spacing-batches", type=int, default=DEFAULT_RESET_SPACING_BATCHES)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--laser-start-batches", type=int, default=DEFAULT_LASER_START_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--readout-spacing-batches", type=int, default=DEFAULT_READOUT_SPACING_BATCHES)
    parser.add_argument("--readout-pulses", type=int, default=DEFAULT_READOUT_PULSES)
    parser.add_argument("--post-mw-delay-batches", type=int, default=DEFAULT_POST_MW_DELAY_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--readout-window-batches", type=int, default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--blocks-per-duration", type=int, default=DEFAULT_BLOCKS_PER_DURATION)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=15.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_dark_mw_multipulse_readout_{timestamp}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_dark_mw_multipulse_readout_{timestamp}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    result = acquire(
        args.host, port=args.port, resonant_hz=args.resonant_hz,
        off_resonant_hz=args.off_resonant_hz, mw_amp=args.mw_amp,
        dark_mw_durations_us=args.dark_mw_duration_us,
        reset_spacing_batches=args.reset_spacing_batches, reset_pulses=args.reset_pulses,
        laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches,
        readout_spacing_batches=args.readout_spacing_batches,
        readout_pulses=args.readout_pulses,
        post_mw_delay_batches=args.post_mw_delay_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        blocks_per_duration=args.blocks_per_duration, averages=args.averages,
        timeout_s=args.timeout_s,
    )
    m, requested, batches, values = result
    save_and_plot(
        m, requested, batches, values, args.output, args.plot,
        resonant_hz=args.resonant_hz, off_resonant_hz=args.off_resonant_hz,
        mw_amp=args.mw_amp, reset_spacing_batches=args.reset_spacing_batches,
        reset_pulses=args.reset_pulses, laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches,
        readout_spacing_batches=args.readout_spacing_batches,
        readout_pulses=args.readout_pulses,
        post_mw_delay_batches=args.post_mw_delay_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        blocks_per_duration=args.blocks_per_duration,
    )
    print(f"saved {args.averages} runs of {len(batches)} dark-MW durations x "
          f"{args.readout_pulses} readout pulses; {2 * args.blocks_per_duration} samples/condition/run "
          f"to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
