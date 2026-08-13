"""Stage-3 pulsed-NV spin-contrast integration-window optimization.

At one selected MW frequency, each candidate integration window is measured as
an interleaved no-MW/MW-on pair with identical initialization and readout laser
timing.  The host preserves the signed paired difference ``R_ref - R_sig`` and
ranks windows by ``abs(mean(difference)) / std(difference)``.  This is distinct
from the Stage-1 laser-on/off detector-SNR scan: it optimizes the portion of a
readout transient that discriminates the microwave-driven spin population.
"""

from __future__ import annotations

import argparse
import math
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


SCHEDULE_LEAD = 2_048
DEFAULT_INIT_COUNT = 5
DEFAULT_INIT_PERIOD_BATCHES = 4_096
DEFAULT_SETTLE_BATCHES = 256
DEFAULT_READOUT_DELAY_BATCHES = 256
DEFAULT_LASER_TRIGGER_BATCHES = 19
LASER_HALF_PERIOD = 1
LASER_CW = 1


def _tables(m: SocMap) -> tuple[ParamTable, ParamTable]:
    """Return full-bank DAC0 MW and full-scale zero-Hz demodulator tables."""
    gate_envelope = envelopes.square(m.channel(0).samples_per_line * m.params.env_depth)
    demod_envelope = envelopes.square(m.channel(2).samples_per_line * m.params.env_depth)
    gate = ParamTable(0, 0.0, {"mw": Pulse(gate_envelope, amp=0.0)})
    demod = ParamTable(2, 0.0, {"window": Pulse(demod_envelope, amp=1.0)})
    return gate, demod


@no_type_check
@kernel
def k_spin_contrast_window(gate: ParamTable, demod: ParamTable, out: Array, init_count: int,
                           init_period_batches: int, settle_batches: int,
                           readout_delay_batches: int, laser_duration_batches: int,
                           mw_duration_batches: int, mw_freq_code: int, mw_amp_code: int,
                           window_offset_batches: int, window_batches: int, mw_on: int):
    """One Stage-3 pair member; only the resonant MW pulse changes."""
    init_pulse_params(gate.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_freq(gate, mw_freq_code)  # noqa: F821
    set_amp(gate, gate["mw"], mw_amp_code)  # noqa: F821
    set_dur(gate, gate["mw"], mw_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], window_batches << 16)  # noqa: F821

    init_start = now() + SCHEDULE_LEAD  # noqa: F821
    count = 0
    while count < init_count:
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, init_start)  # noqa: F821
        count += 1
        if count < init_count:
            wait_until(init_start + init_period_batches - SCHEDULE_LEAD)  # noqa: F821
            init_start = now() + SCHEDULE_LEAD  # noqa: F821

    mw_start = init_start + laser_duration_batches + settle_batches
    readout_start = mw_start + mw_duration_batches + readout_delay_batches
    window_start = readout_start + window_offset_batches
    if mw_on != 0:
        play(gate, gate["mw"], mw_start)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_start)  # noqa: F821
    play(demod, demod["window"], window_start)  # noqa: F821
    wait_until(window_start + READOUT_LEAD)  # noqa: F821
    out[0] = mw_start
    out[1] = readout_start
    out[2] = window_start
    out[3] = mw_on
    out[4] = read_res()  # noqa: F821
    out[5] = read_real()  # noqa: F821
    out[6] = read_imag()  # noqa: F821


def build_program(m: SocMap):
    gate, demod = _tables(m)
    return compile_kernel(k_spin_contrast_window, m, tables={"gate": gate, "demod": demod}, out=Array(7))


def _validate(m: SocMap, offsets: list[int], durations: list[int], mw_frequency_hz: float,
              init_count: int, init_period_batches: int, settle_batches: int,
              readout_delay_batches: int, laser_duration_batches: int,
              mw_duration_batches: int, mw_amp: float, pairs: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not math.isfinite(mw_frequency_hz) or mw_frequency_hz <= 0:
        raise ValueError("mw frequency must be positive and finite")
    if not offsets or any(offset < 0 for offset in offsets):
        raise ValueError("window offsets must be non-empty and non-negative")
    max_window = 1 << READOUT_MAX_WIN_LOG2
    if not durations or any(not 1 <= duration <= max_window for duration in durations):
        raise ValueError(f"window durations must be in 1..{max_window} batches")
    if not 0 <= init_count <= 64:
        raise ValueError("init-count must be in 0..64")
    if init_count > 1 and init_period_batches < SCHEDULE_LEAD + laser_duration_batches:
        raise ValueError("init-period-batches must leave one scheduling lead after each laser trigger")
    if settle_batches < 0 or readout_delay_batches < 0 or not 1 <= laser_duration_batches <= 65_535:
        raise ValueError("settle/readout delays must be non-negative and laser duration in 1..65535")
    if not 1 <= mw_duration_batches <= 65_535:
        raise ValueError("mw-duration-batches must be in 1..65535")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if pairs < 2:
        raise ValueError("pairs must be at least 2 to estimate contrast repeatability")


def _s32(value: int) -> int:
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def summarize_contrast(ref: np.ndarray, sig: np.ndarray) -> tuple[np.ndarray, np.ndarray, np.ndarray,
                                                                    np.ndarray, np.ndarray]:
    """Return signed difference, its standard deviation, SNR, contrast, and contrast SEM.

    ``ref`` and ``sig`` are shaped ``(offset, duration, pair)`` and paired in
    their final dimension.  The SNR follows the calibration note exactly:
    ``abs(mean(R_ref - R_sig)) / std(R_ref - R_sig)``.
    """
    difference = ref - sig
    difference_mean = difference.mean(axis=-1)
    difference_std = difference.std(axis=-1, ddof=1)
    snr = np.divide(np.abs(difference_mean), difference_std,
                    out=np.full_like(difference_mean, np.nan, dtype=float), where=difference_std > 0)
    reference_mean = ref.mean(axis=-1)
    contrast = np.divide(difference_mean, reference_mean,
                         out=np.full_like(difference_mean, np.nan, dtype=float), where=reference_mean != 0)
    contrast_sem = np.divide(difference_std / np.sqrt(difference.shape[-1]), np.abs(reference_mean),
                             out=np.full_like(difference_mean, np.nan, dtype=float), where=reference_mean != 0)
    return difference_mean, difference_std, snr, contrast, contrast_sem


def _best_index(snr: np.ndarray) -> tuple[int, int]:
    """Return the ``(offset_index, duration_index)`` with greatest finite contrast SNR."""
    if not np.isfinite(snr).any():
        return 0, 0
    return tuple(int(index) for index in np.unravel_index(np.nanargmax(snr), snr.shape))


def _display_grid(values: np.ndarray) -> np.ndarray:
    """Convert stored ``(offset, duration)`` data to image ``(duration, offset)`` axes."""
    return values.T


def acquire_scan(host: str, offsets: list[int], durations: list[int], *, mw_frequency_hz: float,
                 mw_amp: float, port: int = 9091, init_count: int = DEFAULT_INIT_COUNT,
                 init_period_batches: int = DEFAULT_INIT_PERIOD_BATCHES,
                 settle_batches: int = DEFAULT_SETTLE_BATCHES,
                 readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 mw_duration_batches: int = 64, pairs: int = 16,
                 timeout_s: float = 2.0) -> tuple[SocMap, np.ndarray, np.ndarray]:
    """Return paired ``(R_ref, R_sig)`` arrays shaped ``(offset, duration, pair)``."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, offsets, durations, mw_frequency_hz, init_count, init_period_batches,
                  settle_batches, readout_delay_batches, laser_duration_batches,
                  mw_duration_batches, mw_amp, pairs)
        program = build_program(m)
        shared = {
            "init_count": init_count,
            "init_period_batches": init_period_batches,
            "settle_batches": settle_batches,
            "readout_delay_batches": readout_delay_batches,
            "laser_duration_batches": laser_duration_batches,
            "mw_duration_batches": mw_duration_batches,
            "mw_freq_code": units.freq_to_code(mw_frequency_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp),
        }
        ref = np.empty((len(offsets), len(durations), pairs), dtype=np.int64)
        sig = np.empty_like(ref)
        run.setup(drv, m, {0: program})
        for oi, offset in enumerate(offsets):
            for di, duration in enumerate(durations):
                candidate = {**shared, "window_offset_batches": offset, "window_batches": duration}
                for pair in range(pairs):
                    for mw_on, destination in ((0, ref), (1, sig)):
                        result = run.rerun(
                            drv, m, {0: program}, params={0: {**candidate, "mw_on": mw_on}},
                            results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                        )[0]["out"]
                        destination[oi, di, pair] = _s32(int(result[5]))
        return m, ref, sig
    finally:
        drv.close()


def save_and_plot(m: SocMap, offsets: list[int], durations: list[int], ref: np.ndarray, sig: np.ndarray,
                  output: Path, plot: Path, *, mw_frequency_hz: float, mw_amp: float,
                  init_count: int, init_period_batches: int, settle_batches: int,
                  readout_delay_batches: int, laser_duration_batches: int,
                  mw_duration_batches: int) -> tuple[int, int]:
    """Save every paired integral and plot signed spin contrast plus its paired SNR."""
    difference_mean, difference_std, snr, contrast, contrast_sem = summarize_contrast(ref, sig)
    np.savez(
        output,
        offsets_batches=np.asarray(offsets),
        durations_batches=np.asarray(durations),
        reference=ref,
        signal=sig,
        difference=ref - sig,
        reference_mean=ref.mean(axis=-1),
        signal_mean=sig.mean(axis=-1),
        difference_mean=difference_mean,
        difference_std=difference_std,
        contrast=contrast,
        contrast_sem=contrast_sem,
        contrast_snr=snr,
        dsp_freq_hz=m.params.dsp_freq_hz,
        mw_frequency_hz=mw_frequency_hz,
        mw_amp=mw_amp,
        pairs=ref.shape[-1],
        init_count=init_count,
        init_period_batches=init_period_batches,
        settle_batches=settle_batches,
        readout_delay_batches=readout_delay_batches,
        laser_duration_batches=laser_duration_batches,
        mw_duration_batches=mw_duration_batches,
    )
    best = _best_index(snr)
    try:
        import matplotlib.pyplot as plt
        from matplotlib.colors import TwoSlopeNorm
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, axes = plt.subplots(1, 2, figsize=(10, 4), layout="constrained")
    response_limit = max(float(np.max(np.abs(difference_mean))), 1.0)
    tick_step = max(1, math.ceil(len(offsets) / 8))
    tick_indices = list(range(0, len(offsets), tick_step))
    if tick_indices[-1] != len(offsets) - 1:
        tick_indices.append(len(offsets) - 1)
    for ax, data, title, label, image_kwargs in (
        (axes[0], difference_mean, "signed spin contrast", "mean R_ref − R_sig (integrator units)",
         {"cmap": "coolwarm", "norm": TwoSlopeNorm(vmin=-response_limit, vcenter=0,
                                                        vmax=response_limit)}),
        (axes[1], snr, "spin-contrast repeatability", "abs(mean difference) / sample std",
         {"cmap": "viridis", "vmin": 0}),
    ):
        image = ax.imshow(_display_grid(data), origin="lower", aspect="auto", **image_kwargs)
        ax.set(title=title, xlabel="window offset from readout laser trigger (DSP batches)",
               ylabel="window duration (DSP batches)")
        ax.set_xticks(tick_indices, [offsets[i] for i in tick_indices], rotation=45, ha="right")
        ax.set_yticks(range(len(durations)), durations)
        fig.colorbar(image, ax=ax, label=label)
    axes[1].plot(best[0], best[1], "wo", markerfacecolor="none", markersize=10, markeredgewidth=2)
    fig.suptitle(f"Pulsed NV spin-contrast window scan at {mw_frequency_hz / 1e9:.9g} GHz")
    fig.savefig(plot, dpi=160)
    plt.close(fig)
    return int(offsets[best[0]]), int(durations[best[1]])


def _inclusive_range(start: int, end: int, step: int, name: str) -> list[int]:
    """Build ``start, start + step, ... <= end`` with clear CLI errors."""
    if step <= 0:
        raise ValueError(f"{name} step must be positive")
    if end < start:
        raise ValueError(f"{name} end must be greater than or equal to start")
    return list(range(start, end + 1, step))


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--mw-frequency-hz", required=True, type=float,
                        help="fixed candidate f_ESR for the MW-on shot")
    parser.add_argument("--mw-amp", required=True, type=float,
                        help="reviewed DAC0 amplitude fraction in [-1, 1]")
    parser.add_argument("--mw-duration-batches", type=int, default=64)
    parser.add_argument("--offset-start-batches", type=int, required=True)
    parser.add_argument("--offset-end-batches", type=int, required=True)
    parser.add_argument("--offset-step-batches", type=int, default=1)
    parser.add_argument("--duration-start-batches", type=int, required=True)
    parser.add_argument("--duration-end-batches", type=int, required=True)
    parser.add_argument("--duration-step-batches", type=int, default=1)
    parser.add_argument("--init-count", type=int, default=DEFAULT_INIT_COUNT)
    parser.add_argument("--init-period-batches", type=int, default=DEFAULT_INIT_PERIOD_BATCHES)
    parser.add_argument("--settle-batches", type=int, default=DEFAULT_SETTLE_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--pairs", type=int, default=16)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_spin_contrast_window_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_spin_contrast_window_{formatted_time}.png"))
    args = parser.parse_args(argv)
    try:
        offsets = _inclusive_range(args.offset_start_batches, args.offset_end_batches,
                                   args.offset_step_batches, "offset")
        durations = _inclusive_range(args.duration_start_batches, args.duration_end_batches,
                                     args.duration_step_batches, "duration")
    except ValueError as exc:
        parser.error(str(exc))
    m, ref, sig = acquire_scan(
        args.host, offsets, durations, mw_frequency_hz=args.mw_frequency_hz, mw_amp=args.mw_amp,
        port=args.port, init_count=args.init_count, init_period_batches=args.init_period_batches,
        settle_batches=args.settle_batches, readout_delay_batches=args.readout_delay_batches,
        laser_duration_batches=args.laser_duration_batches,
        mw_duration_batches=args.mw_duration_batches, pairs=args.pairs, timeout_s=args.timeout_s,
    )
    offset, duration = save_and_plot(
        m, offsets, durations, ref, sig, args.output, args.plot,
        mw_frequency_hz=args.mw_frequency_hz, mw_amp=args.mw_amp,
        init_count=args.init_count, init_period_batches=args.init_period_batches,
        settle_batches=args.settle_batches, readout_delay_batches=args.readout_delay_batches,
        laser_duration_batches=args.laser_duration_batches,
        mw_duration_batches=args.mw_duration_batches,
    )
    print(f"saved spin-contrast window scan to {args.output} and {args.plot}; "
          f"best contrast SNR at offset={offset}, duration={duration} DSP batches")


if __name__ == "__main__":
    main()
