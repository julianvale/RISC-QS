"""RFSoC counterpart of qdSpectro's ``PulsedESRseqhalfmw`` acquisition.

At each microwave frequency, the resident kernel normally repeats one 2-us
cycle: one MW-on signal half and one MW-off reference half.  The optional
reset diagnostic inserts unrecorded laser triggers between those two shots.
It returns only the accumulated signal/reference sums, just as qdSpectro
reduces each finite DAQ read to one mean pair.  The host scans frequency in
ascending order and then repeats the complete scan for the requested number
of averages.

The default MW/laser geometry is transcribed from the supplied working
PulseBlaster sequence.  The integration gate is instead kept in the RFSoC
timing domain: its calibrated delay and duration are relative to the RFSoC
laser trigger, not copied from the PulseBlaster's DAQ gate.
"""

from __future__ import annotations

import argparse
import json
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
from riscq.pulses import Pulse, envelopes, units


# This is required only to prime the first two pairs.  Thereafter, the kernel
# refills the depth-four laser/readout queues on an absolute two-half grid.
SCHEDULE_LEAD = 2_048
LASER_HALF_PERIOD = 1
LASER_CW = 1
MAX_PULSE_BATCHES = 65_535
QUEUE_PAIRS = 2
MAX_SAMPLES_PER_FREQUENCY = 1_000
MAX_WARMUP_PAIRS = 1_000

# The MW/laser positions reproduce qdSpectro as closely as the 491.52-MHz
# batch clock allows.  Readout remains the RFSoC-calibrated 77-batch delay and
# 23-batch gate *after the RFSoC laser trigger*.
DEFAULT_HALF_DURATION_BATCHES = 492             # 1000.98 ns
DEFAULT_LASER_START_BATCHES = 375                #  762.94 ns
DEFAULT_LASER_TRIGGER_BATCHES = 30               #   61.04 ns
DEFAULT_READOUT_DELAY_BATCHES = 77               #  156.66 ns after laser trigger
DEFAULT_READOUT_WINDOW_BATCHES = 23              #   46.79 ns

DEFAULT_START_HZ = 2.5e9
DEFAULT_STOP_HZ = 3.2e9
DEFAULT_FREQUENCY_STEPS = 201
DEFAULT_SAMPLES_PER_FREQUENCY = 1_000
DEFAULT_AVERAGES = 10
MAX_RESET_PULSES = 32


def _tables(m: SocMap) -> tuple[ParamTable, ParamTable]:
    """Return full-bank DAC0 MW and channel-2 zero-Hz integration tables."""
    mw_envelope = envelopes.square(m.channel(0).samples_per_line * m.params.env_depth)
    demod_envelope = envelopes.square(m.channel(2).samples_per_line * m.params.env_depth)
    return (
        ParamTable(0, 0.0, {"mw": Pulse(mw_envelope, amp=0.0)}),
        ParamTable(2, 0.0, {"window": Pulse(demod_envelope, amp=1.0)}),
    )


@no_type_check
@kernel
def k_pulsed_esr_halfmw(mw: ParamTable, demod: ParamTable, out: Array,
                        half_duration_batches: int, laser_start_batches: int,
                        laser_duration_batches: int, readout_delay_batches: int,
                        readout_window_batches: int, mw_freq_code: int,
                        mw_amp_code: int, warmup_pairs: int,
                        samples_per_frequency: int):
    """Accumulate one uninterrupted frequency-point train on the RV32."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
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

    # Prime pairs 0 and 1: four future laser and integration events, exactly
    # filling the corresponding TimedQueues.
    signal_start = now() + SCHEDULE_LEAD  # noqa: F821
    reference_start = signal_start + half_duration_batches
    signal_laser = signal_start + laser_start_batches
    reference_laser = reference_start + laser_start_batches
    signal_window = signal_laser + readout_delay_batches
    reference_window = reference_laser + readout_delay_batches
    play(mw, mw["mw"], signal_start)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, signal_laser)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reference_laser)  # noqa: F821
    play(demod, demod["window"], signal_window)  # noqa: F821
    play(demod, demod["window"], reference_window)  # noqa: F821

    if pair + 1 < total_pairs:
        second_signal_start = signal_start + 2 * half_duration_batches
        second_reference_start = second_signal_start + half_duration_batches
        second_signal_laser = second_signal_start + laser_start_batches
        second_reference_laser = second_reference_start + laser_start_batches
        second_signal_window = second_signal_laser + readout_delay_batches
        second_reference_window = second_reference_laser + readout_delay_batches
        play(mw, mw["mw"], second_signal_start)  # noqa: F821
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

        # Pair ``pair`` has drained two entries from each depth-four queue.
        # Refill those slots at the timestamp of pair ``pair + 2``; never
        # derive a new event time from now(), which would make a dark gap.
        next_pair = pair + QUEUE_PAIRS
        if next_pair < total_pairs:
            next_signal_start = signal_start + 2 * QUEUE_PAIRS * half_duration_batches
            next_reference_start = next_signal_start + half_duration_batches
            next_signal_laser = next_signal_start + laser_start_batches
            next_reference_laser = next_reference_start + laser_start_batches
            next_signal_window = next_signal_laser + readout_delay_batches
            next_reference_window = next_reference_laser + readout_delay_batches
            play(mw, mw["mw"], next_signal_start)  # noqa: F821
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, next_signal_laser)  # noqa: F821
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, next_reference_laser)  # noqa: F821
            play(demod, demod["window"], next_signal_window)  # noqa: F821
            play(demod, demod["window"], next_reference_window)  # noqa: F821

        pair += 1
        signal_start = signal_start + 2 * half_duration_batches
        reference_start = signal_start + half_duration_batches
        signal_laser = signal_start + laser_start_batches
        reference_laser = reference_start + laser_start_batches
        signal_window = signal_laser + readout_delay_batches
        reference_window = reference_laser + readout_delay_batches

    out[0] = signal_sum
    out[1] = reference_sum


@no_type_check
@kernel
def k_pulsed_esr_halfmw_resets(mw: ParamTable, demod: ParamTable, out: Array,
                               half_duration_batches: int, laser_start_batches: int,
                               laser_duration_batches: int, readout_delay_batches: int,
                               readout_window_batches: int, mw_freq_code: int,
                               mw_amp_code: int, warmup_pairs: int,
                               samples_per_frequency: int, reset_pulses: int):
    """Measure MW-on signal, reset optically, then measure MW-off reference.

    The reset triggers are deliberately not accompanied by an integration gate
    or ``read_res``.  This diagnostic is serial so a many-pulse reset cannot
    overflow the depth-four laser TimedQueue.
    """
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
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
        # Identical MW-on signal half to the existing experiment.
        signal_start = now() + SCHEDULE_LEAD  # noqa: F821
        signal_laser = signal_start + laser_start_batches
        signal_window = signal_laser + readout_delay_batches
        play(mw, mw["mw"], signal_start)  # noqa: F821
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, signal_laser)  # noqa: F821
        play(demod, demod["window"], signal_window)  # noqa: F821
        wait_until(signal_window + READOUT_LEAD)  # noqa: F821
        read_res()  # noqa: F821
        if pair >= warmup_pairs:
            signal_sum = signal_sum + read_real()  # noqa: F821
        else:
            read_real()  # noqa: F821
        read_imag()  # noqa: F821

        # The first reset takes the former reference-pulse slot.  Individual
        # waits allow arbitrary reset counts without pre-queuing them all.
        reset_laser = signal_laser + half_duration_batches
        reset_index = 0
        while reset_index < reset_pulses:
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
            wait_until(reset_laser + laser_duration_batches)  # noqa: F821
            reset_laser = reset_laser + half_duration_batches
            reset_index += 1

        # The sole MW-off laser trigger that is acquired as the reference.
        reference_laser = reset_laser
        reference_window = reference_laser + readout_delay_batches
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
    return compile_kernel(k_pulsed_esr_halfmw, m, tables={"mw": mw, "demod": demod}, out=Array(2))


def build_reset_program(m: SocMap):
    """Compile the serial reset-pulse diagnostic variant."""
    mw, demod = _tables(m)
    return compile_kernel(k_pulsed_esr_halfmw_resets, m, tables={"mw": mw, "demod": demod}, out=Array(2))


def frequency_grid(start_hz: float, stop_hz: float, steps: int) -> list[float]:
    """Inclusive ascending grid, matching ``np.linspace(..., endpoint=True)``."""
    if not all(math.isfinite(value) and value > 0 for value in (start_hz, stop_hz)):
        raise ValueError("frequency start and stop must be positive finite values")
    if steps < 1:
        raise ValueError("frequency-steps must be positive")
    if steps > 1 and stop_hz <= start_hz:
        raise ValueError("frequency-stop-hz must exceed frequency-start-hz when steps is greater than one")
    return [float(start_hz)] if steps == 1 else np.linspace(start_hz, stop_hz, steps).tolist()


def _validate(m: SocMap, frequencies_hz: list[float], mw_amp: float,
              half_duration_batches: int, laser_start_batches: int,
              laser_duration_batches: int, readout_delay_batches: int,
              readout_window_batches: int, warmup_pairs: int,
              samples_per_frequency: int, averages: int, reset_pulses: int = 0) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not frequencies_hz:
        raise ValueError("at least one frequency is required")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= half_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("half-duration-batches must be in 1..65535")
    if laser_start_batches < 0 or laser_start_batches + laser_duration_batches > half_duration_batches:
        raise ValueError("laser start and duration must fit within one half")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window must be within the decoder limit")
    if readout_delay_batches < 0 or (laser_start_batches + readout_delay_batches
                                     + readout_window_batches > half_duration_batches):
        raise ValueError("readout delay and duration after the laser must fit within one half")
    if not 0 <= warmup_pairs <= MAX_WARMUP_PAIRS:
        raise ValueError(f"warmup-pairs must be in 0..{MAX_WARMUP_PAIRS}")
    if not 1 <= samples_per_frequency <= MAX_SAMPLES_PER_FREQUENCY:
        raise ValueError(f"samples-per-frequency must be in 1..{MAX_SAMPLES_PER_FREQUENCY}")
    if averages < 1:
        raise ValueError("averages must be positive")
    if not 0 <= reset_pulses <= MAX_RESET_PULSES:
        raise ValueError(f"reset-pulses must be in 0..{MAX_RESET_PULSES}")


def _s32(value: int) -> int:
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def summarize_runs(reference_mean: np.ndarray, signal_mean: np.ndarray) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Return qdSpectro-style signal/reference ratios and their run SEM."""
    reference = np.asarray(reference_mean, dtype=float)
    signal = np.asarray(signal_mean, dtype=float)
    if reference.shape != signal.shape or reference.ndim != 2:
        raise ValueError("reference and signal must have shape (averages, frequency)")
    ratio_by_run = np.divide(signal, reference, out=np.full_like(signal, np.nan), where=reference != 0)
    ratio = ratio_by_run.mean(axis=0)
    if ratio_by_run.shape[0] == 1:
        ratio_sem = np.full(ratio.shape, np.nan)
    else:
        ratio_sem = ratio_by_run.std(axis=0, ddof=1) / np.sqrt(ratio_by_run.shape[0])
    return ratio, ratio_sem, ratio_by_run


def acquire_scan(host: str, *, port: int = 9091, start_hz: float = DEFAULT_START_HZ,
                 stop_hz: float = DEFAULT_STOP_HZ, frequency_steps: int = DEFAULT_FREQUENCY_STEPS,
                 mw_amp: float | None = None,
                 half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES,
                 laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                 readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
                 warmup_pairs: int = 0, samples_per_frequency: int = DEFAULT_SAMPLES_PER_FREQUENCY,
                 averages: int = DEFAULT_AVERAGES, reset_pulses: int = 0,
                 timeout_s: float = 2.0) -> tuple[SocMap, list[float], np.ndarray, np.ndarray]:
    """Acquire qdSpectro-order means shaped ``(averages, frequency)``."""
    if not host.strip():
        raise ValueError("host must be non-empty (set BOARD_IP or pass --host explicitly)")
    if mw_amp is None:
        raise ValueError("mw-amp is required: choose a reviewed DAC0 amplitude for your MW chain")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    frequencies_hz = frequency_grid(start_hz, stop_hz, frequency_steps)
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, frequencies_hz, mw_amp, half_duration_batches, laser_start_batches,
                  laser_duration_batches, readout_delay_batches, readout_window_batches,
                  warmup_pairs, samples_per_frequency, averages, reset_pulses)
        program = build_reset_program(m) if reset_pulses else build_program(m)
        shared = {
            "half_duration_batches": half_duration_batches,
            "laser_start_batches": laser_start_batches,
            "laser_duration_batches": laser_duration_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "mw_amp_code": units.amp_to_code(mw_amp),
            "warmup_pairs": warmup_pairs,
            "samples_per_frequency": samples_per_frequency,
        }
        if reset_pulses:
            shared["reset_pulses"] = reset_pulses
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


def save_and_plot(frequencies_hz: list[float], reference_mean: np.ndarray, signal_mean: np.ndarray,
                  output: Path, plot: Path, *, half_duration_batches: int,
                  laser_start_batches: int, laser_duration_batches: int,
                  readout_delay_batches: int, readout_window_batches: int,
                  warmup_pairs: int, samples_per_frequency: int, reset_pulses: int = 0,
                  post_reset_settle_batches: int = 0, mw_enabled: bool = True,
                  laser_enabled: bool = True,
                  experiment_metadata: dict[str, object] | None = None) -> None:
    """Save data, run parameters, a JSON sidecar, and the summary plot."""
    ratio, ratio_sem, ratio_by_run = summarize_runs(reference_mean, signal_mean)
    positive_contrast = 1.0 - ratio
    output.parent.mkdir(parents=True, exist_ok=True)
    metadata = {
        "schema_version": 1,
        "experiment": "nv_pulsed_esr_halfmw",
        "output_file": str(output),
        "plot_file": str(plot),
        "frequency_start_hz": float(frequencies_hz[0]),
        "frequency_stop_hz": float(frequencies_hz[-1]),
        "frequency_steps": len(frequencies_hz),
        "averages": int(reference_mean.shape[0]),
        "half_duration_batches": int(half_duration_batches),
        "laser_start_batches": int(laser_start_batches),
        "laser_duration_batches": int(laser_duration_batches),
        "readout_delay_batches": int(readout_delay_batches),
        "readout_window_batches": int(readout_window_batches),
        "warmup_pairs": int(warmup_pairs),
        "samples_per_frequency": int(samples_per_frequency),
        "reset_pulses": int(reset_pulses),
        "post_reset_settle_batches": int(post_reset_settle_batches),
        "mw_enabled": bool(mw_enabled),
        "laser_enabled": bool(laser_enabled),
    }
    if experiment_metadata is not None:
        metadata.update(experiment_metadata)
    metadata_json = json.dumps(metadata, indent=2, sort_keys=True)

    archive = {
        "frequencies_hz": np.asarray(frequencies_hz),
        "reference_mean": reference_mean,
        "signal_mean": signal_mean,
        "ratio_signal_over_reference": ratio,
        "ratio_signal_over_reference_sem": ratio_sem,
        "ratio_by_run": ratio_by_run,
        "positive_contrast": positive_contrast,
        "experiment_metadata_json": metadata_json,
    }
    # Retain parameters as scalar NPZ entries for convenient programmatic use;
    # the sidecar contains the identical information in human-readable form.
    for key, value in metadata.items():
        if value is not None and isinstance(value, (bool, int, float, str)):
            archive[key] = value
    np.savez(output, **archive)
    output.with_suffix(".json").write_text(metadata_json + "\n", encoding="utf-8")
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    frequency_ghz = np.asarray(frequencies_hz) / 1e9
    signal = np.asarray(signal_mean, dtype=float).mean(axis=0)
    reference = np.asarray(reference_mean, dtype=float).mean(axis=0)
    fig, (ax_signal, ax_contrast) = plt.subplots(
        2, 1, sharex=True, layout="constrained", figsize=(8, 7),
    )
    if not laser_enabled:
        signal_label = "signal position (laser disabled)"
    else:
        signal_label = "signal (MW on)" if mw_enabled else "signal position (MW disabled)"
    ax_signal.plot(frequency_ghz, signal, ".-", linewidth=0.8, markersize=3, label=signal_label)
    ax_signal.plot(frequency_ghz, reference, ".-", linewidth=0.8, markersize=3,
                   label="reference (MW off)", alpha=0.8)
    ax_signal.set(ylabel="mean ADC code", title="Signal and reference")
    ax_signal.grid(True, alpha=0.3)
    ax_signal.legend()

    # Keep ratio_sem in the NPZ for quantitative analysis, but omit error bars
    # from the exploratory plot so small frequency structure remains visible.
    ax_contrast.plot(frequency_ghz, ratio, ".-", linewidth=0.8, markersize=3)
    ax_contrast.axhline(1.0, color="black", linewidth=0.8)
    ax_contrast.set(xlabel="MW frequency (GHz)", ylabel="signal / reference",
                    title=(f"Contrast: {samples_per_frequency} pairs/frequency, "
                           f"{reference_mean.shape[0]} scans, {reset_pulses} reset pulses"))
    ax_contrast.grid(True, alpha=0.3)
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"),
                        help="board-service host or Pyro URI; defaults to BOARD_IP")
    parser.add_argument("--mw-amp", required=True, type=float,
                        help="reviewed DAC0 amplitude fraction in [-1, 1]")
    parser.add_argument("--start-hz", type=float, default=DEFAULT_START_HZ)
    parser.add_argument("--stop-hz", type=float, default=DEFAULT_STOP_HZ)
    parser.add_argument("--frequency-steps", type=int, default=DEFAULT_FREQUENCY_STEPS)
    parser.add_argument("--half-duration-batches", type=int, default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--laser-start-batches", type=int, default=DEFAULT_LASER_START_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int,
                        default=DEFAULT_READOUT_DELAY_BATCHES,
                        help="RFSoC-calibrated delay from laser trigger to integration gate")
    parser.add_argument("--readout-window-batches", type=int, default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--warmup-pairs", type=int, default=0,
                        help="discarded continuous pairs before recorded data at each frequency")
    parser.add_argument("--reset-pulses", type=int, default=0,
                        help=("unrecorded laser reset triggers between the MW-on signal and MW-off reference; "
                              "0 retains the fast original sequence"))
    parser.add_argument("--samples-per-frequency", type=int, default=DEFAULT_SAMPLES_PER_FREQUENCY)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_pulsed_esr_halfmw_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_pulsed_esr_halfmw_{formatted_time}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    acquisition_started_at = datetime.now().astimezone().isoformat(timespec="seconds")
    m, frequencies_hz, reference_mean, signal_mean = acquire_scan(
        args.host, port=args.port, start_hz=args.start_hz, stop_hz=args.stop_hz,
        frequency_steps=args.frequency_steps, mw_amp=args.mw_amp,
        half_duration_batches=args.half_duration_batches, laser_start_batches=args.laser_start_batches,
        laser_duration_batches=args.laser_duration_batches, readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches, warmup_pairs=args.warmup_pairs,
        samples_per_frequency=args.samples_per_frequency, averages=args.averages,
        reset_pulses=args.reset_pulses, timeout_s=args.timeout_s,
    )
    acquisition_completed_at = datetime.now().astimezone().isoformat(timespec="seconds")
    save_and_plot(frequencies_hz, reference_mean, signal_mean, args.output, args.plot,
                  half_duration_batches=args.half_duration_batches,
                  laser_start_batches=args.laser_start_batches,
                  laser_duration_batches=args.laser_duration_batches,
                  readout_delay_batches=args.readout_delay_batches,
                  readout_window_batches=args.readout_window_batches,
                  warmup_pairs=args.warmup_pairs, samples_per_frequency=args.samples_per_frequency,
                  reset_pulses=args.reset_pulses,
                  experiment_metadata={
                      "acquisition_started_at": acquisition_started_at,
                      "acquisition_completed_at": acquisition_completed_at,
                      "platform": m.params.name,
                      "host": args.host,
                      "port": args.port,
                      "timeout_s": args.timeout_s,
                      "mw_amp": args.mw_amp,
                      "mw_amp_code": int(units.amp_to_code(args.mw_amp)),
                  })
    metadata_output = args.output.with_suffix(".json")
    print(f"saved {args.averages} ascending scans of {args.frequency_steps} frequencies; "
          f"{args.samples_per_frequency} pairs/frequency to {args.output}, {metadata_output}, "
          f"and {args.plot}")


if __name__ == "__main__":
    main()
