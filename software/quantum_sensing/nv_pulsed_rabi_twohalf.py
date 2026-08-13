"""Continuous two-half dark-MW Rabi sweep, following qdSpectro's topology.

Each resident-kernel pair is ordered as:

    signal:    (previous reference laser prepares the NV) -> dark MW -> laser/readout
    reference: no MW -> laser/readout

The reference laser is consequently also the preparation pulse for the next
signal half.  This deliberately differs from ``nv_pulsed_rabi_abba.py``,
which independently resets every shot.  Only the ordering and optical/MW
cadence are borrowed from qdSpectro: the RFSoC integration delay and window
remain local coordinates measured from each RFSoC laser trigger.
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


DSP_BATCHES_PER_NS = 0.49152
DEFAULT_RESONANT_HZ = 2.54e9
DEFAULT_DURATION_START_NS = 0.0
DEFAULT_DURATION_STOP_NS = 1_000.0
DEFAULT_DURATION_STEPS = 101
DEFAULT_REFERENCE_TO_MW_BATCHES = 492       # 1.001 us; physical cycle spacing, not DAQ latency.
DEFAULT_MW_TO_LASER_BATCHES = 492           # 1.001 us dark evolution after the MW pulse.
DEFAULT_LASER_RECOVERY_BATCHES = 2_458      # 5.001 us signal-to-reference trigger separation.
DEFAULT_WARMUP_PAIRS = 10
DEFAULT_PAIRS_PER_DURATION = 1_000
DEFAULT_AVERAGES = 10
MAX_PAIRS_PER_DURATION = 1_000


def duration_grid_ns(start_ns: float, stop_ns: float, steps: int) -> list[float]:
    """Return an inclusive duration grid; zero is the required no-MW endpoint."""
    if not all(math.isfinite(value) and value >= 0 for value in (start_ns, stop_ns)):
        raise ValueError("duration start and stop must be finite and non-negative")
    if steps < 1:
        raise ValueError("duration-steps must be positive")
    if steps > 1 and stop_ns <= start_ns:
        raise ValueError("duration-stop-ns must exceed duration-start-ns")
    return [float(start_ns)] if steps == 1 else np.linspace(start_ns, stop_ns, steps).tolist()


def duration_ns_to_batches(duration_ns: float) -> int:
    if not math.isfinite(duration_ns) or duration_ns < 0:
        raise ValueError("MW duration must be finite and non-negative")
    return round(duration_ns * DSP_BATCHES_PER_NS)


@no_type_check
@kernel
def k_pulsed_rabi_twohalf(
        mw: ParamTable, demod: ParamTable, out: Array,
        reference_to_mw_batches: int, mw_to_laser_batches: int,
        laser_recovery_batches: int, laser_duration_batches: int,
        readout_delay_batches: int, readout_window_batches: int,
        resonant_freq_code: int, mw_duration_batches: int, mw_amp_code: int,
        warmup_pairs: int, pairs_per_duration: int):
    """Accumulate continuous signal/reference pairs for one MW duration."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_freq(mw, resonant_freq_code)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    # A true zero-duration endpoint is a no-MW control.  Do not enqueue a
    # zero-length DAC event: it would depend on the hardware's zero-duration
    # encoding rather than preserving the intended control condition.
    if mw_duration_batches > 0:
        set_dur(mw, mw["mw"], mw_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821

    # qdSpectro's two AOM pulses are separated by this half duration.  The
    # RFSoC laser remains a fixed-width trigger; recovery is merely trigger
    # spacing and does not set the optical pulse length.
    half_duration = (reference_to_mw_batches + mw_duration_batches
                     + mw_to_laser_batches + laser_recovery_batches)
    total_pairs = warmup_pairs + pairs_per_duration
    pair = 0
    reference_sum = 0
    signal_sum = 0

    # Prime two pairs: four laser and four integration events exactly fill the
    # depth-four queues.  The first recorded pair is preceded by warmup pairs,
    # so it is prepared by an actual previous reference trigger.
    cycle_start = now() + SCHEDULE_LEAD  # noqa: F821
    signal_mw = cycle_start + reference_to_mw_batches
    signal_laser = signal_mw + mw_duration_batches + mw_to_laser_batches
    reference_laser = cycle_start + half_duration
    signal_window = signal_laser + readout_delay_batches
    reference_window = reference_laser + readout_delay_batches
    if mw_duration_batches > 0:
        play(mw, mw["mw"], signal_mw)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, signal_laser)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reference_laser)  # noqa: F821
    play(demod, demod["window"], signal_window)  # noqa: F821
    play(demod, demod["window"], reference_window)  # noqa: F821

    if pair + 1 < total_pairs:
        second_cycle = cycle_start + 2 * half_duration
        second_mw = second_cycle + reference_to_mw_batches
        second_signal_laser = second_mw + mw_duration_batches + mw_to_laser_batches
        second_reference_laser = second_cycle + half_duration
        second_signal_window = second_signal_laser + readout_delay_batches
        second_reference_window = second_reference_laser + readout_delay_batches
        if mw_duration_batches > 0:
            play(mw, mw["mw"], second_mw)  # noqa: F821
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, second_signal_laser)  # noqa: F821
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, second_reference_laser)  # noqa: F821
        play(demod, demod["window"], second_signal_window)  # noqa: F821
        play(demod, demod["window"], second_reference_window)  # noqa: F821

    while pair < total_pairs:
        wait_until(signal_window + READOUT_LEAD)  # noqa: F821
        read_res()  # noqa: F821
        if pair >= warmup_pairs:
            signal_sum = signal_sum + read_real()  # noqa: F821
        else:
            read_real()  # noqa: F821
        read_imag()  # noqa: F821

        wait_until(reference_window + READOUT_LEAD)  # noqa: F821
        read_res()  # noqa: F821
        if pair >= warmup_pairs:
            reference_sum = reference_sum + read_real()  # noqa: F821
        else:
            read_real()  # noqa: F821
        read_imag()  # noqa: F821

        # Once pair N drains, pair N+2 is safe to enqueue.  All timestamps are
        # absolute, preventing host/RV32 execution time from opening a dark gap.
        next_pair = pair + 2
        if next_pair < total_pairs:
            next_cycle = cycle_start + 4 * half_duration
            next_mw = next_cycle + reference_to_mw_batches
            next_signal_laser = next_mw + mw_duration_batches + mw_to_laser_batches
            next_reference_laser = next_cycle + half_duration
            next_signal_window = next_signal_laser + readout_delay_batches
            next_reference_window = next_reference_laser + readout_delay_batches
            if mw_duration_batches > 0:
                play(mw, mw["mw"], next_mw)  # noqa: F821
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, next_signal_laser)  # noqa: F821
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, next_reference_laser)  # noqa: F821
            play(demod, demod["window"], next_signal_window)  # noqa: F821
            play(demod, demod["window"], next_reference_window)  # noqa: F821

        pair += 1
        cycle_start = cycle_start + 2 * half_duration
        signal_mw = cycle_start + reference_to_mw_batches
        signal_laser = signal_mw + mw_duration_batches + mw_to_laser_batches
        reference_laser = cycle_start + half_duration
        signal_window = signal_laser + readout_delay_batches
        reference_window = reference_laser + readout_delay_batches

    out[0] = reference_sum
    out[1] = signal_sum


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(k_pulsed_rabi_twohalf, m, tables={"mw": mw, "demod": demod}, out=Array(2))


def _validate(m: SocMap, *, resonant_hz: float, mw_amp: float,
              reference_to_mw_batches: int, mw_to_laser_batches: int,
              laser_recovery_batches: int, laser_duration_batches: int,
              readout_delay_batches: int, readout_window_batches: int,
              duration_batches: list[int], warmup_pairs: int,
              pairs_per_duration: int, averages: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not math.isfinite(resonant_hz) or resonant_hz <= 0:
        raise ValueError("resonant frequency must be positive and finite")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if reference_to_mw_batches < 0 or mw_to_laser_batches < 0:
        raise ValueError("reference-to-MW and MW-to-laser delays must be non-negative")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser duration must be in 1..65535")
    if laser_recovery_batches < laser_duration_batches:
        raise ValueError("laser recovery must be at least the laser trigger width")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window must be within the decoder limit")
    if readout_delay_batches < 0:
        raise ValueError("readout delay must be non-negative")
    if readout_delay_batches + readout_window_batches > laser_recovery_batches:
        raise ValueError("signal integration must finish before the reference laser trigger")
    if not duration_batches or min(duration_batches) < 0 or max(duration_batches) > MAX_PULSE_BATCHES:
        raise ValueError("MW durations must fit in 0..65535 batches")
    if len(set(duration_batches)) != len(duration_batches):
        raise ValueError("duration grid contains duplicate RFSoC batch values")
    if not 0 <= warmup_pairs <= MAX_PAIRS_PER_DURATION:
        raise ValueError(f"warmup-pairs must be in 0..{MAX_PAIRS_PER_DURATION}")
    if not 1 <= pairs_per_duration <= MAX_PAIRS_PER_DURATION:
        raise ValueError(f"pairs-per-duration must be in 1..{MAX_PAIRS_PER_DURATION}")
    if averages < 1:
        raise ValueError("averages must be positive")


def summarize(reference_mean: np.ndarray, signal_mean: np.ndarray):
    reference = np.asarray(reference_mean, dtype=float)
    signal = np.asarray(signal_mean, dtype=float)
    if reference.shape != signal.shape or reference.ndim != 2:
        raise ValueError("reference and signal means must have shape (averages, duration)")
    difference_by_run = signal - reference
    ratio_by_run = np.divide(signal, reference, out=np.full_like(signal, np.nan), where=reference != 0)
    difference = difference_by_run.mean(axis=0)
    ratio = ratio_by_run.mean(axis=0)
    if len(reference) == 1:
        difference_sem = np.full(difference.shape, np.nan)
        ratio_sem = np.full(ratio.shape, np.nan)
    else:
        difference_sem = difference_by_run.std(axis=0, ddof=1) / np.sqrt(len(reference))
        ratio_sem = ratio_by_run.std(axis=0, ddof=1) / np.sqrt(len(reference))
    return difference, difference_sem, ratio, ratio_sem, difference_by_run, ratio_by_run


def acquire_sweep(host: str, *, port: int = 9091, resonant_hz: float = DEFAULT_RESONANT_HZ,
                  mw_amp: float | None = None, duration_start_ns: float = DEFAULT_DURATION_START_NS,
                  duration_stop_ns: float = DEFAULT_DURATION_STOP_NS,
                  duration_steps: int = DEFAULT_DURATION_STEPS,
                  reference_to_mw_batches: int = DEFAULT_REFERENCE_TO_MW_BATCHES,
                  mw_to_laser_batches: int = DEFAULT_MW_TO_LASER_BATCHES,
                  laser_recovery_batches: int = DEFAULT_LASER_RECOVERY_BATCHES,
                  laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                  readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                  readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
                  warmup_pairs: int = DEFAULT_WARMUP_PAIRS,
                  pairs_per_duration: int = DEFAULT_PAIRS_PER_DURATION,
                  averages: int = DEFAULT_AVERAGES, randomize_durations: bool = True,
                  seed: int | None = None, timeout_s: float = 10.0):
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
            m, resonant_hz=resonant_hz, mw_amp=mw_amp,
            reference_to_mw_batches=reference_to_mw_batches,
            mw_to_laser_batches=mw_to_laser_batches,
            laser_recovery_batches=laser_recovery_batches,
            laser_duration_batches=laser_duration_batches,
            readout_delay_batches=readout_delay_batches,
            readout_window_batches=readout_window_batches,
            duration_batches=duration_batches, warmup_pairs=warmup_pairs,
            pairs_per_duration=pairs_per_duration, averages=averages,
        )
        program = build_program(m)
        shared = {
            "reference_to_mw_batches": reference_to_mw_batches,
            "mw_to_laser_batches": mw_to_laser_batches,
            "laser_recovery_batches": laser_recovery_batches,
            "laser_duration_batches": laser_duration_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp),
            "warmup_pairs": warmup_pairs,
            "pairs_per_duration": pairs_per_duration,
        }
        reference_mean = np.empty((averages, len(duration_batches)), dtype=float)
        signal_mean = np.empty_like(reference_mean)
        duration_order_indices = np.empty((averages, len(duration_batches)), dtype=int)
        rng = np.random.default_rng(seed)
        run.setup(drv, m, {0: program})
        for average_index in range(averages):
            order = (rng.permutation(len(duration_batches)) if randomize_durations
                     else np.arange(len(duration_batches)))
            duration_order_indices[average_index] = order
            for duration_index in order:
                result = run.rerun(
                    drv, m, {0: program},
                    params={0: {**shared, "mw_duration_batches": duration_batches[duration_index]}},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                )[0]["out"]
                reference_mean[average_index, duration_index] = _s32(int(result[0])) / pairs_per_duration
                signal_mean[average_index, duration_index] = _s32(int(result[1])) / pairs_per_duration
        return (m, requested_ns, actual_ns, duration_batches, reference_mean, signal_mean,
                duration_order_indices)
    finally:
        drv.close()


def save_and_plot(requested_ns, actual_ns, duration_batches, reference_mean, signal_mean,
                  duration_order_indices, output: Path, plot: Path, *, resonant_hz: float,
                  mw_amp: float, reference_to_mw_batches: int, mw_to_laser_batches: int,
                  laser_recovery_batches: int, laser_duration_batches: int,
                  readout_delay_batches: int, readout_window_batches: int,
                  warmup_pairs: int, pairs_per_duration: int, randomize_durations: bool,
                  seed: int | None):
    difference, difference_sem, ratio, ratio_sem, difference_by_run, ratio_by_run = summarize(
        reference_mean, signal_mean,
    )
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(
        output, requested_duration_ns=np.asarray(requested_ns), actual_duration_ns=np.asarray(actual_ns),
        duration_batches=np.asarray(duration_batches), reference_mean=reference_mean,
        signal_mean=signal_mean, signal_minus_reference=difference,
        signal_minus_reference_sem=difference_sem, signal_over_reference=ratio,
        signal_over_reference_sem=ratio_sem, difference_by_run=difference_by_run,
        ratio_by_run=ratio_by_run, duration_order_indices=duration_order_indices,
        resonant_hz=resonant_hz, mw_amp=mw_amp,
        reference_to_mw_batches=reference_to_mw_batches,
        mw_to_laser_batches=mw_to_laser_batches,
        laser_recovery_batches=laser_recovery_batches,
        laser_duration_batches=laser_duration_batches,
        readout_delay_batches=readout_delay_batches,
        readout_window_batches=readout_window_batches, warmup_pairs=warmup_pairs,
        pairs_per_duration=pairs_per_duration, randomize_durations=randomize_durations,
        seed=-1 if seed is None else seed,
    )
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    x = np.asarray(actual_ns)
    reference = np.asarray(reference_mean).mean(axis=0)
    signal = np.asarray(signal_mean).mean(axis=0)
    fig, (ax_raw, ax_difference) = plt.subplots(2, 1, sharex=True, layout="constrained", figsize=(8, 7))
    ax_raw.plot(x, reference, ".-", linewidth=0.8, markersize=3, label="reference (MW off)")
    ax_raw.plot(x, signal, ".-", linewidth=0.8, markersize=3, label="signal (resonant MW)")
    ax_raw.set(ylabel="mean ADC code", title="Continuous two-half dark-MW Rabi sweep")
    ax_raw.grid(True, alpha=0.3)
    ax_raw.legend()
    ax_difference.plot(x, difference, ".-", linewidth=0.8, markersize=3)
    ax_difference.axhline(0.0, color="black", linewidth=0.8)
    ax_difference.set(xlabel="actual MW duration (ns)", ylabel="signal - reference (ADC code)",
                      title=(f"{pairs_per_duration} pairs/duration, {len(reference_mean)} scans"))
    ax_difference.grid(True, alpha=0.3)
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--duration-start-ns", type=float, default=DEFAULT_DURATION_START_NS)
    parser.add_argument("--duration-stop-ns", type=float, default=DEFAULT_DURATION_STOP_NS)
    parser.add_argument("--duration-steps", type=int, default=DEFAULT_DURATION_STEPS)
    parser.add_argument("--reference-to-mw-batches", type=int, default=DEFAULT_REFERENCE_TO_MW_BATCHES,
                        help="delay from the preceding reference laser trigger to MW start")
    parser.add_argument("--mw-to-laser-batches", type=int, default=DEFAULT_MW_TO_LASER_BATCHES,
                        help="dark delay from MW end to signal laser trigger")
    parser.add_argument("--laser-recovery-batches", type=int, default=DEFAULT_LASER_RECOVERY_BATCHES,
                        help="signal-to-reference trigger separation; does not set laser pulse length")
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES,
                        help="locally calibrated RFSoC delay from each laser trigger to integration")
    parser.add_argument("--readout-window-batches", type=int, default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--warmup-pairs", type=int, default=DEFAULT_WARMUP_PAIRS)
    parser.add_argument("--pairs-per-duration", type=int, default=DEFAULT_PAIRS_PER_DURATION)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--no-randomize-durations", action="store_true",
                        help="retain ascending duration order instead of qdSpectro-style random order")
    parser.add_argument("--seed", type=int, default=None)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/rabi/nv_pulsed_rabi_twohalf_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/rabi/nv_pulsed_rabi_twohalf_{formatted_time}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    (m, requested_ns, actual_ns, duration_batches, reference_mean, signal_mean,
     duration_order_indices) = acquire_sweep(
        args.host, port=args.port, resonant_hz=args.resonant_hz, mw_amp=args.mw_amp,
        duration_start_ns=args.duration_start_ns, duration_stop_ns=args.duration_stop_ns,
        duration_steps=args.duration_steps,
        reference_to_mw_batches=args.reference_to_mw_batches,
        mw_to_laser_batches=args.mw_to_laser_batches,
        laser_recovery_batches=args.laser_recovery_batches,
        laser_duration_batches=args.laser_duration_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches, warmup_pairs=args.warmup_pairs,
        pairs_per_duration=args.pairs_per_duration, averages=args.averages,
        randomize_durations=not args.no_randomize_durations, seed=args.seed,
        timeout_s=args.timeout_s,
    )
    save_and_plot(
        requested_ns, actual_ns, duration_batches, reference_mean, signal_mean,
        duration_order_indices, args.output, args.plot, resonant_hz=args.resonant_hz,
        mw_amp=args.mw_amp, reference_to_mw_batches=args.reference_to_mw_batches,
        mw_to_laser_batches=args.mw_to_laser_batches,
        laser_recovery_batches=args.laser_recovery_batches,
        laser_duration_batches=args.laser_duration_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches, warmup_pairs=args.warmup_pairs,
        pairs_per_duration=args.pairs_per_duration,
        randomize_durations=not args.no_randomize_durations, seed=args.seed,
    )
    print(f"saved {args.averages} scans of {args.duration_steps} MW durations; "
          f"{args.pairs_per_duration} continuous pairs/duration to {args.output} and {args.plot} "
          f"on {m.params.name}")


if __name__ == "__main__":
    main()
