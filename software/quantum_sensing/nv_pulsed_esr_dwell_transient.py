"""Measure the shot-by-shot transient after alternating MW-frequency dwells.

One resident RV32 kernel alternates detuned and resonant frequency groups.  A
group contains consecutive qdSpectro-style half-MW pairs: MW-on signal then
MW-off reference.  The first recorded group is preceded by an unrecorded
frequency transition, so every recorded group follows a real switch.
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
from riscq.pulses import Pulse, envelopes, units

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
)


DEFAULT_DETUNED_HZ = 2.800e9
DEFAULT_RESONANT_HZ = 2.875e9
DEFAULT_PAIRS_PER_GROUP = 64
DEFAULT_GROUPS_PER_FREQUENCY = 100
DEFAULT_AVERAGES = 10
MAX_PAIRS_PER_GROUP = 256
MAX_GROUPS_PER_FREQUENCY = 500
MAX_AVERAGES = 1_000


def _tables(m: SocMap) -> tuple[ParamTable, ParamTable]:
    mw_envelope = envelopes.square(m.channel(0).samples_per_line * m.params.env_depth)
    demod_envelope = envelopes.square(m.channel(2).samples_per_line * m.params.env_depth)
    return (ParamTable(0, 0.0, {"mw": Pulse(mw_envelope, amp=0.0)}),
            ParamTable(2, 0.0, {"window": Pulse(demod_envelope, amp=1.0)}))


@no_type_check
@kernel
def k_pulsed_esr_dwell_transient(mw: ParamTable, demod: ParamTable, out: Array,
                                 half_duration_batches: int, laser_start_batches: int,
                                 laser_duration_batches: int, readout_delay_batches: int,
                                 readout_window_batches: int, detuned_freq_code: int,
                                 resonant_freq_code: int, mw_amp_code: int,
                                 pairs_per_group: int, groups_per_frequency: int):
    """Accumulate each pair position separately after each frequency switch."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_dur(mw, mw["mw"], half_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821

    # Four contiguous banks, each indexed by pair position.
    index = 0
    while index < 4 * pairs_per_group:
        out[index] = 0
        index += 1

    # Group zero is a complete unrecorded detuned dwell.  It conditions the
    # first recorded (resonant) group, so no recorded trajectory begins with
    # a bare register write instead of an opposite-frequency dwell.
    group = 0
    while group < 1 + 2 * groups_per_frequency:
        is_resonant = group & 1
        if is_resonant:
            set_freq(mw, resonant_freq_code)  # noqa: F821
        else:
            set_freq(mw, detuned_freq_code)  # noqa: F821

        # Prime positions 0 and 1.  Later iterations refill position p + 2
        # before draining p, keeping the depth-four laser/readout queues on
        # one absolute, gap-free grid.
        pair = 0
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
        if pair + 1 < pairs_per_group:
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
        while pair < pairs_per_group:
            wait_until(signal_window + READOUT_LEAD)  # noqa: F821
            read_res()  # noqa: F821
            signal = read_real()  # noqa: F821
            read_imag()  # noqa: F821
            wait_until(reference_window + READOUT_LEAD)  # noqa: F821
            read_res()  # noqa: F821
            reference = read_real()  # noqa: F821
            read_imag()  # noqa: F821
            if group > 0:
                if is_resonant:
                    out[2 * pairs_per_group + pair] = out[2 * pairs_per_group + pair] + signal
                    out[3 * pairs_per_group + pair] = out[3 * pairs_per_group + pair] + reference
                else:
                    out[pair] = out[pair] + signal
                    out[pairs_per_group + pair] = out[pairs_per_group + pair] + reference
            next_pair = pair + 2
            if next_pair < pairs_per_group:
                next_signal_start = signal_start + 4 * half_duration_batches
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
            signal_start += 2 * half_duration_batches
            reference_start = signal_start + half_duration_batches
            signal_laser = signal_start + laser_start_batches
            reference_laser = reference_start + laser_start_batches
            signal_window = signal_laser + readout_delay_batches
            reference_window = reference_laser + readout_delay_batches

        # This is the only intentional idle time: it separates groups while
        # the next set_freq command is applied.  There is no within-group gap.
        wait_until(signal_start)  # noqa: F821
        group += 1


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(k_pulsed_esr_dwell_transient, m, tables={"mw": mw, "demod": demod},
                          out=Array(4 * MAX_PAIRS_PER_GROUP))


def _validate(m: SocMap, *, detuned_hz: float, resonant_hz: float, mw_amp: float,
              half_duration_batches: int, laser_start_batches: int,
              laser_duration_batches: int, readout_delay_batches: int,
              readout_window_batches: int, pairs_per_group: int,
              groups_per_frequency: int, averages: int = 1) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not all(math.isfinite(x) and x > 0 for x in (detuned_hz, resonant_hz)) or detuned_hz == resonant_hz:
        raise ValueError("detuned-hz and resonant-hz must be distinct positive finite values")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= half_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("half-duration-batches must be in 1..65535")
    if laser_start_batches < 0 or laser_start_batches + laser_duration_batches > half_duration_batches:
        raise ValueError("laser start and duration must fit within one half")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window must be within the decoder limit")
    if readout_delay_batches < 0 or laser_start_batches + readout_delay_batches + readout_window_batches > half_duration_batches:
        raise ValueError("readout delay and duration after the laser must fit within one half")
    if not 1 <= pairs_per_group <= MAX_PAIRS_PER_GROUP:
        raise ValueError(f"pairs-per-group must be in 1..{MAX_PAIRS_PER_GROUP}")
    if not 1 <= groups_per_frequency <= MAX_GROUPS_PER_FREQUENCY:
        raise ValueError(f"groups-per-frequency must be in 1..{MAX_GROUPS_PER_FREQUENCY}")
    if not 1 <= averages <= MAX_AVERAGES:
        raise ValueError(f"averages must be in 1..{MAX_AVERAGES}")


def _s32(values: np.ndarray) -> np.ndarray:
    unsigned = np.asarray(values, dtype=np.uint64) & np.uint64(0xFFFF_FFFF)
    return unsigned.astype(np.int64) - ((unsigned >> 31).astype(np.int64) << 32)


def unpack_trajectories(out: np.ndarray, pairs_per_group: int,
                        groups_per_frequency: int) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Return signal, reference, and positive contrast as ``(detuned, resonant)`` rows."""
    raw = _s32(np.asarray(out))
    if raw.ndim != 1 or raw.size < 4 * pairs_per_group:
        raise ValueError("kernel output is too short for pairs-per-group")
    means = raw[:4 * pairs_per_group].reshape(4, pairs_per_group) / groups_per_frequency
    signal = means[[0, 2]]
    reference = means[[1, 3]]
    contrast = 1.0 - np.divide(signal, reference, out=np.full_like(signal, np.nan), where=reference != 0)
    return signal, reference, contrast


def summarize_runs(signal_runs: np.ndarray, reference_runs: np.ndarray,
                   contrast_runs: np.ndarray) -> tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray, np.ndarray, np.ndarray]:
    """Return run means/SEMs and resonant-minus-detuned contrast effect."""
    signal_runs, reference_runs, contrast_runs = (np.asarray(x, dtype=float) for x in
                                                   (signal_runs, reference_runs, contrast_runs))
    if signal_runs.ndim != 3 or reference_runs.shape != signal_runs.shape or contrast_runs.shape != signal_runs.shape:
        raise ValueError("run arrays must share shape (averages, 2, pairs-per-group)")
    signal_mean = signal_runs.mean(axis=0)
    reference_mean = reference_runs.mean(axis=0)
    contrast_mean = contrast_runs.mean(axis=0)
    if signal_runs.shape[0] == 1:
        nan = np.full(signal_mean.shape, np.nan)
        return signal_mean, nan, reference_mean, nan.copy(), contrast_mean, nan.copy()
    divisor = math.sqrt(signal_runs.shape[0])
    return (signal_mean, signal_runs.std(axis=0, ddof=1) / divisor,
            reference_mean, reference_runs.std(axis=0, ddof=1) / divisor,
            contrast_mean, contrast_runs.std(axis=0, ddof=1) / divisor)


def acquire(host: str, *, port: int = 9091, detuned_hz: float = DEFAULT_DETUNED_HZ,
            resonant_hz: float = DEFAULT_RESONANT_HZ, mw_amp: float | None = None,
            half_duration_batches: int = DEFAULT_HALF_DURATION_BATCHES,
            laser_start_batches: int = DEFAULT_LASER_START_BATCHES,
            laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
            readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
            readout_window_batches: int = DEFAULT_READOUT_WINDOW_BATCHES,
            pairs_per_group: int = DEFAULT_PAIRS_PER_GROUP,
            groups_per_frequency: int = DEFAULT_GROUPS_PER_FREQUENCY,
            averages: int = DEFAULT_AVERAGES,
            timeout_s: float = 10.0) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Run one resident alternation experiment and return position trajectories."""
    if not host.strip():
        raise ValueError("host must be non-empty (set BOARD_IP or pass --host explicitly)")
    if mw_amp is None:
        raise ValueError("mw-amp is required: choose a reviewed DAC0 amplitude for your MW chain")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, detuned_hz=detuned_hz, resonant_hz=resonant_hz, mw_amp=mw_amp,
                  half_duration_batches=half_duration_batches, laser_start_batches=laser_start_batches,
                  laser_duration_batches=laser_duration_batches, readout_delay_batches=readout_delay_batches,
                  readout_window_batches=readout_window_batches, pairs_per_group=pairs_per_group,
                  groups_per_frequency=groups_per_frequency, averages=averages)
        program = build_program(m)
        run.setup(drv, m, {0: program})
        params = {0: {
            "half_duration_batches": half_duration_batches, "laser_start_batches": laser_start_batches,
            "laser_duration_batches": laser_duration_batches, "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "detuned_freq_code": units.freq_to_code(detuned_hz, m.params),
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp), "pairs_per_group": pairs_per_group,
            "groups_per_frequency": groups_per_frequency,
        }}
        signal_runs = np.empty((averages, 2, pairs_per_group), dtype=float)
        reference_runs = np.empty_like(signal_runs)
        contrast_runs = np.empty_like(signal_runs)
        for average in range(averages):
            result = run.rerun(drv, m, {0: program}, params=params, results=["out"],
                               timeout=max(1, math.ceil(timeout_s * 1000)))[0]["out"]
            signal_runs[average], reference_runs[average], contrast_runs[average] = unpack_trajectories(
                np.asarray(result), pairs_per_group, groups_per_frequency)
        return signal_runs, reference_runs, contrast_runs
    finally:
        drv.close()


def save_and_plot(signal_runs: np.ndarray, reference_runs: np.ndarray, contrast_runs: np.ndarray, output: Path,
                  plot: Path, *, detuned_hz: float, resonant_hz: float,
                  pairs_per_group: int, groups_per_frequency: int, mw_amp: float) -> None:
    """Save position-resolved trajectories and plot both frequencies plus differential."""
    signal_mean, signal_sem, reference_mean, reference_sem, contrast_mean, contrast_sem = summarize_runs(
        signal_runs, reference_runs, contrast_runs)
    if signal_mean.shape != (2, pairs_per_group):
        raise ValueError("trajectory arrays must have shape (averages, 2, pairs-per-group)")
    differential = contrast_mean[1] - contrast_mean[0]
    differential_runs = np.asarray(contrast_runs, dtype=float)[:, 1] - np.asarray(contrast_runs, dtype=float)[:, 0]
    differential_sem = (np.full(pairs_per_group, np.nan) if differential_runs.shape[0] == 1 else
                        differential_runs.std(axis=0, ddof=1) / math.sqrt(differential_runs.shape[0]))
    signal_frequency_effect_runs = np.asarray(signal_runs, dtype=float)[:, 1] - np.asarray(signal_runs, dtype=float)[:, 0]
    reference_frequency_effect_runs = (np.asarray(reference_runs, dtype=float)[:, 1] -
                                       np.asarray(reference_runs, dtype=float)[:, 0])
    signal_frequency_effect = signal_frequency_effect_runs.mean(axis=0)
    reference_frequency_effect = reference_frequency_effect_runs.mean(axis=0)
    if signal_frequency_effect_runs.shape[0] == 1:
        signal_frequency_effect_sem = np.full(pairs_per_group, np.nan)
        reference_frequency_effect_sem = np.full(pairs_per_group, np.nan)
    else:
        divisor = math.sqrt(signal_frequency_effect_runs.shape[0])
        signal_frequency_effect_sem = signal_frequency_effect_runs.std(axis=0, ddof=1) / divisor
        reference_frequency_effect_sem = reference_frequency_effect_runs.std(axis=0, ddof=1) / divisor
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(output, signal_runs=signal_runs, reference_runs=reference_runs, positive_contrast_runs=contrast_runs,
             signal_mean=signal_mean, signal_sem=signal_sem, reference_mean=reference_mean,
             reference_sem=reference_sem, positive_contrast=contrast_mean, positive_contrast_sem=contrast_sem,
             signal_frequency_effect_resonant_minus_detuned=signal_frequency_effect,
             signal_frequency_effect_resonant_minus_detuned_sem=signal_frequency_effect_sem,
             reference_frequency_effect_resonant_minus_detuned=reference_frequency_effect,
             reference_frequency_effect_resonant_minus_detuned_sem=reference_frequency_effect_sem,
             contrast_difference_resonant_minus_detuned=differential,
             contrast_difference_resonant_minus_detuned_sem=differential_sem, detuned_hz=detuned_hz,
             resonant_hz=resonant_hz, pairs_per_group=pairs_per_group,
             groups_per_frequency=groups_per_frequency, mw_amp=mw_amp,
             half_duration_batches=DEFAULT_HALF_DURATION_BATCHES,
             laser_start_batches=DEFAULT_LASER_START_BATCHES,
             readout_delay_batches=DEFAULT_READOUT_DELAY_BATCHES,
             readout_window_batches=DEFAULT_READOUT_WINDOW_BATCHES)
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    position = np.arange(1, pairs_per_group + 1)
    fig, (ax_fluorescence, ax_effect, ax_contrast) = plt.subplots(
        3, 1, sharex=True, layout="constrained", figsize=(9, 10),
    )
    for row, label in enumerate((f"detuned {detuned_hz / 1e9:.6g} GHz", f"resonant {resonant_hz / 1e9:.6g} GHz")):
        ax_fluorescence.plot(position, signal_mean[row], ".-", label=f"{label}, MW on")
        ax_fluorescence.plot(position, reference_mean[row], ".--", alpha=0.7, label=f"{label}, MW off")
        ax_contrast.plot(position, contrast_mean[row], ".-", label=label)
        ax_contrast.fill_between(position, contrast_mean[row] - contrast_sem[row], contrast_mean[row] + contrast_sem[row], alpha=0.15)
    ax_fluorescence.set(ylabel="mean ADC code", title="Fluorescence after each frequency switch")
    ax_fluorescence.grid(True, alpha=0.3)
    ax_fluorescence.legend(fontsize="small", ncol=2)
    ax_effect.plot(position, signal_frequency_effect, ".-", label="MW-on signal")
    ax_effect.fill_between(position, signal_frequency_effect - signal_frequency_effect_sem,
                           signal_frequency_effect + signal_frequency_effect_sem, alpha=0.15)
    ax_effect.plot(position, reference_frequency_effect, ".-", label="MW-off reference")
    ax_effect.fill_between(position, reference_frequency_effect - reference_frequency_effect_sem,
                           reference_frequency_effect + reference_frequency_effect_sem, alpha=0.15)
    ax_effect.axhline(0.0, color="black", linewidth=0.8)
    ax_effect.set(ylabel="resonant - detuned (ADC code)",
                  title="Raw frequency effect after each switch")
    ax_effect.grid(True, alpha=0.3)
    ax_effect.legend()
    ax_contrast.plot(position, differential, "k.-", label="resonant - detuned")
    ax_contrast.axhline(0.0, color="black", linewidth=0.8)
    ax_contrast.set(xlabel="pair number after switch", ylabel="positive contrast",
                    title="Position-resolved contrast differential")
    ax_contrast.grid(True, alpha=0.3)
    ax_contrast.legend()
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--detuned-hz", type=float, default=DEFAULT_DETUNED_HZ)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--pairs-per-group", type=int, default=DEFAULT_PAIRS_PER_GROUP)
    parser.add_argument("--groups-per-frequency", type=int, default=DEFAULT_GROUPS_PER_FREQUENCY)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path, default=Path(f"data/esr/nv_pulsed_esr_dwell_transient_{timestamp}.npz"))
    parser.add_argument("--plot", type=Path, default=Path(f"data/esr/nv_pulsed_esr_dwell_transient_{timestamp}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    signal_runs, reference_runs, contrast_runs = acquire(args.host, port=args.port, detuned_hz=args.detuned_hz,
                                           resonant_hz=args.resonant_hz, mw_amp=args.mw_amp,
                                           pairs_per_group=args.pairs_per_group,
                                           groups_per_frequency=args.groups_per_frequency,
                                           averages=args.averages,
                                           timeout_s=args.timeout_s)
    save_and_plot(signal_runs, reference_runs, contrast_runs, args.output, args.plot, detuned_hz=args.detuned_hz,
                  resonant_hz=args.resonant_hz, pairs_per_group=args.pairs_per_group,
                  groups_per_frequency=args.groups_per_frequency, mw_amp=args.mw_amp)
    print(f"saved {args.averages} runs of {2 * args.groups_per_frequency} switched groups with {args.pairs_per_group} pairs/group to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
