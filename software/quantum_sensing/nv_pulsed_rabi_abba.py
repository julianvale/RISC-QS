"""Shot-adjacent dark-MW ABBA microwave-duration sweep.

Every acquired shot receives the same optical reset train.  The microwave is
then played entirely in the dark and finishes before the readout laser and
RFSoC integration gate.  Each resident-kernel block uses the order
reference/resonant/resonant/reference (ABBA), suppressing linear optical drift
and order bias while keeping both conditions only microseconds apart.  The
reference can be either a detuned MW pulse or no MW pulse at all.
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
from software.quantum_sensing.nv_common import inclusive_linear_grid, s32
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
    _tables,
)


DSP_BATCHES_PER_NS = 0.49152
DEFAULT_RESONANT_HZ = 2.875e9
DEFAULT_DETUNED_HZ = 2.80e9
DEFAULT_RESET_PULSES = 20
DEFAULT_POST_MW_DELAY_BATCHES = 50       # 101.7 ns after MW ends
DEFAULT_DURATION_START_NS = 20.0
DEFAULT_DURATION_STOP_NS = 2_000.0
DEFAULT_DURATION_STEPS = 100
DEFAULT_BLOCKS_PER_DURATION = 500        # 1000 samples per condition
DEFAULT_AVERAGES = 10
MAX_BLOCKS_PER_DURATION = 1_000


def duration_grid_ns(start_ns: float, stop_ns: float, steps: int) -> list[float]:
    return inclusive_linear_grid(start_ns, stop_ns, steps, name="duration")


def duration_ns_to_batches(duration_ns: float) -> int:
    if not math.isfinite(duration_ns) or duration_ns <= 0:
        raise ValueError("MW duration must be a positive finite value")
    return max(1, round(duration_ns * DSP_BATCHES_PER_NS))


@no_type_check
@kernel
def k_pulsed_rabi_abba(
        mw: ParamTable, demod: ParamTable, out: Array,
        reset_spacing_batches: int, reset_pulses: int,
        laser_duration_batches: int, laser_start_batches: int,
        post_mw_delay_batches: int,
        readout_delay_batches: int, readout_window_batches: int,
        resonant_freq_code: int, detuned_freq_code: int,
        mw_duration_batches: int, mw_amp_code: int,
        reference_mw_enabled: int, mw_overlaps_readout: int,
        warmup_blocks: int, blocks_per_duration: int):
    """Return accumulated reference and resonant values for one MW duration."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_dur(mw, mw["mw"], mw_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821

    total_blocks = warmup_blocks + blocks_per_duration
    block = 0
    detuned_sum = 0
    resonant_sum = 0
    while block < total_blocks:
        shot = 0
        while shot < 4:
            # Reset every A and B shot independently.  Waiting after each
            # trigger keeps only one entry in the laser TimedQueue.
            reset_laser = now() + SCHEDULE_LEAD  # noqa: F821
            reset_index = 0
            while reset_index < reset_pulses:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
                wait_until(reset_laser + laser_duration_batches)  # noqa: F821
                reset_laser = reset_laser + reset_spacing_batches
                reset_index += 1

            # ``reset_laser`` is one reset spacing after the final trigger.
            # Play B at resonance for shots 1 and 2.  A is either detuned or
            # MW-off for shots 0 and 3, but always reserves the same interval.
            mw_start = reset_laser
            if shot == 1 or shot == 2:
                set_freq(mw, resonant_freq_code)  # noqa: F821
                play(mw, mw["mw"], mw_start)  # noqa: F821
            else:
                if reference_mw_enabled:
                    set_freq(mw, detuned_freq_code)  # noqa: F821
                    play(mw, mw["mw"], mw_start)  # noqa: F821

            if mw_overlaps_readout:
                readout_laser = mw_start + laser_start_batches
            else:
                readout_laser = mw_start + mw_duration_batches + post_mw_delay_batches
            readout_window = readout_laser + readout_delay_batches
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_laser)  # noqa: F821
            play(demod, demod["window"], readout_window)  # noqa: F821
            wait_until(readout_window + READOUT_LEAD)  # noqa: F821
            read_res()  # noqa: F821
            if block >= warmup_blocks:
                if shot == 1 or shot == 2:
                    resonant_sum = resonant_sum + read_real()  # noqa: F821
                else:
                    detuned_sum = detuned_sum + read_real()  # noqa: F821
            else:
                read_real()  # noqa: F821
            read_imag()  # noqa: F821
            shot += 1
        block += 1

    out[0] = detuned_sum
    out[1] = resonant_sum


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(k_pulsed_rabi_abba, m, tables={"mw": mw, "demod": demod}, out=Array(2))


def _validate(m: SocMap, *, resonant_hz: float, detuned_hz: float, mw_amp: float,
              reset_spacing_batches: int, reset_pulses: int, laser_duration_batches: int,
              laser_start_batches: int,
              post_mw_delay_batches: int, readout_delay_batches: int,
              readout_window_batches: int, duration_batches: list[int],
              warmup_blocks: int, blocks_per_duration: int, averages: int,
              reference_mw_off: bool = False,
              mw_overlaps_readout: bool = False) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not math.isfinite(resonant_hz) or resonant_hz <= 0:
        raise ValueError("resonant frequency must be positive and finite")
    if not reference_mw_off and (not math.isfinite(detuned_hz) or detuned_hz <= 0):
        raise ValueError("detuned frequency must be positive and finite")
    if not reference_mw_off and resonant_hz == detuned_hz:
        raise ValueError("resonant and detuned frequencies must differ")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= reset_pulses <= 64:
        raise ValueError("reset-pulses must be in 1..64")
    if reset_spacing_batches < laser_duration_batches:
        raise ValueError("reset spacing must be at least the laser trigger width")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser duration must be in 1..65535")
    if laser_start_batches < 0 or post_mw_delay_batches < 0 or readout_delay_batches < 0:
        raise ValueError("laser-start, post-MW, and readout delays must be non-negative")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window must be within the decoder limit")
    if not duration_batches or min(duration_batches) < 1 or max(duration_batches) > MAX_PULSE_BATCHES:
        raise ValueError("MW durations must fit in 1..65535 batches")
    if len(set(duration_batches)) != len(duration_batches):
        raise ValueError("duration grid contains duplicate RFSoC batch values")
    if mw_overlaps_readout:
        required_duration = laser_start_batches + readout_delay_batches + readout_window_batches
        if min(duration_batches) < required_duration:
            raise ValueError("overlap-mode MW duration must cover the complete integration window")
    if not 0 <= warmup_blocks <= MAX_BLOCKS_PER_DURATION:
        raise ValueError(f"warmup-blocks must be in 0..{MAX_BLOCKS_PER_DURATION}")
    if not 1 <= blocks_per_duration <= MAX_BLOCKS_PER_DURATION:
        raise ValueError(f"blocks-per-duration must be in 1..{MAX_BLOCKS_PER_DURATION}")
    if averages < 1:
        raise ValueError("averages must be positive")


def summarize(detuned_mean: np.ndarray, resonant_mean: np.ndarray):
    detuned = np.asarray(detuned_mean, dtype=float)
    resonant = np.asarray(resonant_mean, dtype=float)
    if detuned.shape != resonant.shape or detuned.ndim != 2:
        raise ValueError("detuned and resonant means must have shape (averages, duration)")
    difference_by_run = resonant - detuned
    ratio_by_run = np.divide(resonant, detuned, out=np.full_like(resonant, np.nan), where=detuned != 0)
    difference = difference_by_run.mean(axis=0)
    ratio = ratio_by_run.mean(axis=0)
    if len(detuned) == 1:
        difference_sem = np.full(difference.shape, np.nan)
        ratio_sem = np.full(ratio.shape, np.nan)
    else:
        difference_sem = difference_by_run.std(axis=0, ddof=1) / np.sqrt(len(detuned))
        ratio_sem = ratio_by_run.std(axis=0, ddof=1) / np.sqrt(len(detuned))
    return difference, difference_sem, ratio, ratio_sem, difference_by_run, ratio_by_run


def acquire_sweep(host: str, *, port: int = 9091,
                  resonant_hz: float = DEFAULT_RESONANT_HZ,
                  detuned_hz: float = DEFAULT_DETUNED_HZ,
                  mw_amp: float | None = None,
                  duration_start_ns: float = DEFAULT_DURATION_START_NS,
                  duration_stop_ns: float = DEFAULT_DURATION_STOP_NS,
                  duration_steps: int = DEFAULT_DURATION_STEPS,
                  reset_spacing_batches: int = DEFAULT_HALF_DURATION_BATCHES,
                  reset_pulses: int = DEFAULT_RESET_PULSES,
                  laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                  laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
                  post_mw_delay_batches: int = DEFAULT_POST_MW_DELAY_BATCHES,
                  readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                  readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
                  warmup_blocks: int = 0,
                  blocks_per_duration: int = DEFAULT_BLOCKS_PER_DURATION,
                  averages: int = DEFAULT_AVERAGES,
                  reference_mw_off: bool = False,
                  mw_overlaps_readout: bool = False,
                  timeout_s: float = 10.0):
    if not host.strip():
        raise ValueError("host must be non-empty")
    if mw_amp is None:
        raise ValueError("mw-amp is required")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    requested_ns = duration_grid_ns(duration_start_ns, duration_stop_ns, duration_steps)
    duration_batches = [duration_ns_to_batches(value) for value in requested_ns]
    actual_ns = [value / DSP_BATCHES_PER_NS for value in duration_batches]

    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(
            m, resonant_hz=resonant_hz, detuned_hz=detuned_hz, mw_amp=mw_amp,
            reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
            laser_duration_batches=laser_duration_batches,
            laser_start_batches=laser_start_batches,
            post_mw_delay_batches=post_mw_delay_batches,
            readout_delay_batches=readout_delay_batches,
            readout_window_batches=readout_window_batches,
            duration_batches=duration_batches, warmup_blocks=warmup_blocks,
            blocks_per_duration=blocks_per_duration, averages=averages,
            reference_mw_off=reference_mw_off,
            mw_overlaps_readout=mw_overlaps_readout,
        )
        program = build_program(m)
        shared = {
            "reset_spacing_batches": reset_spacing_batches,
            "reset_pulses": reset_pulses,
            "laser_duration_batches": laser_duration_batches,
            "laser_start_batches": laser_start_batches,
            "post_mw_delay_batches": post_mw_delay_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "detuned_freq_code": units.freq_to_code(detuned_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp),
            "reference_mw_enabled": 0 if reference_mw_off else 1,
            "mw_overlaps_readout": 1 if mw_overlaps_readout else 0,
            "warmup_blocks": warmup_blocks,
            "blocks_per_duration": blocks_per_duration,
        }
        detuned_mean = np.empty((averages, len(duration_batches)), dtype=float)
        resonant_mean = np.empty_like(detuned_mean)
        samples_per_condition = 2 * blocks_per_duration
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            for duration_index, batches in enumerate(duration_batches):
                result = run.rerun(
                    drv, m, {0: program},
                    params={0: {**shared, "mw_duration_batches": batches}},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                )[0]["out"]
                detuned_mean[average_index, duration_index] = s32(int(result[0])) / samples_per_condition
                resonant_mean[average_index, duration_index] = s32(int(result[1])) / samples_per_condition
        return m, requested_ns, actual_ns, duration_batches, detuned_mean, resonant_mean
    finally:
        drv.close()


def save_and_plot(requested_ns, actual_ns, duration_batches, detuned_mean, resonant_mean,
                  output: Path, plot: Path, *, resonant_hz: float, detuned_hz: float,
                  mw_amp: float, reset_spacing_batches: int, reset_pulses: int,
                  laser_duration_batches: int, laser_start_batches: int,
                  post_mw_delay_batches: int,
                  readout_delay_batches: int, readout_window_batches: int,
                  warmup_blocks: int, blocks_per_duration: int,
                  reference_mw_off: bool = False,
                  mw_overlaps_readout: bool = False):
    difference, difference_sem, ratio, ratio_sem, difference_by_run, ratio_by_run = summarize(
        detuned_mean, resonant_mean,
    )
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(
        output, requested_duration_ns=np.asarray(requested_ns), actual_duration_ns=np.asarray(actual_ns),
        duration_batches=np.asarray(duration_batches), reference_mean=detuned_mean,
        detuned_mean=detuned_mean,
        resonant_mean=resonant_mean, resonant_minus_detuned=difference,
        resonant_minus_reference=difference,
        resonant_minus_detuned_sem=difference_sem, resonant_over_detuned=ratio,
        resonant_minus_reference_sem=difference_sem, resonant_over_reference=ratio,
        resonant_over_detuned_sem=ratio_sem, difference_by_run=difference_by_run,
        ratio_by_run=ratio_by_run, resonant_hz=resonant_hz, detuned_hz=detuned_hz,
        reference_mw_off=reference_mw_off,
        mw_amp=mw_amp, reset_spacing_batches=reset_spacing_batches,
        reset_pulses=reset_pulses, laser_duration_batches=laser_duration_batches,
        laser_start_batches=laser_start_batches,
        post_mw_delay_batches=post_mw_delay_batches,
        readout_delay_batches=readout_delay_batches,
        readout_window_batches=readout_window_batches, warmup_blocks=warmup_blocks,
        blocks_per_duration=blocks_per_duration, mw_overlaps_readout=mw_overlaps_readout,
    )
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    x = np.asarray(actual_ns)
    detuned = np.asarray(detuned_mean).mean(axis=0)
    resonant = np.asarray(resonant_mean).mean(axis=0)
    fig, (ax_raw, ax_difference) = plt.subplots(2, 1, sharex=True, layout="constrained", figsize=(8, 7))
    reference_label = "A MW off" if reference_mw_off else f"A detuned ({detuned_hz / 1e9:.3f} GHz)"
    difference_label = "resonant - MW off" if reference_mw_off else "resonant - detuned"
    ax_raw.plot(x, detuned, ".-", linewidth=0.8, markersize=3, label=reference_label)
    ax_raw.plot(x, resonant, ".-", linewidth=0.8, markersize=3,
                label=f"B resonant ({resonant_hz / 1e9:.3f} GHz)")
    timing_label = "MW/readout-overlap" if mw_overlaps_readout else "dark-MW"
    ax_raw.set(ylabel="mean ADC code", title=f"{timing_label} ABBA duration sweep")
    ax_raw.grid(True, alpha=0.3)
    ax_raw.legend()
    ax_difference.plot(x, difference, ".-", linewidth=0.8, markersize=3)
    ax_difference.axhline(0.0, color="black", linewidth=0.8)
    ax_difference.set(xlabel="actual MW duration (ns)", ylabel=f"{difference_label} (ADC code)",
                      title=(f"ABBA difference: {2 * blocks_per_duration} shots/condition, "
                             f"{len(detuned_mean)} scans"))
    ax_difference.grid(True, alpha=0.3)
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--detuned-hz", type=float, default=DEFAULT_DETUNED_HZ)
    parser.add_argument("--duration-start-ns", type=float, default=DEFAULT_DURATION_START_NS)
    parser.add_argument("--duration-stop-ns", type=float, default=DEFAULT_DURATION_STOP_NS)
    parser.add_argument("--duration-steps", type=int, default=DEFAULT_DURATION_STEPS)
    parser.add_argument("--reset-spacing-batches", type=int, default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--laser-start-batches", type=int, default=DEFAULT_LASER_START_BATCHES,
                        help="laser start after MW start in overlap mode")
    parser.add_argument("--post-mw-delay-batches", type=int, default=DEFAULT_POST_MW_DELAY_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--readout-window-batches", type=int, default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--warmup-blocks", type=int, default=0)
    parser.add_argument("--blocks-per-duration", type=int, default=DEFAULT_BLOCKS_PER_DURATION)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--reference-mw-off", action="store_true",
                        help="use no MW for A shots instead of the detuned frequency")
    parser.add_argument("--mw-overlaps-readout", action="store_true",
                        help="start the laser during MW using --laser-start-batches")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/rabi/nv_pulsed_rabi_abba_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/rabi/nv_pulsed_rabi_abba_{formatted_time}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    _, requested_ns, actual_ns, duration_batches, detuned_mean, resonant_mean = acquire_sweep(
        args.host, port=args.port, resonant_hz=args.resonant_hz, detuned_hz=args.detuned_hz,
        mw_amp=args.mw_amp, duration_start_ns=args.duration_start_ns,
        duration_stop_ns=args.duration_stop_ns, duration_steps=args.duration_steps,
        reset_spacing_batches=args.reset_spacing_batches, reset_pulses=args.reset_pulses,
        laser_duration_batches=args.laser_duration_batches,
        laser_start_batches=args.laser_start_batches,
        post_mw_delay_batches=args.post_mw_delay_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        warmup_blocks=args.warmup_blocks, blocks_per_duration=args.blocks_per_duration,
        averages=args.averages, reference_mw_off=args.reference_mw_off,
        mw_overlaps_readout=args.mw_overlaps_readout,
        timeout_s=args.timeout_s,
    )
    save_and_plot(
        requested_ns, actual_ns, duration_batches, detuned_mean, resonant_mean,
        args.output, args.plot, resonant_hz=args.resonant_hz, detuned_hz=args.detuned_hz,
        mw_amp=args.mw_amp, reset_spacing_batches=args.reset_spacing_batches,
        reset_pulses=args.reset_pulses, laser_duration_batches=args.laser_duration_batches,
        laser_start_batches=args.laser_start_batches,
        post_mw_delay_batches=args.post_mw_delay_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        warmup_blocks=args.warmup_blocks, blocks_per_duration=args.blocks_per_duration,
        reference_mw_off=args.reference_mw_off,
        mw_overlaps_readout=args.mw_overlaps_readout,
    )
    print(f"saved {args.averages} scans of {args.duration_steps} MW durations; "
          f"{2 * args.blocks_per_duration} shots/condition to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
