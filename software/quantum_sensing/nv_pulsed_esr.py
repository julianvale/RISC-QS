"""Stage-2 coarse pulsed-ESR scan using the Stage-1 integrator window.

Each frequency point interleaves a no-MW reference and a DAC0 MW signal shot.
Both contain the same initialization laser-trigger train, settling time, readout
trigger, and zero-Hz integration window.  The host reports the signed normalized
contrast ``(R_ref - R_sig) / R_ref``; it does not maximize raw fluorescence.
"""

from __future__ import annotations

import argparse
import math
from pathlib import Path
from typing import no_type_check

import numpy as np

from datetime import datetime
import time

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
    """DAC0 MW drive and a full-scale zero-Hz demodulator, both runtime-programmed.

    Gate DAC0 stores four envelope samples per batch, while the demodulator
    stores one.  Build a full bank for each channel so a runtime duration can
    read every batch from initialized memory instead of falling into stale or
    zero envelope lines after the first 256 gate batches.
    """
    gate_envelope = envelopes.square(m.channel(0).samples_per_line * m.params.env_depth)
    demod_envelope = envelopes.square(m.channel(2).samples_per_line * m.params.env_depth)
    gate = ParamTable(0, 0.0, {"mw": Pulse(gate_envelope, amp=0.0)})
    demod = ParamTable(2, 0.0, {"window": Pulse(demod_envelope, amp=1.0)})
    return gate, demod


@no_type_check
@kernel
def k_pulsed_esr(gate: ParamTable, demod: ParamTable, out: Array, init_count: int,
                 init_period_batches: int, settle_batches: int, readout_delay_batches: int,
                 laser_duration_batches: int, mw_duration_batches: int, mw_freq_code: int,
                 mw_amp_code: int, window_offset_batches: int, window_batches: int, mw_on: int):
    """One frequency-point pair member; only ``mw_on`` differs between reference and signal."""
    init_pulse_params(gate.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_freq(gate, mw_freq_code)  # noqa: F821
    set_amp(gate, gate["mw"], mw_amp_code)  # noqa: F821
    set_dur(gate, gate["mw"], mw_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], window_batches << 16)  # noqa: F821

    # Schedule at most one future laser event at once.  Waiting until one lead
    # before the next trigger lets a five-pulse train retain its requested period
    # without overflowing the laser TimedQueue (depth four).
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
    return compile_kernel(k_pulsed_esr, m, tables={"gate": gate, "demod": demod}, out=Array(7))


def _validate(m: SocMap, frequencies_hz: list[float], init_count: int, init_period_batches: int,
              settle_batches: int, readout_delay_batches: int, laser_duration_batches: int,
              mw_duration_batches: int, mw_amp: float, window_offset_batches: int,
              window_batches: int, pairs: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not frequencies_hz or any(not math.isfinite(f) or f <= 0 for f in frequencies_hz):
        raise ValueError("frequencies must be non-empty positive finite values")
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
    if window_offset_batches < 0 or not 1 <= window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("window offset must be non-negative and duration within the decoder limit")
    if pairs < 2:
        raise ValueError("pairs must be at least 2")


def _s32(value: int) -> int:
    value &= 0xFFFF_FFFF
    return value - (1 << 32) if value & (1 << 31) else value


def summarize(ref: np.ndarray, sig: np.ndarray) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Return ratio-of-means contrast, its paired standard error, and raw differences.

    The signal and reference shots are acquired as pairs, so uncertainty is taken
    from their per-pair difference and scaled by ``sqrt(n_pairs)``.  Averaging
    ``(ref - sig) / ref`` shot-by-shot is deliberately avoided: noisy reference
    denominators bias that estimator even when the two conditions are identical.
    """
    difference = ref - sig
    ref_mean = ref.mean(axis=-1)
    difference_mean = difference.mean(axis=-1)
    contrast = np.divide(difference_mean, ref_mean,
                         out=np.full_like(difference_mean, np.nan, dtype=float), where=ref_mean != 0)
    difference_sem = difference.std(axis=-1, ddof=1) / np.sqrt(difference.shape[-1])
    contrast_sem = np.divide(difference_sem, np.abs(ref_mean),
                              out=np.full_like(difference_sem, np.nan, dtype=float), where=ref_mean != 0)
    return contrast, contrast_sem, difference


def acquire_scan(host: str, frequencies_hz: list[float], *, port: int = 9091,
                 init_count: int = DEFAULT_INIT_COUNT, init_period_batches: int = DEFAULT_INIT_PERIOD_BATCHES,
                 settle_batches: int = DEFAULT_SETTLE_BATCHES,
                 readout_delay_batches: int = DEFAULT_READOUT_DELAY_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 mw_duration_batches: int = 64, mw_amp: float | None = None,
                 window_offset_batches: int = 0, window_batches: int = 3, pairs: int = 16,
                 timeout_s: float = 2.0) -> tuple[SocMap, np.ndarray, np.ndarray]:
    """Return ``(map, R_ref, R_sig)`` shaped ``(frequency, pair)`` from one resident program."""
    if mw_amp is None:
        raise ValueError("mw-amp is required: choose a reviewed DAC0 amplitude for your MW chain")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, frequencies_hz, init_count, init_period_batches, settle_batches,
                  readout_delay_batches, laser_duration_batches, mw_duration_batches, mw_amp,
                  window_offset_batches, window_batches, pairs)
        program = build_program(m)
        shared = {
            "init_count": init_count, "init_period_batches": init_period_batches,
            "settle_batches": settle_batches, "readout_delay_batches": readout_delay_batches,
            "laser_duration_batches": laser_duration_batches, "mw_duration_batches": mw_duration_batches,
            "mw_amp_code": units.amp_to_code(mw_amp), "window_offset_batches": window_offset_batches,
            "window_batches": window_batches,
        }
        ref = np.empty((len(frequencies_hz), pairs), dtype=np.int64)
        sig = np.empty_like(ref)
        run.setup(drv, m, {0: program})
        for fi, frequency_hz in enumerate(frequencies_hz):
            point = {**shared, "mw_freq_code": units.freq_to_code(frequency_hz, m.params)}
            for pair in range(pairs):
                for mw_on, destination in ((0, ref), (1, sig)):
                    result = run.rerun(
                        drv, m, {0: program}, params={0: {**point, "mw_on": mw_on}},
                        results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                    )[0]["out"]
                    destination[fi, pair] = _s32(int(result[5]))
        return m, ref, sig
    finally:
        drv.close()


def save_and_plot(frequencies_hz: list[float], ref: np.ndarray, sig: np.ndarray,
                  output: Path, plot: Path) -> float:
    """Save every paired integral and plot the signed normalized ESR contrast."""
    contrast, contrast_sem, difference = summarize(ref, sig)
    freqs = np.asarray(frequencies_hz, dtype=float)
    np.savez(output, frequencies_hz=freqs, reference=ref, signal=sig, difference=difference,
             reference_mean=ref.mean(axis=-1), signal_mean=sig.mean(axis=-1),
             difference_mean=difference.mean(axis=-1),
             difference_sem=difference.std(axis=-1, ddof=1) / np.sqrt(difference.shape[-1]),
             contrast=contrast, contrast_sem=contrast_sem)
    best = int(np.nanargmax(np.abs(contrast))) if np.isfinite(contrast).any() else 0
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, ax = plt.subplots(layout="constrained")
    ax.plot(freqs / 1e9, contrast)
    ax.axvline(freqs[best] / 1e9, color="black", linestyle="--", alpha=0.4,
               label=f"largest |contrast|: {freqs[best] / 1e9:.6g} GHz")
    ax.set(xlabel="MW frequency (GHz)", ylabel="(R_ref − R_sig) / R_ref",
           title="Coarse pulsed ESR")
    ax.grid(True, alpha=0.3)
    ax.legend()
    fig.savefig(plot, dpi=160)
    plt.close(fig)

    signal_path = plot.with_name(f"{plot.stem}_signal{plot.suffix}")

    fig, ax = plt.subplots(layout="constrained")
    mean = sig.mean(axis=1)
    ax.plot(freqs/1e9, mean)
    ax.set(xlabel="MW frequency (GHz)", ylabel="MW-on integrated signal (ADC code)")
    ax.grid(True, alpha=0.3)
    fig.savefig(signal_path, dpi=160)
    return float(freqs[best])



def frequency_grid(start_hz: float, stop_hz: float, steps: int) -> list[float]:
    """Inclusive linear coarse sweep; one point is allowed for a fixed-frequency control."""
    if not math.isfinite(start_hz) or not math.isfinite(stop_hz) or start_hz <= 0 or stop_hz <= 0:
        raise ValueError("frequency start and stop must be positive finite values")
    if steps < 1:
        raise ValueError("frequency-steps must be positive")
    if steps > 1 and stop_hz <= start_hz:
        raise ValueError("frequency-stop-hz must exceed frequency-start-hz when steps is greater than one")
    if steps == 1:
        return [float(start_hz)]
    return np.linspace(start_hz, stop_hz, steps).tolist()


def main(argv=None):
    ts = time.time()
    formatted_time = datetime.fromtimestamp(ts).strftime('%Y-%m-%d_%H_%M')
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--frequency-start-hz", required=True, type=float)
    parser.add_argument("--frequency-stop-hz", required=True, type=float)
    parser.add_argument("--frequency-steps", required=True, type=int,
                        help="inclusive number of evenly spaced coarse-scan points")
    parser.add_argument("--mw-amp", required=True, type=float,
                        help="reviewed DAC0 amplitude fraction in [-1, 1]")
    parser.add_argument("--mw-duration-batches", type=int, default=64)
    parser.add_argument("--window-offset-batches", type=int, default=0)
    parser.add_argument("--window-batches", type=int, default=3)
    parser.add_argument("--init-count", type=int, default=DEFAULT_INIT_COUNT)
    parser.add_argument("--init-period-batches", type=int, default=DEFAULT_INIT_PERIOD_BATCHES)
    parser.add_argument("--settle-batches", type=int, default=DEFAULT_SETTLE_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--pairs", type=int, default=16)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path, default=Path(f"data/esr/nv_pulsed_esr_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path, default=Path(f"data/esr/nv_pulsed_esr_{formatted_time}.png"))
    args = parser.parse_args(argv)
    frequencies_hz = frequency_grid(args.frequency_start_hz, args.frequency_stop_hz, args.frequency_steps)
    _, ref, sig = acquire_scan(
        args.host, frequencies_hz, port=args.port, init_count=args.init_count,
        init_period_batches=args.init_period_batches, settle_batches=args.settle_batches,
        readout_delay_batches=args.readout_delay_batches, laser_duration_batches=args.laser_duration_batches,
        mw_duration_batches=args.mw_duration_batches, mw_amp=args.mw_amp,
        window_offset_batches=args.window_offset_batches, window_batches=args.window_batches,
        pairs=args.pairs, timeout_s=args.timeout_s,
    )
    best = save_and_plot(frequencies_hz, ref, sig, args.output, args.plot)
    print(f"saved coarse pulsed ESR scan to {args.output} and {args.plot}; "
          f"largest measured |contrast| at {best:.9g} Hz")


if __name__ == "__main__":
    main()
