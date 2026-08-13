"""Stage-1 pulsed-NV local validation of the production zero-Hz integrator.

For every requested window offset and duration, this runs interleaved laser-off
and laser-on shots, then scores the signed difference in ``read_real()``.  The
laser trigger timing matches Stage 0; the offset is measured from its rising
edge.  Unlike ``robs``, this exercises the demodulator/integrator path used by
later ESR experiments.
"""

from __future__ import annotations

import argparse
import math
from pathlib import Path
from typing import no_type_check

from datetime import datetime
import time

import numpy as np

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD, READOUT_MAX_WIN_LOG2, SocMap, SocParams
from riscq.pulses import Pulse, envelopes


SCHEDULE_LEAD = 2_048
DEFAULT_LASER_DELAY_BATCHES = 96
DEFAULT_LASER_TRIGGER_BATCHES = 19
LASER_HALF_PERIOD = 1
LASER_CW = 1


def demod_table(m: SocMap) -> ParamTable:
    """One zero-Hz, full-scale demod carrier; runtime duration selects each window."""
    return ParamTable(2, 0.0, {"window": Pulse(envelopes.square(m.params.env_depth), amp=1.0)})


@no_type_check
@kernel
def k_integrate_window(demod: ParamTable, out: Array, laser_delay_batches: int,
                       laser_duration_batches: int, window_offset_batches: int,
                       window_batches: int, laser_on: int):
    """One paired-shot member with an optional laser trigger and zero-Hz window."""
    init_pulse_params(demod.pulses)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], window_batches << 16)  # noqa: F821
    shot_start = now() + SCHEDULE_LEAD  # noqa: F821
    laser_start = shot_start + laser_delay_batches
    window_start = laser_start + window_offset_batches
    if laser_on != 0:
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, laser_start)  # noqa: F821
    play(demod, demod["window"], window_start)  # noqa: F821
    wait_until(window_start + READOUT_LEAD)  # noqa: F821
    out[0] = shot_start
    out[1] = laser_start
    out[2] = window_start
    out[3] = read_res()  # noqa: F821
    out[4] = read_real()  # noqa: F821
    out[5] = read_imag()  # noqa: F821


def build_program(m: SocMap):
    return compile_kernel(k_integrate_window, m, tables={"demod": demod_table(m)}, out=Array(6))


def _validate(m: SocMap, offsets: list[int], durations: list[int], laser_delay_batches: int,
              laser_duration_batches: int, pairs: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not offsets or any(offset < 0 for offset in offsets):
        raise ValueError("window offsets must be non-empty and non-negative")
    max_window = 1 << READOUT_MAX_WIN_LOG2
    if not durations or any(not 1 <= duration <= max_window for duration in durations):
        raise ValueError(f"window durations must be in 1..{max_window} batches")
    if laser_delay_batches < 0 or not 1 <= laser_duration_batches <= 65_535:
        raise ValueError("laser timing must have non-negative delay and duration in 1..65535")
    if pairs < 2:
        raise ValueError("pairs must be at least 2 to estimate repeatability")


def _s32(value: int) -> int:
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def summarize_differences(differences: np.ndarray) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Return signed mean, sample standard deviation, and ``abs(mean)/std`` for a scan cube."""
    mean = differences.mean(axis=-1)
    std = differences.std(axis=-1, ddof=1)
    snr = np.divide(np.abs(mean), std, out=np.full_like(mean, np.nan, dtype=float), where=std > 0)
    return mean, std, snr


def _best_index(snr: np.ndarray) -> tuple[int, int]:
    """Return the ``(offset_index, duration_index)`` with greatest finite SNR."""
    if not np.isfinite(snr).any():
        return 0, 0
    return tuple(int(index) for index in np.unravel_index(np.nanargmax(snr), snr.shape))


def _display_grid(values: np.ndarray) -> np.ndarray:
    """Convert stored ``(offset, duration)`` data to image ``(duration, offset)`` axes."""
    return values.T


def acquire_scan(host: str, offsets: list[int], durations: list[int], port: int = 9091,
                 laser_delay_batches: int = DEFAULT_LASER_DELAY_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES, pairs: int = 16,
                 timeout_s: float = 2.0) -> tuple[SocMap, np.ndarray]:
    """Return signed ``R_on - R_off`` differences shaped ``(offset, duration, pair)``."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, offsets, durations, laser_delay_batches, laser_duration_batches, pairs)
        program = build_program(m)
        shared = {"laser_delay_batches": laser_delay_batches,
                  "laser_duration_batches": laser_duration_batches}
        differences = np.empty((len(offsets), len(durations), pairs), dtype=np.int64)
        run.setup(drv, m, {0: program})
        for oi, offset in enumerate(offsets):
            for di, duration in enumerate(durations):
                candidate = {**shared, "window_offset_batches": offset, "window_batches": duration}
                for pair in range(pairs):
                    values = []
                    for laser_on in (0, 1):
                        result = run.rerun(
                            drv, m, {0: program}, params={0: {**candidate, "laser_on": laser_on}},
                            results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                        )[0]["out"]
                        values.append(_s32(int(result[4])))
                    differences[oi, di, pair] = values[1] - values[0]
        return m, differences
    finally:
        drv.close()


def save_and_plot(m: SocMap, offsets: list[int], durations: list[int], differences: np.ndarray,
                  output: Path, plot: Path) -> tuple[int, int]:
    """Save all paired results and a two-panel signed-response/SNR local scan plot."""
    mean, std, snr = summarize_differences(differences)
    np.savez(output, offsets_batches=np.asarray(offsets), durations_batches=np.asarray(durations),
             differences=differences, mean=mean, std=std, snr=snr, dsp_freq_hz=m.params.dsp_freq_hz)
    # A perfectly repeatable zero response has std=0 everywhere, so every SNR
    # is undefined; still save and plot that useful null result without failing.
    best = _best_index(snr)
    try:
        import matplotlib.pyplot as plt
        from matplotlib.colors import TwoSlopeNorm
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, axes = plt.subplots(1, 2, figsize=(10, 4), layout="constrained")
    response_limit = max(float(np.max(np.abs(mean))), 1.0)
    tick_step = max(1, math.ceil(len(offsets) / 8))
    tick_indices = list(range(0, len(offsets), tick_step))
    if tick_indices[-1] != len(offsets) - 1:
        tick_indices.append(len(offsets) - 1)
    for ax, data, title, label, image_kwargs in (
        (axes[0], mean, "signed detector response", "mean R_on − R_off (integrator units)",
         {"cmap": "coolwarm", "norm": TwoSlopeNorm(vmin=-response_limit, vcenter=0,
                                                        vmax=response_limit)}),
        (axes[1], snr, "detector repeatability", "abs(mean) / sample std",
         {"cmap": "viridis", "vmin": 0}),
    ):
        image = ax.imshow(_display_grid(data), origin="lower", aspect="auto", **image_kwargs)
        ax.set(title=title, xlabel="window offset from laser trigger (DSP batches)",
               ylabel="window duration (DSP batches)")
        ax.set_xticks(
            tick_indices,
            [offsets[i] for i in tick_indices],
            rotation=45,
            ha="right",
        )

        ax.set_yticks(range(len(durations)), durations)
        fig.colorbar(image, ax=ax, label=label)
    # Image x is offset and y is duration after _display_grid's transpose.
    axes[1].plot(best[0], best[1], "wo", markerfacecolor="none", markersize=10, markeredgewidth=2)
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
    ts = time.time()
    formatted_time = datetime.fromtimestamp(ts).strftime('%Y-%m-%d_%H_%M')
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--offset-start-batches", type=int, required=True,
                        help="first window offset from the laser trigger")
    parser.add_argument("--offset-end-batches", type=int, required=True,
                        help="last allowed window offset from the laser trigger")
    parser.add_argument("--offset-step-batches", type=int, default=1,
                        help="offset increment (default: 1 DSP batch)")
    parser.add_argument("--duration-start-batches", type=int, required=True,
                        help="first integration-window duration")
    parser.add_argument("--duration-end-batches", type=int, required=True,
                        help="last allowed integration-window duration")
    parser.add_argument("--duration-step-batches", type=int, default=1,
                        help="duration increment (default: 1 DSP batch)")
    parser.add_argument("--laser-delay-batches", type=int, default=DEFAULT_LASER_DELAY_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--pairs", type=int, default=16)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path, default=Path(f"data/nv_integrator_window_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path, default=Path(f"data/nv_integrator_window_{formatted_time}.png"))
    args = parser.parse_args(argv)
    try:
        offsets = _inclusive_range(args.offset_start_batches, args.offset_end_batches,
                                   args.offset_step_batches, "offset")
        durations = _inclusive_range(args.duration_start_batches, args.duration_end_batches,
                                     args.duration_step_batches, "duration")
    except ValueError as exc:
        parser.error(str(exc))
    m, differences = acquire_scan(args.host, offsets, durations, args.port,
                                  args.laser_delay_batches, args.laser_duration_batches,
                                  args.pairs, args.timeout_s)
    offset, duration = save_and_plot(m, offsets, durations, differences, args.output, args.plot)
    print(f"saved local integrator scan to {args.output} and {args.plot}; "
          f"best measured SNR at offset={offset}, duration={duration} DSP batches")


if __name__ == "__main__":
    main()
