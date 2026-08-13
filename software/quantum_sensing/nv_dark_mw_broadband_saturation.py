"""Balanced dark-MW population saturation using frequency-hopped pulse trains.

Every independently reset shot receives one of three equal-duration dark
preparations: MW off, a frequency-hopped train spanning the selected ESR line,
or a matched train in an off-resonant band.  One laser pulse then reads out the
prepared population.  This is an incoherent saturation diagnostic, not Rabi.
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
DEFAULT_RESONANT_START_HZ = 2.535e9
DEFAULT_RESONANT_STOP_HZ = 2.544e9
DEFAULT_OFF_START_HZ = 2.795e9
DEFAULT_OFF_STOP_HZ = 2.804e9
DEFAULT_FREQUENCY_STEPS = 10
DEFAULT_SEGMENT_DURATION_US = 1.0
DEFAULT_RESET_PULSES = 1
DEFAULT_POST_MW_DELAY_BATCHES = 50
DEFAULT_BLOCKS = 1_000
DEFAULT_AVERAGES = 10
MAX_FREQUENCY_STEPS = 64
MAX_BLOCKS = 1_000


def us_to_batches(value_us: float) -> int:
    if not math.isfinite(value_us) or value_us <= 0:
        raise ValueError("segment duration must be positive and finite")
    return max(1, round(value_us * DSP_BATCHES_PER_US))


def frequency_words(start_hz: float, stop_hz: float, steps: int,
                    m: SocMap) -> tuple[int, int, np.ndarray]:
    """Return seated start/step words and the realized frequency axis."""
    if steps < 2:
        raise ValueError("frequency steps must be at least two")
    requested_step = (stop_hz - start_hz) / (steps - 1)
    start_word = units.freq_to_code(start_hz, m.params)
    next_word = units.freq_to_code(start_hz + requested_step, m.params)
    step_word = next_word - start_word
    if step_word == 0:
        raise ValueError("frequency step is below RFSoC resolution")
    # These bands are below DAC Nyquist, so the seated word's signed upper
    # half is the realized plain SF(16) code used by code_to_freq.
    realized = []
    for index in range(steps):
        word = start_word + index * step_word
        plain = (word >> 16) & 0xFFFF
        if plain & 0x8000:
            plain -= 1 << 16
        realized.append(units.code_to_freq(plain, m.params))
    return start_word, step_word, np.asarray(realized)


@no_type_check
@kernel
def k_dark_mw_broadband_saturation(
        mw: ParamTable, demod: ParamTable, out: Array,
        reset_spacing_batches: int, reset_pulses: int,
        laser_duration_batches: int, post_mw_delay_batches: int,
        readout_delay_batches: int, readout_window_batches: int,
        resonant_start_code: int, resonant_step_code: int,
        off_start_code: int, off_step_code: int,
        frequency_steps: int, segment_duration_batches: int,
        mw_amp_code: int, blocks: int):
    """Accumulate no-MW, resonant-band, and off-band readouts."""
    init_pulse_params(mw.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_amp(mw, mw["mw"], mw_amp_code)  # noqa: F821
    set_dur(mw, mw["mw"], segment_duration_batches << 16)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], readout_window_batches << 16)  # noqa: F821
    out[0] = 0
    out[1] = 0
    out[2] = 0

    block = 0
    while block < blocks:
        # Balanced six-shot order: off, resonant, off-band, off-band,
        # resonant, off.  Every shot reserves the same segment timing.
        shot = 0
        while shot < 6:
            reset_laser = now() + SCHEDULE_LEAD  # noqa: F821
            reset_index = 0
            while reset_index < reset_pulses:
                play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, reset_laser)  # noqa: F821
                wait_until(reset_laser + laser_duration_batches)  # noqa: F821
                reset_laser = reset_laser + reset_spacing_batches
                reset_index += 1

            condition = 0
            if shot == 1 or shot == 4:
                condition = 1
            elif shot == 2 or shot == 3:
                condition = 2

            segment_index = 0
            segment_start = reset_laser
            while segment_index < frequency_steps:
                if condition == 1:
                    set_freq(mw, resonant_start_code + segment_index * resonant_step_code)  # noqa: F821
                    play(mw, mw["mw"], segment_start)  # noqa: F821
                elif condition == 2:
                    set_freq(mw, off_start_code + segment_index * off_step_code)  # noqa: F821
                    play(mw, mw["mw"], segment_start)  # noqa: F821
                wait_until(segment_start + segment_duration_batches)  # noqa: F821
                segment_start = now() + SCHEDULE_LEAD  # noqa: F821
                segment_index += 1

            # One spin-sensitive readout after the complete dark train.
            readout_laser = now() + SCHEDULE_LEAD + post_mw_delay_batches  # noqa: F821
            readout_window = readout_laser + readout_delay_batches
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_laser)  # noqa: F821
            play(demod, demod["window"], readout_window)  # noqa: F821
            wait_until(readout_window + READOUT_LEAD)  # noqa: F821
            read_res()  # noqa: F821
            out[condition] = out[condition] + read_real()  # noqa: F821
            read_imag()  # noqa: F821
            shot += 1
        block += 1


def build_program(m: SocMap):
    mw, demod = _tables(m)
    return compile_kernel(k_dark_mw_broadband_saturation, m,
                          tables={"mw": mw, "demod": demod}, out=Array(3))


def _validate(m: SocMap, *, resonant_start_hz: float, resonant_stop_hz: float,
              off_start_hz: float, off_stop_hz: float, frequency_steps: int,
              segment_duration_batches: int, mw_amp: float,
              reset_spacing_batches: int, reset_pulses: int,
              laser_duration_batches: int, post_mw_delay_batches: int,
              readout_delay_batches: int, readout_window_batches: int,
              blocks: int, averages: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not all(math.isfinite(x) and x > 0 for x in
               (resonant_start_hz, resonant_stop_hz, off_start_hz, off_stop_hz)):
        raise ValueError("frequency limits must be positive and finite")
    if resonant_stop_hz <= resonant_start_hz or off_stop_hz <= off_start_hz:
        raise ValueError("frequency bands must be ascending")
    if not (resonant_stop_hz < off_start_hz or off_stop_hz < resonant_start_hz):
        raise ValueError("resonant and off-resonant bands must not overlap")
    if not 2 <= frequency_steps <= MAX_FREQUENCY_STEPS:
        raise ValueError(f"frequency steps must be in 2..{MAX_FREQUENCY_STEPS}")
    if not 1 <= segment_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("segment duration must fit in 1..65535 batches")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if not 1 <= reset_pulses <= 64 or reset_spacing_batches < laser_duration_batches:
        raise ValueError("reset timing is invalid")
    if not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("laser trigger duration must fit in 1..65535 batches")
    if post_mw_delay_batches < 0 or readout_delay_batches < 0:
        raise ValueError("readout timing must be non-negative")
    if not 1 <= readout_window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("readout window is outside decoder bounds")
    if not 1 <= blocks <= MAX_BLOCKS or averages < 2:
        raise ValueError("blocks/averages are outside supported bounds")


def acquire(host: str, *, port: int, resonant_start_hz: float, resonant_stop_hz: float,
            off_start_hz: float, off_stop_hz: float, frequency_steps: int,
            segment_duration_us: float, mw_amp: float,
            reset_spacing_batches: int, reset_pulses: int,
            laser_duration_batches: int, post_mw_delay_batches: int,
            readout_delay_batches: int, readout_window_batches: int,
            blocks: int, averages: int, timeout_s: float):
    if not host or not host.strip():
        raise ValueError("host must be non-empty")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        segment_batches = us_to_batches(segment_duration_us)
        _validate(m, resonant_start_hz=resonant_start_hz, resonant_stop_hz=resonant_stop_hz,
                  off_start_hz=off_start_hz, off_stop_hz=off_stop_hz,
                  frequency_steps=frequency_steps, segment_duration_batches=segment_batches,
                  mw_amp=mw_amp, reset_spacing_batches=reset_spacing_batches,
                  reset_pulses=reset_pulses, laser_duration_batches=laser_duration_batches,
                  post_mw_delay_batches=post_mw_delay_batches,
                  readout_delay_batches=readout_delay_batches,
                  readout_window_batches=readout_window_batches,
                  blocks=blocks, averages=averages)
        rstart, rstep, raxis = frequency_words(resonant_start_hz, resonant_stop_hz, frequency_steps, m)
        ostart, ostep, oaxis = frequency_words(off_start_hz, off_stop_hz, frequency_steps, m)
        program = build_program(m)
        params = {
            "reset_spacing_batches": reset_spacing_batches, "reset_pulses": reset_pulses,
            "laser_duration_batches": laser_duration_batches,
            "post_mw_delay_batches": post_mw_delay_batches,
            "readout_delay_batches": readout_delay_batches,
            "readout_window_batches": readout_window_batches,
            "resonant_start_code": rstart, "resonant_step_code": rstep,
            "off_start_code": ostart, "off_step_code": ostep,
            "frequency_steps": frequency_steps, "segment_duration_batches": segment_batches,
            "mw_amp_code": units.amp_to_code(mw_amp), "blocks": blocks,
        }
        values = np.empty((averages, 3), dtype=float)
        run.setup(drv, m, {0: program})
        for average in range(averages):
            result = run.rerun(drv, m, {0: program}, params={0: params}, results=["out"],
                               timeout=max(1, math.ceil(timeout_s * 1000)))[0]["out"]
            values[average] = [_s32(int(x)) / (2 * blocks) for x in result]
        return m, segment_batches, raxis, oaxis, values
    finally:
        drv.close()


def save_and_plot(output: Path, plot: Path, *, values: np.ndarray,
                  resonant_axis: np.ndarray, off_axis: np.ndarray,
                  segment_duration_batches: int, mw_amp: float,
                  reset_pulses: int, reset_spacing_batches: int,
                  readout_delay_batches: int, readout_window_batches: int,
                  blocks: int) -> None:
    no_mw, resonant, off = values.T
    res_diff = resonant - no_mw
    off_diff = off - no_mw
    sem = lambda x: x.std(ddof=1) / math.sqrt(len(x))
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(output, readout_by_run=values, no_mw=no_mw, resonant=resonant,
             off_resonant=off, resonant_minus_no_mw_by_run=res_diff,
             off_resonant_minus_no_mw_by_run=off_diff,
             resonant_minus_no_mw=res_diff.mean(), resonant_minus_no_mw_sem=sem(res_diff),
             off_resonant_minus_no_mw=off_diff.mean(), off_resonant_minus_no_mw_sem=sem(off_diff),
             resonant_frequencies_hz=resonant_axis, off_resonant_frequencies_hz=off_axis,
             segment_duration_batches=segment_duration_batches, mw_amp=mw_amp,
             reset_pulses=reset_pulses, reset_spacing_batches=reset_spacing_batches,
             readout_delay_batches=readout_delay_batches,
             readout_window_batches=readout_window_batches, blocks=blocks)
    import matplotlib.pyplot as plt
    means = values.mean(axis=0)
    errors = values.std(axis=0, ddof=1) / math.sqrt(len(values))
    fig, axes = plt.subplots(1, 2, layout="constrained", figsize=(10, 4))
    axes[0].errorbar([0, 1, 2], means, yerr=errors, fmt="o")
    axes[0].set(xticks=[0, 1, 2], xticklabels=["MW off", "resonant band", "off band"],
                ylabel="mean ADC code", title="Dark broadband saturation readout")
    axes[1].errorbar([0, 1], [res_diff.mean(), off_diff.mean()],
                     yerr=[sem(res_diff), sem(off_diff)], fmt="o")
    axes[1].axhline(0, color="black", linewidth=0.8)
    axes[1].set(xticks=[0, 1], xticklabels=["resonant - off", "off-band - off"],
                ylabel="ADC-code difference")
    for axis in axes:
        axis.grid(True, alpha=0.3)
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--resonant-start-hz", type=float, default=DEFAULT_RESONANT_START_HZ)
    parser.add_argument("--resonant-stop-hz", type=float, default=DEFAULT_RESONANT_STOP_HZ)
    parser.add_argument("--off-start-hz", type=float, default=DEFAULT_OFF_START_HZ)
    parser.add_argument("--off-stop-hz", type=float, default=DEFAULT_OFF_STOP_HZ)
    parser.add_argument("--frequency-steps", type=int, default=DEFAULT_FREQUENCY_STEPS)
    parser.add_argument("--segment-duration-us", type=float, default=DEFAULT_SEGMENT_DURATION_US)
    parser.add_argument("--reset-pulses", type=int, default=DEFAULT_RESET_PULSES)
    parser.add_argument("--reset-spacing-batches", type=int, default=DEFAULT_HALF_DURATION_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--post-mw-delay-batches", type=int, default=DEFAULT_POST_MW_DELAY_BATCHES)
    parser.add_argument("--readout-delay-batches", type=int, default=DEFAULT_READOUT_DELAY_BATCHES)
    parser.add_argument("--readout-window-batches", type=int, default=DEFAULT_READOUT_WINDOW_BATCHES)
    parser.add_argument("--blocks", type=int, default=DEFAULT_BLOCKS)
    parser.add_argument("--averages", type=int, default=DEFAULT_AVERAGES)
    parser.add_argument("--timeout-s", type=float, default=30.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_dark_mw_broadband_saturation_{timestamp}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_dark_mw_broadband_saturation_{timestamp}.png"))
    args = parser.parse_args(argv)
    _, segment_batches, raxis, oaxis, values = acquire(
        args.host, port=args.port, resonant_start_hz=args.resonant_start_hz,
        resonant_stop_hz=args.resonant_stop_hz, off_start_hz=args.off_start_hz,
        off_stop_hz=args.off_stop_hz, frequency_steps=args.frequency_steps,
        segment_duration_us=args.segment_duration_us, mw_amp=args.mw_amp,
        reset_spacing_batches=args.reset_spacing_batches, reset_pulses=args.reset_pulses,
        laser_duration_batches=args.laser_duration_batches,
        post_mw_delay_batches=args.post_mw_delay_batches,
        readout_delay_batches=args.readout_delay_batches,
        readout_window_batches=args.readout_window_batches,
        blocks=args.blocks, averages=args.averages, timeout_s=args.timeout_s)
    save_and_plot(args.output, args.plot, values=values, resonant_axis=raxis,
                  off_axis=oaxis, segment_duration_batches=segment_batches,
                  mw_amp=args.mw_amp, reset_pulses=args.reset_pulses,
                  reset_spacing_batches=args.reset_spacing_batches,
                  readout_delay_batches=args.readout_delay_batches,
                  readout_window_batches=args.readout_window_batches, blocks=args.blocks)
    print(f"saved {args.averages} balanced runs to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
