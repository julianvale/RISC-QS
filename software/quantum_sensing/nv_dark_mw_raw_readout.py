"""Raw detector waveform after independently reset dark-MW preparation.

Each balanced acquisition cycle contains no-MW, resonant-MW, and off-resonant
MW shots.  The MW pulse ends before the one readout-laser trigger.  A silent
DAC1 gate records the complete ADC waveform around that trigger, retaining the
per-cycle condition traces so that a later analysis window cannot manufacture
the contrast being sought.
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
from riscq.map import ADC_BATCH, SocMap, SocParams
from riscq.pulses import Pulse, envelopes, units

try:
    from software.quantum_sensing.nv_pulsed_rabi_abba import (
        DEFAULT_HALF_DURATION_BATCHES, DEFAULT_LASER_TRIGGER_BATCHES,
        DEFAULT_POST_MW_DELAY_BATCHES, DEFAULT_RESET_PULSES,
        LASER_CW, LASER_HALF_PERIOD, MAX_PULSE_BATCHES, SCHEDULE_LEAD,
    )
    from software.quantum_sensing.nv_raw_readout import combine_adc_lanes
except ModuleNotFoundError:  # direct-script execution
    from software.quantum_sensing.nv_pulsed_rabi_abba import (  # type: ignore[no-redef]
        DEFAULT_HALF_DURATION_BATCHES, DEFAULT_LASER_TRIGGER_BATCHES,
        DEFAULT_POST_MW_DELAY_BATCHES, DEFAULT_RESET_PULSES,
        LASER_CW, LASER_HALF_PERIOD, MAX_PULSE_BATCHES, SCHEDULE_LEAD,
    )
    from software.quantum_sensing.nv_raw_readout import combine_adc_lanes  # type: ignore[no-redef]


DEFAULT_RESONANT_HZ = 2.875e9
DEFAULT_OFF_RESONANT_HZ = 2.950e9
DEFAULT_DARK_MW_DURATION_US = 10.0
DEFAULT_CAPTURE_BATCHES = 1024
DEFAULT_LASER_DELAY_BATCHES = 96
DEFAULT_PAIRS = 32
DEFAULT_ANALYSIS_WINDOW_OFFSET_BATCHES = 77
DEFAULT_ANALYSIS_WINDOW_BATCHES = 23
DSP_BATCHES_PER_US = 491.52


def duration_us_to_batches(duration_us: float) -> int:
    if not math.isfinite(duration_us) or duration_us <= 0:
        raise ValueError("dark-MW duration must be positive and finite")
    return max(1, round(duration_us * DSP_BATCHES_PER_US))


def _tables(m: SocMap) -> tuple[ParamTable, ParamTable]:
    return (
        ParamTable(0, 0.0, {"mw": Pulse(envelopes.square(m.params.env_depth), amp=0.0)}),
        ParamTable(1, 0.0, {"capture": Pulse(envelopes.square(m.params.env_depth), amp=0.0)}),
    )


@no_type_check
@kernel
def k_dark_mw_raw_readout(
        mw: ParamTable, capture: ParamTable, out: Array,
        reset_spacing_batches: int, reset_pulses: int,
        laser_duration_batches: int, post_mw_delay_batches: int,
        laser_delay_batches: int, capture_batches: int,
        dark_mw_duration_batches: int, resonant_freq_code: int,
        off_resonant_freq_code: int, mw_amp_code: int, condition: int):
    """One raw shot; condition is 0=no MW, 1=resonant, 2=off-resonant."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(capture.pulses)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_dur(mw, mw["mw"], dark_mw_duration_batches << 16)  # noqa: F821
    set_freq(capture, capture.freq)  # noqa: F821
    set_start(capture, now())  # noqa: F821
    set_dur(capture, capture["capture"], capture_batches << 16)  # noqa: F821

    reset_laser = now() + SCHEDULE_LEAD  # noqa: F821
    reset_index = 0
    while reset_index < reset_pulses:
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
        wait_until(reset_laser + laser_duration_batches)  # noqa: F821
        reset_laser = reset_laser + reset_spacing_batches
        reset_index += 1

    mw_start = reset_laser
    if condition == 1:
        set_freq(mw, resonant_freq_code)  # noqa: F821
        play(mw, mw["mw"], mw_start)  # noqa: F821
    elif condition == 2:
        set_freq(mw, off_resonant_freq_code)  # noqa: F821
        play(mw, mw["mw"], mw_start)  # noqa: F821

    readout_laser = mw_start + dark_mw_duration_batches + post_mw_delay_batches
    capture_start = readout_laser - laser_delay_batches
    play(capture, capture["capture"], capture_start)  # noqa: F821
    play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_laser)  # noqa: F821
    wait_until(capture_start + capture_batches + 64)  # noqa: F821
    out[0] = capture_start
    out[1] = readout_laser
    out[2] = condition


def build_program(m: SocMap):
    mw, capture = _tables(m)
    return compile_kernel(k_dark_mw_raw_readout, m, tables={"mw": mw, "capture": capture}, out=Array(3))


def _validate(m: SocMap, *, resonant_hz: float, off_resonant_hz: float, mw_amp: float,
              reset_spacing_batches: int, reset_pulses: int, laser_duration_batches: int,
              post_mw_delay_batches: int, laser_delay_batches: int, capture_batches: int,
              dark_mw_duration_batches: int, pairs: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not all(math.isfinite(value) and value > 0 for value in (resonant_hz, off_resonant_hz)):
        raise ValueError("frequencies must be positive and finite")
    if resonant_hz == off_resonant_hz:
        raise ValueError("resonant and off-resonant frequencies must differ")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    # The first trigger has ``SCHEDULE_LEAD``.  Subsequent reset triggers are
    # scheduled by the same proven wait-and-advance pattern as the ABBA Rabi
    # sequence, so their spacing need only contain the digital trigger.
    if not 1 <= reset_pulses <= 64 or reset_spacing_batches < laser_duration_batches:
        raise ValueError("reset timing is invalid")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser trigger duration must be in 1..65535 batches")
    if post_mw_delay_batches < 0 or laser_delay_batches < 0:
        raise ValueError("post-MW and laser delays must be non-negative")
    if not 1 <= capture_batches <= m.params.rob_depth:
        raise ValueError("capture must fit the non-wrapping raw buffer")
    if laser_delay_batches + laser_duration_batches > capture_batches:
        raise ValueError("laser trigger must fit within raw capture")
    if not 1 <= dark_mw_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("dark-MW duration must be in 1..65535 batches")
    if pairs < 2:
        raise ValueError("pairs must be at least two")


def _read_trace(drv: RemoteDriver, m: SocMap, program, params: dict[str, int],
                capture_batches: int, timeout_s: float) -> np.ndarray:
    run.rerun(drv, m, {0: program}, params={0: params}, results=["out"],
              timeout=max(1, math.ceil(timeout_s * 1000)))
    return run.read_robs(drv, m, capture_batches * ADC_BATCH * 4).reshape(capture_batches, ADC_BATCH)


def acquire_pairs(host: str, *, port: int = 9091, resonant_hz: float = DEFAULT_RESONANT_HZ,
                  off_resonant_hz: float = DEFAULT_OFF_RESONANT_HZ, mw_amp: float | None = None,
                  dark_mw_duration_us: float = DEFAULT_DARK_MW_DURATION_US,
                  reset_spacing_batches: int = DEFAULT_HALF_DURATION_BATCHES,
                  reset_pulses: int = DEFAULT_RESET_PULSES,
                  laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                  post_mw_delay_batches: int = DEFAULT_POST_MW_DELAY_BATCHES,
                  laser_delay_batches: int = DEFAULT_LASER_DELAY_BATCHES,
                  capture_batches: int = DEFAULT_CAPTURE_BATCHES, pairs: int = DEFAULT_PAIRS,
                  timeout_s: float = 10.0) -> tuple[SocMap, int, dict[str, np.ndarray]]:
    if not host.strip():
        raise ValueError("host must be non-empty")
    if mw_amp is None:
        raise ValueError("mw-amp is required")
    dark_mw_duration_batches = duration_us_to_batches(dark_mw_duration_us)
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, resonant_hz=resonant_hz, off_resonant_hz=off_resonant_hz, mw_amp=mw_amp,
                  reset_spacing_batches=reset_spacing_batches, reset_pulses=reset_pulses,
                  laser_duration_batches=laser_duration_batches, post_mw_delay_batches=post_mw_delay_batches,
                  laser_delay_batches=laser_delay_batches, capture_batches=capture_batches,
                  dark_mw_duration_batches=dark_mw_duration_batches, pairs=pairs)
        program = build_program(m)
        shared = {
            "reset_spacing_batches": reset_spacing_batches, "reset_pulses": reset_pulses,
            "laser_duration_batches": laser_duration_batches,
            "post_mw_delay_batches": post_mw_delay_batches,
            "laser_delay_batches": laser_delay_batches, "capture_batches": capture_batches,
            "dark_mw_duration_batches": dark_mw_duration_batches,
            "resonant_freq_code": units.freq_to_code(resonant_hz, m.params),
            "off_resonant_freq_code": units.freq_to_code(off_resonant_hz, m.params),
            "mw_amp_code": units.amp_to_code(mw_amp),
        }
        names = ("no_mw", "resonant", "off_resonant")
        conditions = (("no_mw", 0), ("resonant", 1), ("off_resonant", 2),
                      ("off_resonant", 2), ("resonant", 1), ("no_mw", 0))
        traces = {name: [] for name in names}
        run.setup(drv, m, {0: program})
        for _ in range(pairs):
            cycle = {name: [] for name in names}
            for name, condition in conditions:
                cycle[name].append(_read_trace(drv, m, program, {**shared, "condition": condition},
                                               capture_batches, timeout_s))
            for name in names:
                traces[name].append(np.mean(cycle[name], axis=0))
        return m, dark_mw_duration_batches, {name: np.stack(values) for name, values in traces.items()}
    finally:
        drv.close()


def _mean_sem(values: np.ndarray) -> tuple[np.ndarray, np.ndarray]:
    return values.mean(axis=0), values.std(axis=0, ddof=1) / math.sqrt(values.shape[0])


def rolling_window_statistics(values: np.ndarray, window_samples: int) -> tuple[np.ndarray, np.ndarray, np.ndarray]:
    if values.ndim != 2 or not 1 <= window_samples <= values.shape[1]:
        raise ValueError("window must fit traces shaped (pair, sample)")
    sums = np.stack([np.convolve(trace, np.ones(window_samples), mode="valid") for trace in values])
    mean, sem = _mean_sem(sums)
    return mean, sem, np.divide(mean, sem, out=np.zeros_like(mean), where=sem > 0)


def save_and_plot(m: SocMap, traces: dict[str, np.ndarray], output: Path, plot: Path, *,
                  resonant_hz: float, off_resonant_hz: float, dark_mw_duration_batches: int,
                  laser_delay_batches: int, laser_duration_batches: int,
                  analysis_window_offset_batches: int, analysis_window_batches: int) -> None:
    no_mw = combine_adc_lanes(traces["no_mw"].astype(float))
    resonant = combine_adc_lanes(traces["resonant"].astype(float))
    off_resonant = combine_adc_lanes(traces["off_resonant"].astype(float))
    res_difference = resonant - no_mw
    off_difference = off_resonant - no_mw
    res_mean, res_sem = _mean_sem(res_difference)
    off_mean, off_sem = _mean_sem(off_difference)
    sample_hz = m.params.dsp_freq_hz * ADC_BATCH
    time_ns = np.arange(res_difference.shape[1]) / sample_hz * 1e9
    window_samples = analysis_window_batches * ADC_BATCH
    res_roll_mean, res_roll_sem, res_roll_z = rolling_window_statistics(res_difference, window_samples)
    off_roll_mean, off_roll_sem, off_roll_z = rolling_window_statistics(off_difference, window_samples)
    rolling_time_ns = ((np.arange(res_roll_mean.size) + (window_samples - 1) / 2) / sample_hz * 1e9)
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(output, **traces, resonant_minus_no_mw=res_difference,
             off_resonant_minus_no_mw=off_difference, resonant_mean=res_mean,
             resonant_sem=res_sem, off_resonant_mean=off_mean, off_resonant_sem=off_sem,
             resonant_rolling_mean=res_roll_mean, resonant_rolling_sem=res_roll_sem,
             resonant_rolling_z=res_roll_z, off_resonant_rolling_mean=off_roll_mean,
             off_resonant_rolling_sem=off_roll_sem, off_resonant_rolling_z=off_roll_z,
             time_ns=time_ns, rolling_time_ns=rolling_time_ns, dsp_freq_hz=m.params.dsp_freq_hz,
             adc_sample_hz=sample_hz, resonant_hz=resonant_hz, off_resonant_hz=off_resonant_hz,
             dark_mw_duration_batches=dark_mw_duration_batches,
             dark_mw_duration_us=dark_mw_duration_batches / DSP_BATCHES_PER_US,
             laser_delay_batches=laser_delay_batches, laser_duration_batches=laser_duration_batches,
             analysis_window_offset_batches=analysis_window_offset_batches,
             analysis_window_batches=analysis_window_batches)
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, axes = plt.subplots(3, 1, sharex=True, layout="constrained", figsize=(9, 9))
    for mean, sem, label in ((res_mean, res_sem, "resonant - no MW"),
                             (off_mean, off_sem, "off-resonant - no MW")):
        line, = axes[0].plot(time_ns, mean, label=label)
        axes[0].fill_between(time_ns, mean - sem, mean + sem, color=line.get_color(), alpha=0.2)
    for mean, sem, label in ((res_roll_mean, res_roll_sem, "resonant - no MW"),
                             (off_roll_mean, off_roll_sem, "off-resonant - no MW")):
        line, = axes[1].plot(rolling_time_ns, mean, label=label)
        axes[1].fill_between(rolling_time_ns, mean - sem, mean + sem, color=line.get_color(), alpha=0.2)
    axes[2].plot(rolling_time_ns, res_roll_z, label="resonant - no MW")
    axes[2].plot(rolling_time_ns, off_roll_z, label="off-resonant - no MW")
    laser_start_ns = laser_delay_batches / m.params.dsp_freq_hz * 1e9
    laser_end_ns = (laser_delay_batches + laser_duration_batches) / m.params.dsp_freq_hz * 1e9
    for axis in axes:
        axis.axvspan(laser_start_ns, laser_end_ns, color="black", alpha=0.08, label="laser trigger")
        axis.grid(True, alpha=0.3)
        axis.legend()
    axes[0].set(ylabel="ADC code", title="Dark-MW raw readout difference")
    axes[1].set(ylabel=f"{analysis_window_batches}-batch rolling sum")
    axes[2].set(xlabel="time from capture-gate start (ns)", ylabel="z-score")
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-hz", type=float, default=DEFAULT_RESONANT_HZ)
    parser.add_argument("--off-resonant-hz", type=float, default=DEFAULT_OFF_RESONANT_HZ)
    parser.add_argument("--dark-mw-duration-us", type=float, default=DEFAULT_DARK_MW_DURATION_US)
    parser.add_argument("--reset-spacing-batches", type=int, default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--post-mw-delay-batches", type=int, default=DEFAULT_POST_MW_DELAY_BATCHES)
    parser.add_argument("--laser-delay-batches", type=int, default=DEFAULT_LASER_DELAY_BATCHES)
    parser.add_argument("--capture-batches", type=int, default=DEFAULT_CAPTURE_BATCHES)
    parser.add_argument("--pairs", type=int, default=DEFAULT_PAIRS)
    parser.add_argument("--analysis-window-offset-batches", type=int, default=DEFAULT_ANALYSIS_WINDOW_OFFSET_BATCHES)
    parser.add_argument("--analysis-window-batches", type=int, default=DEFAULT_ANALYSIS_WINDOW_BATCHES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path, default=Path(f"data/esr/nv_dark_mw_raw_readout_{timestamp}.npz"))
    parser.add_argument("--plot", type=Path, default=Path(f"data/esr/nv_dark_mw_raw_readout_{timestamp}.png"))
    args = parser.parse_args(argv)
    m, duration_batches, traces = acquire_pairs(
        args.host, port=args.port, resonant_hz=args.resonant_hz, off_resonant_hz=args.off_resonant_hz,
        mw_amp=args.mw_amp, dark_mw_duration_us=args.dark_mw_duration_us,
        reset_spacing_batches=args.reset_spacing_batches, reset_pulses=args.reset_pulses,
        laser_duration_batches=args.laser_duration_batches, post_mw_delay_batches=args.post_mw_delay_batches,
        laser_delay_batches=args.laser_delay_batches, capture_batches=args.capture_batches,
        pairs=args.pairs, timeout_s=args.timeout_s)
    save_and_plot(m, traces, args.output, args.plot, resonant_hz=args.resonant_hz,
                  off_resonant_hz=args.off_resonant_hz, dark_mw_duration_batches=duration_batches,
                  laser_delay_batches=args.laser_delay_batches, laser_duration_batches=args.laser_duration_batches,
                  analysis_window_offset_batches=args.analysis_window_offset_batches,
                  analysis_window_batches=args.analysis_window_batches)
    print(f"saved {args.pairs} balanced raw cycles (two shots/condition/cycle) to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
