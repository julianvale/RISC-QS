"""Raw-trace MW contrast diagnostic for the pulsed NV readout.

For every pair this program collects four otherwise-identical raw ``robs``
captures: MW-off and MW-on at a detuned frequency, then MW-off and MW-on at a
putative resonance.  It saves every individual ADC trace and plots the two
MW-induced detector responses plus their difference.  The latter is
``(off - resonant) - (off - detuned)`` and is therefore insensitive to a
frequency-independent microwave pickup or optical perturbation.

The capture gate contains the final readout laser trigger.  Earlier laser
triggers initialize the NV ensemble, matching the MW-during-optical ESR
diagnostic rather than using the bare Stage-0 laser-only trace.
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
from riscq.map import ADC_BATCH, SocMap, SocParams
from riscq.pulses import Pulse, envelopes, units

try:  # Supports both ``PYTHONPATH=. python ...`` and direct script execution.
    from software.quantum_sensing.nv_mw_on_esr import (
        DEFAULT_INIT_COUNT,
        DEFAULT_INIT_PERIOD_BATCHES,
        DEFAULT_LASER_TRIGGER_BATCHES,
        DEFAULT_POST_INIT_DELAY_BATCHES,
        LASER_CW,
        LASER_HALF_PERIOD,
        MAX_PULSE_BATCHES,
        SCHEDULE_LEAD,
    )
    from software.quantum_sensing.nv_raw_readout import combine_adc_lanes
except ModuleNotFoundError:
    from software.quantum_sensing.nv_mw_on_esr import (  # type: ignore[no-redef]
        DEFAULT_INIT_COUNT,
        DEFAULT_INIT_PERIOD_BATCHES,
        DEFAULT_LASER_TRIGGER_BATCHES,
        DEFAULT_POST_INIT_DELAY_BATCHES,
        LASER_CW,
        LASER_HALF_PERIOD,
        MAX_PULSE_BATCHES,
        SCHEDULE_LEAD,
    )
    from software.quantum_sensing.nv_raw_readout import combine_adc_lanes  # type: ignore[no-redef]


DEFAULT_CAPTURE_BATCHES = 512
DEFAULT_LASER_DELAY_BATCHES = 96
DEFAULT_RESONANT_HZ = 2.87e9
DEFAULT_DETUNED_HZ = 2.77e9
# Analysis defaults from the calibrated local integrator sweep.  Raw capture
# remains available over its complete span; these only annotate and summarize it.
DEFAULT_ANALYSIS_WINDOW_OFFSET_BATCHES = 77
DEFAULT_ANALYSIS_WINDOW_BATCHES = 23


def _tables(m: SocMap) -> tuple[ParamTable, ParamTable]:
    """Return full-bank DAC0 MW and silent DAC1 raw-capture tables."""
    mw_envelope = envelopes.square(m.channel(0).samples_per_line * m.params.env_depth)
    capture_envelope = envelopes.square(m.params.env_depth)
    return (
        ParamTable(0, 0.0, {"mw": Pulse(mw_envelope, amp=0.0)}),
        ParamTable(1, 0.0, {"capture": Pulse(capture_envelope, amp=0.0)}),
    )


def mw_duration_batches(init_count: int, init_period_batches: int,
                        laser_duration_batches: int, post_init_delay_batches: int,
                        laser_delay_batches: int, capture_batches: int) -> int:
    """Return MW span from the first initialization edge through raw capture."""
    return ((init_count - 1) * init_period_batches + laser_duration_batches
            + post_init_delay_batches - laser_delay_batches + capture_batches)


@no_type_check
@kernel
def k_mw_raw_contrast(mw: ParamTable, capture: ParamTable, out: Array, init_count: int,
                      init_period_batches: int, post_init_delay_batches: int,
                      laser_duration_batches: int, laser_delay_batches: int,
                      capture_batches: int, mw_freq_code: int, mw_amp_code: int,
                      mw_on: int):
    """Capture one initialized pulsed-readout trace with optional MW output."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(capture.pulses)  # noqa: F821
    set_freq(mw, mw_freq_code)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_freq(capture, capture.freq)  # noqa: F821
    set_start(capture, now())  # noqa: F821
    set_dur(capture, capture["capture"], capture_batches << 16)  # noqa: F821

    init_start = now() + SCHEDULE_LEAD  # noqa: F821
    readout_start = (init_start + (init_count - 1) * init_period_batches
                     + laser_duration_batches + post_init_delay_batches)
    capture_start = readout_start - laser_delay_batches
    capture_end = capture_start + capture_batches
    set_dur(mw, mw["mw"], (capture_end - init_start) << 16)  # noqa: F821
    if mw_on != 0:
        play(mw, mw["mw"], init_start)  # noqa: F821

    count = 0
    while count < init_count:
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, init_start)  # noqa: F821
        count += 1
        if count < init_count:
            wait_until(init_start + init_period_batches - SCHEDULE_LEAD)  # noqa: F821
            init_start = now() + SCHEDULE_LEAD  # noqa: F821

    play(capture, capture["capture"], capture_start)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_start)  # noqa: F821
    wait_until(capture_end + 64)  # noqa: F821
    out[0] = capture_start
    out[1] = readout_start
    out[2] = capture_batches
    out[3] = mw_on


def build_program(m: SocMap):
    mw, capture = _tables(m)
    return compile_kernel(k_mw_raw_contrast, m, tables={"mw": mw, "capture": capture}, out=Array(4))


def _validate(m: SocMap, resonant_hz: float, detuned_hz: float, mw_amp: float,
              init_count: int, init_period_batches: int, post_init_delay_batches: int,
              laser_duration_batches: int, laser_delay_batches: int,
              capture_batches: int, pairs: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not all(math.isfinite(frequency) and frequency > 0
               for frequency in (resonant_hz, detuned_hz)):
        raise ValueError("resonant-hz and detuned-hz must be positive finite values")
    if resonant_hz == detuned_hz:
        raise ValueError("resonant-hz and detuned-hz must differ")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= init_count <= 64:
        raise ValueError("init-count must be in 1..64")
    if init_count > 1 and init_period_batches < SCHEDULE_LEAD + laser_duration_batches:
        raise ValueError("init-period-batches must leave one scheduling lead after each laser trigger")
    if post_init_delay_batches < 0:
        raise ValueError("post-init-delay-batches must be non-negative")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser-duration-batches must be in 1..65535")
    if laser_delay_batches < 0:
        raise ValueError("laser-delay-batches must be non-negative")
    if not 1 <= capture_batches <= m.params.rob_depth:
        raise ValueError(f"capture-batches must be in 1..{m.params.rob_depth} to avoid robs wrapping")
    if laser_delay_batches + laser_duration_batches > capture_batches:
        raise ValueError("laser pulse must end within the raw capture gate")
    duration = mw_duration_batches(init_count, init_period_batches, laser_duration_batches,
                                   post_init_delay_batches, laser_delay_batches, capture_batches)
    if duration > MAX_PULSE_BATCHES:
        raise ValueError(f"MW-on span is {duration} batches, exceeding the {MAX_PULSE_BATCHES}-batch limit")
    if pairs < 2:
        raise ValueError("pairs must be at least 2")


def _read_trace(drv: RemoteDriver, m: SocMap, program, params: dict[str, int],
                capture_batches: int, timeout_s: float) -> np.ndarray:
    run.rerun(drv, m, {0: program}, params={0: params}, results=["out"],
              timeout=max(1, math.ceil(timeout_s * 1000)))
    raw = run.read_robs(drv, m, capture_batches * ADC_BATCH * 4)
    return raw.reshape(capture_batches, ADC_BATCH)


def acquire_pairs(host: str, *, port: int = 9091, resonant_hz: float = DEFAULT_RESONANT_HZ,
                  detuned_hz: float = DEFAULT_DETUNED_HZ, mw_amp: float | None = None,
                  init_count: int = DEFAULT_INIT_COUNT,
                  init_period_batches: int = DEFAULT_INIT_PERIOD_BATCHES,
                  post_init_delay_batches: int = DEFAULT_POST_INIT_DELAY_BATCHES,
                  laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                  laser_delay_batches: int = DEFAULT_LASER_DELAY_BATCHES,
                  capture_batches: int = DEFAULT_CAPTURE_BATCHES, pairs: int = 16,
                  timeout_s: float = 2.0) -> tuple[SocMap, dict[str, np.ndarray]]:
    """Return four interleaved raw-trace stacks, each shaped ``(pair, batch, lane)``."""
    if not host.strip():
        raise ValueError("host must be non-empty (set BOARD_IP or pass --host explicitly)")
    if mw_amp is None:
        raise ValueError("mw-amp is required: choose a reviewed DAC0 amplitude for your MW chain")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, resonant_hz, detuned_hz, mw_amp, init_count, init_period_batches,
                  post_init_delay_batches, laser_duration_batches, laser_delay_batches,
                  capture_batches, pairs)
        program = build_program(m)
        shared = {
            "init_count": init_count,
            "init_period_batches": init_period_batches,
            "post_init_delay_batches": post_init_delay_batches,
            "laser_duration_batches": laser_duration_batches,
            "laser_delay_batches": laser_delay_batches,
            "capture_batches": capture_batches,
            "mw_amp_code": units.amp_to_code(mw_amp),
        }
        conditions = (
            ("reference_detuned", detuned_hz, 0),
            ("detuned", detuned_hz, 1),
            ("reference_resonant", resonant_hz, 0),
            ("resonant", resonant_hz, 1),
        )
        traces = {name: [] for name, _, _ in conditions}
        run.setup(drv, m, {0: program})
        for _ in range(pairs):
            for name, frequency_hz, mw_on in conditions:
                params = {
                    **shared,
                    "mw_freq_code": units.freq_to_code(frequency_hz, m.params),
                    "mw_on": mw_on,
                }
                traces[name].append(_read_trace(drv, m, program, params, capture_batches, timeout_s))
        return m, {name: np.stack(stack) for name, stack in traces.items()}
    finally:
        drv.close()


def differential_traces(traces: dict[str, np.ndarray]) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Return paired detuned, resonant, and resonance-specific raw differences."""
    required = {"reference_detuned", "detuned", "reference_resonant", "resonant"}
    if set(traces) != required:
        raise ValueError("traces must contain the four raw MW-contrast conditions")
    detuned = combine_adc_lanes(traces["reference_detuned"] - traces["detuned"])
    resonant = combine_adc_lanes(traces["reference_resonant"] - traces["resonant"])
    return detuned, resonant, resonant - detuned


def _mean_sem(values: np.ndarray) -> tuple[np.ndarray, np.ndarray]:
    mean = values.mean(axis=0)
    sem = values.std(axis=0, ddof=1) / math.sqrt(values.shape[0])
    return mean, sem


def rolling_window_statistics(values: np.ndarray, window_samples: int) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    """Return mean, SEM, and z-score for every adjacent summed sample window."""
    if values.ndim != 2:
        raise ValueError("values must be shaped (pair, sample)")
    if not 1 <= window_samples <= values.shape[1]:
        raise ValueError("window-samples must fit within every trace")
    kernel = np.ones(window_samples, dtype=float)
    sums = np.stack([np.convolve(trace, kernel, mode="valid") for trace in values])
    mean, sem = _mean_sem(sums)
    z_score = np.divide(mean, sem, out=np.zeros_like(mean), where=sem > 0)
    return mean, sem, z_score


def save_and_plot(m: SocMap, traces: dict[str, np.ndarray], output: Path, plot: Path, *,
                  resonant_hz: float, detuned_hz: float, laser_delay_batches: int,
                  laser_duration_batches: int,
                  analysis_window_offset_batches: int = DEFAULT_ANALYSIS_WINDOW_OFFSET_BATCHES,
                  analysis_window_batches: int = DEFAULT_ANALYSIS_WINDOW_BATCHES) -> None:
    """Save every trace and plot frequency-specific MW differential waveforms."""
    detuned, resonant, esr = differential_traces(traces)
    detuned_mean, detuned_sem = _mean_sem(detuned)
    resonant_mean, resonant_sem = _mean_sem(resonant)
    esr_mean, esr_sem = _mean_sem(esr)
    sample_hz = m.params.dsp_freq_hz * ADC_BATCH
    time_ns = np.arange(detuned.shape[1]) / sample_hz * 1e9
    analysis_start_sample = (laser_delay_batches + analysis_window_offset_batches) * ADC_BATCH
    analysis_window_samples = analysis_window_batches * ADC_BATCH
    if analysis_start_sample + analysis_window_samples > detuned.shape[1]:
        raise ValueError("analysis window must fit within the raw capture")
    rolling_time_ns = ((np.arange(detuned.shape[1] - analysis_window_samples + 1)
                        + (analysis_window_samples - 1) / 2) / sample_hz * 1e9)
    detuned_rolling_mean, detuned_rolling_sem, _ = rolling_window_statistics(detuned, analysis_window_samples)
    resonant_rolling_mean, resonant_rolling_sem, _ = rolling_window_statistics(resonant, analysis_window_samples)
    esr_rolling_mean, esr_rolling_sem, esr_rolling_z = rolling_window_statistics(esr, analysis_window_samples)
    analysis_start_ns = time_ns[analysis_start_sample]
    analysis_end_ns = time_ns[analysis_start_sample + analysis_window_samples]
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(
        output, **traces, detuned_difference=detuned, resonant_difference=resonant,
        esr_difference=esr, detuned_mean=detuned_mean, detuned_sem=detuned_sem,
        resonant_mean=resonant_mean, resonant_sem=resonant_sem,
        esr_mean=esr_mean, esr_sem=esr_sem, time_ns=time_ns,
        detuned_rolling_mean=detuned_rolling_mean, detuned_rolling_sem=detuned_rolling_sem,
        resonant_rolling_mean=resonant_rolling_mean, resonant_rolling_sem=resonant_rolling_sem,
        esr_rolling_mean=esr_rolling_mean, esr_rolling_sem=esr_rolling_sem,
        esr_rolling_z=esr_rolling_z, rolling_time_ns=rolling_time_ns,
        dsp_freq_hz=m.params.dsp_freq_hz, adc_sample_hz=sample_hz,
        detuned_hz=detuned_hz, resonant_hz=resonant_hz,
        laser_delay_batches=laser_delay_batches,
        laser_duration_batches=laser_duration_batches,
        analysis_window_offset_batches=analysis_window_offset_batches,
        analysis_window_batches=analysis_window_batches,
    )
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, (ax_mw, ax_esr, ax_rolling, ax_z) = plt.subplots(4, 1, sharex=True, layout="constrained",
                                                            figsize=(8, 10))
    for mean, sem, label in (
        (detuned_mean, detuned_sem, f"off − MW on at {detuned_hz / 1e9:.6g} GHz"),
        (resonant_mean, resonant_sem, f"off − MW on at {resonant_hz / 1e9:.6g} GHz"),
    ):
        line, = ax_mw.plot(time_ns, mean, label=label)
        ax_mw.fill_between(time_ns, mean - sem, mean + sem, color=line.get_color(), alpha=0.2)
    line, = ax_esr.plot(time_ns, esr_mean, label="resonant MW effect − detuned MW effect")
    ax_esr.fill_between(time_ns, esr_mean - esr_sem, esr_mean + esr_sem,
                        color=line.get_color(), alpha=0.2)
    for mean, sem, label in (
        (detuned_rolling_mean, detuned_rolling_sem, f"off − MW on at {detuned_hz / 1e9:.6g} GHz"),
        (resonant_rolling_mean, resonant_rolling_sem, f"off − MW on at {resonant_hz / 1e9:.6g} GHz"),
    ):
        line, = ax_rolling.plot(rolling_time_ns, mean, label=label)
        ax_rolling.fill_between(rolling_time_ns, mean - sem, mean + sem,
                                color=line.get_color(), alpha=0.2)
    ax_z.plot(rolling_time_ns, esr_rolling_z, label="resonant − detuned rolling-window z-score")
    ax_z.axhline(0, color="black", linewidth=0.8)
    ax_z.axhline(2, color="black", linestyle="--", linewidth=0.8, alpha=0.4)
    ax_z.axhline(-2, color="black", linestyle="--", linewidth=0.8, alpha=0.4)
    laser_start_ns = laser_delay_batches / m.params.dsp_freq_hz * 1e9
    laser_end_ns = (laser_delay_batches + laser_duration_batches) / m.params.dsp_freq_hz * 1e9
    for axis in (ax_mw, ax_esr, ax_rolling, ax_z):
        axis.axvspan(laser_start_ns, laser_end_ns, color="black", alpha=0.08, label="laser trigger")
        axis.axvspan(analysis_start_ns, analysis_end_ns, color="tab:green", alpha=0.12,
                     label=f"{analysis_window_offset_batches}/{analysis_window_batches}-batch analysis window")
        axis.grid(True, alpha=0.3)
        axis.legend()
    for axis in (ax_mw, ax_esr):
        axis.set_ylabel("ADC code")
    ax_rolling.set_ylabel("ADC-code sum")
    ax_z.set_ylabel("z-score")
    ax_mw.set_title(f"Raw MW contrast ({detuned.shape[0]} interleaved four-shot pairs)")
    ax_z.set_xlabel("time from capture-gate start (ns)")
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--mw-amp", required=True, type=float,
                        help="reviewed DAC0 amplitude fraction in [-1, 1]")
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--detuned-hz", type=float, default=DEFAULT_DETUNED_HZ)
    parser.add_argument("--init-count", type=int, default=DEFAULT_INIT_COUNT)
    parser.add_argument("--init-period-batches", type=int, default=DEFAULT_INIT_PERIOD_BATCHES)
    parser.add_argument("--post-init-delay-batches", type=int, default=DEFAULT_POST_INIT_DELAY_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--laser-delay-batches", type=int, default=DEFAULT_LASER_DELAY_BATCHES)
    parser.add_argument("--capture-batches", type=int, default=DEFAULT_CAPTURE_BATCHES)
    parser.add_argument("--analysis-window-offset-batches", type=int,
                        default=DEFAULT_ANALYSIS_WINDOW_OFFSET_BATCHES,
                        help="calibrated window offset from the final laser trigger")
    parser.add_argument("--analysis-window-batches", type=int, default=DEFAULT_ANALYSIS_WINDOW_BATCHES,
                        help="calibrated analysis window duration")
    parser.add_argument("--pairs", type=int, default=16, help="four-shot paired raw acquisitions")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_mw_raw_contrast_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_mw_raw_contrast_{formatted_time}.png"))
    args = parser.parse_args(argv)
    m, traces = acquire_pairs(
        args.host, port=args.port, resonant_hz=args.resonant_hz,
        detuned_hz=args.detuned_hz, mw_amp=args.mw_amp, init_count=args.init_count,
        init_period_batches=args.init_period_batches,
        post_init_delay_batches=args.post_init_delay_batches,
        laser_duration_batches=args.laser_duration_batches,
        laser_delay_batches=args.laser_delay_batches, capture_batches=args.capture_batches,
        pairs=args.pairs, timeout_s=args.timeout_s,
    )
    save_and_plot(
        m, traces, args.output, args.plot, resonant_hz=args.resonant_hz,
        detuned_hz=args.detuned_hz, laser_delay_batches=args.laser_delay_batches,
        laser_duration_batches=args.laser_duration_batches,
        analysis_window_offset_batches=args.analysis_window_offset_batches,
        analysis_window_batches=args.analysis_window_batches,
    )
    print(f"saved {args.pairs} four-shot raw-MW pairs to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
