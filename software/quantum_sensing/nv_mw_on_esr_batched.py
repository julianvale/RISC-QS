"""Batched MW-during-optical ESR diagnostic.

This is the throughput-oriented counterpart to ``nv_mw_on_esr.py``.  One
resident-kernel rerun acquires a fixed block of interleaved reference (MW-off)
and signal (MW-on) shots, returning their individual integrals to the host.
The optical and MW timing of each shot is unchanged; ``shot_period_batches``
explicitly controls the spacing between shots and therefore the average MW
duty cycle.
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
from riscq.pulses import units

try:  # Supports both ``PYTHONPATH=. python ...`` and direct script execution.
    from software.quantum_sensing.nv_mw_on_esr import (
        DEFAULT_INIT_COUNT, DEFAULT_INIT_PERIOD_BATCHES, DEFAULT_LASER_TRIGGER_BATCHES,
        DEFAULT_POST_INIT_DELAY_BATCHES, LASER_CW, LASER_HALF_PERIOD, MAX_PULSE_BATCHES,
        SCHEDULE_LEAD, _s32, _tables, frequency_grid, mw_duration_batches, save_and_plot,
    )
except ModuleNotFoundError:
    from software.quantum_sensing.nv_mw_on_esr import (  # type: ignore[no-redef]
        DEFAULT_INIT_COUNT, DEFAULT_INIT_PERIOD_BATCHES, DEFAULT_LASER_TRIGGER_BATCHES,
        DEFAULT_POST_INIT_DELAY_BATCHES, LASER_CW, LASER_HALF_PERIOD, MAX_PULSE_BATCHES,
        SCHEDULE_LEAD, _s32, _tables, frequency_grid, mw_duration_batches, save_and_plot,
    )


MAX_PAIRS_PER_RERUN = 64
MAX_SHOTS_PER_RERUN = 2 * MAX_PAIRS_PER_RERUN
# 50 us leaves roughly 12 us beyond the default sequence's required 38.3 us
# next-shot margin. With alternating reference/signal shots its 34.1 us MW
# signal pulse has about 34% average duty; use a larger CLI value if desired.
DEFAULT_SHOT_PERIOD_BATCHES = 24_576


def minimum_shot_period_batches(init_count: int, init_period_batches: int,
                                laser_duration_batches: int, post_init_delay_batches: int,
                                window_offset_batches: int, window_batches: int) -> int:
    """Earliest safe next-shot start, including completion and scheduling margin."""
    mw_duration = mw_duration_batches(init_count, init_period_batches, laser_duration_batches,
                                      post_init_delay_batches, window_offset_batches, window_batches)
    readout_done = ((init_count - 1) * init_period_batches + laser_duration_batches
                    + post_init_delay_batches + window_offset_batches + READOUT_LEAD)
    return max(mw_duration, readout_done) + SCHEDULE_LEAD


@no_type_check
@kernel
def k_mw_on_esr_batched(gate: ParamTable, demod: ParamTable, out: Array, init_count: int,
                        init_period_batches: int, post_init_delay_batches: int,
                        laser_duration_batches: int, mw_freq_code: int, mw_amp_code: int,
                        window_offset_batches: int, window_batches: int,
                        pairs_per_rerun: int, shot_period_batches: int):
    """Return alternating MW-off/MW-on readout integrals in ``out``.

    ``out[0]`` is reference pair 0, ``out[1]`` is signal pair 0, and so on.
    The output buffer has a compile-time maximum; the runtime pair count selects
    its valid prefix.
    """
    init_pulse_params(gate.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821
    set_freq(gate, mw_freq_code)  # noqa: F821
    set_amp(gate, gate["mw"], mw_amp_code)  # noqa: F821
    set_freq(demod, demod.freq)  # noqa: F821
    set_start(demod, now())  # noqa: F821
    set_dur(demod, demod["window"], window_batches << 16)  # noqa: F821

    shot_start = now() + SCHEDULE_LEAD  # noqa: F821
    mw_duration = ((init_count - 1) * init_period_batches + laser_duration_batches
                   + post_init_delay_batches + window_offset_batches + window_batches)
    set_dur(gate, gate["mw"], mw_duration << 16)  # noqa: F821

    shot = 0
    shot_count = pairs_per_rerun * 2
    while shot < shot_count:
        readout_start = (shot_start + (init_count - 1) * init_period_batches
                         + laser_duration_batches + post_init_delay_batches)
        window_start = readout_start + window_offset_batches
        if shot & 1:
            play(gate, gate["mw"], shot_start)  # noqa: F821

        # Keep only one future laser event outstanding.  This makes the batched
        # host acquisition independent of the four-entry laser TimedQueue.
        init_start = shot_start
        count = 0
        while count < init_count:
            play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, init_start)  # noqa: F821
            count += 1
            if count < init_count:
                wait_until(init_start + init_period_batches - SCHEDULE_LEAD)  # noqa: F821
                init_start = now() + SCHEDULE_LEAD  # noqa: F821

        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, readout_start)  # noqa: F821
        play(demod, demod["window"], window_start)  # noqa: F821
        wait_until(window_start + READOUT_LEAD)  # noqa: F821
        read_res()  # noqa: F821
        out[shot] = read_real()  # noqa: F821
        read_imag()  # noqa: F821  consume the full IQ latch, matching the one-shot kernel

        shot += 1
        if shot < shot_count:
            wait_until(shot_start + shot_period_batches - SCHEDULE_LEAD)  # noqa: F821
            shot_start = now() + SCHEDULE_LEAD  # noqa: F821


def build_program(m: SocMap):
    gate, demod = _tables(m)
    return compile_kernel(k_mw_on_esr_batched, m, tables={"gate": gate, "demod": demod},
                          out=Array(MAX_SHOTS_PER_RERUN))


def _validate(m: SocMap, frequencies_hz: list[float], init_count: int, init_period_batches: int,
              post_init_delay_batches: int, laser_duration_batches: int, mw_amp: float,
              window_offset_batches: int, window_batches: int, pairs: int,
              pairs_per_rerun: int, shot_period_batches: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not frequencies_hz or any(not math.isfinite(f) or f <= 0 for f in frequencies_hz):
        raise ValueError("frequencies must be non-empty positive finite values")
    if not 1 <= init_count <= 64:
        raise ValueError("init-count must be in 1..64")
    if init_count > 1 and init_period_batches < SCHEDULE_LEAD + laser_duration_batches:
        raise ValueError("init-period-batches must leave one scheduling lead after each laser trigger")
    if post_init_delay_batches < 0 or not 1 <= laser_duration_batches <= MAX_PULSE_BATCHES:
        raise ValueError("post-init delay must be non-negative and laser duration in 1..65535")
    if not -1.0 <= mw_amp <= 1.0:
        raise ValueError("mw-amp must be in [-1, 1]")
    if window_offset_batches < 0 or not 1 <= window_batches <= 1 << READOUT_MAX_WIN_LOG2:
        raise ValueError("window offset must be non-negative and duration within the decoder limit")
    if not 1 <= pairs:
        raise ValueError("pairs must be positive")
    if not 1 <= pairs_per_rerun <= MAX_PAIRS_PER_RERUN:
        raise ValueError(f"pairs-per-rerun must be in 1..{MAX_PAIRS_PER_RERUN}")
    mw_duration = mw_duration_batches(init_count, init_period_batches, laser_duration_batches,
                                      post_init_delay_batches, window_offset_batches, window_batches)
    if mw_duration > MAX_PULSE_BATCHES:
        raise ValueError(f"MW-on span is {mw_duration} batches, exceeding the {MAX_PULSE_BATCHES}-batch limit")
    minimum_period = minimum_shot_period_batches(
        init_count, init_period_batches, laser_duration_batches, post_init_delay_batches,
        window_offset_batches, window_batches,
    )
    if shot_period_batches < minimum_period:
        raise ValueError(f"shot-period-batches must be at least {minimum_period} for this sequence")


def unpack_pairs(raw: np.ndarray, pairs: int) -> tuple[np.ndarray, np.ndarray]:
    """Decode the valid alternating reference/signal prefix from one kernel block."""
    if not 1 <= pairs <= MAX_PAIRS_PER_RERUN:
        raise ValueError(f"pairs must be in 1..{MAX_PAIRS_PER_RERUN}")
    values = np.asarray(raw[:2 * pairs], dtype=np.int64)
    if values.size != 2 * pairs:
        raise ValueError("kernel result is shorter than its requested pair count")
    return values[0::2], values[1::2]


def acquire_scan(host: str, frequencies_hz: list[float], *, port: int = 9091,
                 init_count: int = DEFAULT_INIT_COUNT, init_period_batches: int = DEFAULT_INIT_PERIOD_BATCHES,
                 post_init_delay_batches: int = DEFAULT_POST_INIT_DELAY_BATCHES,
                 laser_duration_batches: int = DEFAULT_LASER_TRIGGER_BATCHES,
                 mw_amp: float | None = None, window_offset_batches: int = 0,
                 window_batches: int = 3, pairs: int = 16,
                 pairs_per_rerun: int = MAX_PAIRS_PER_RERUN,
                 shot_period_batches: int = DEFAULT_SHOT_PERIOD_BATCHES,
                 timeout_s: float = 2.0) -> tuple[SocMap, np.ndarray, np.ndarray]:
    """Return individual paired integrals shaped ``(frequency, pair)``."""
    if mw_amp is None:
        raise ValueError("mw-amp is required: choose a reviewed DAC0 amplitude for your MW chain")
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, frequencies_hz, init_count, init_period_batches, post_init_delay_batches,
                  laser_duration_batches, mw_amp, window_offset_batches, window_batches, pairs,
                  pairs_per_rerun, shot_period_batches)
        program = build_program(m)
        shared = {
            "init_count": init_count,
            "init_period_batches": init_period_batches,
            "post_init_delay_batches": post_init_delay_batches,
            "laser_duration_batches": laser_duration_batches,
            "mw_amp_code": units.amp_to_code(mw_amp),
            "window_offset_batches": window_offset_batches,
            "window_batches": window_batches,
            "shot_period_batches": shot_period_batches,
        }
        ref = np.empty((len(frequencies_hz), pairs), dtype=np.int64)
        sig = np.empty_like(ref)
        run.setup(drv, m, {0: program})
        for fi, frequency_hz in enumerate(frequencies_hz):
            point = {**shared, "mw_freq_code": units.freq_to_code(frequency_hz, m.params)}
            for first_pair in range(0, pairs, pairs_per_rerun):
                block_pairs = min(pairs_per_rerun, pairs - first_pair)
                result = run.rerun(
                    drv, m, {0: program},
                    params={0: {**point, "pairs_per_rerun": block_pairs}},
                    results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
                )[0]["out"]
                block_ref, block_sig = unpack_pairs(result, block_pairs)
                ref[fi, first_pair:first_pair + block_pairs] = [_s32(int(value)) for value in block_ref]
                sig[fi, first_pair:first_pair + block_pairs] = [_s32(int(value)) for value in block_sig]
        return m, ref, sig
    finally:
        drv.close()


def main(argv=None):
    formatted_time = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--frequency-start-hz", required=True, type=float)
    parser.add_argument("--frequency-stop-hz", required=True, type=float)
    parser.add_argument("--frequency-steps", required=True, type=int)
    parser.add_argument("--mw-amp", required=True, type=float,
                        help="reviewed DAC0 amplitude fraction in [-1, 1]")
    parser.add_argument("--window-offset-batches", required=True, type=int)
    parser.add_argument("--window-batches", required=True, type=int)
    parser.add_argument("--init-count", type=int, default=DEFAULT_INIT_COUNT)
    parser.add_argument("--init-period-batches", type=int, default=DEFAULT_INIT_PERIOD_BATCHES)
    parser.add_argument("--post-init-delay-batches", type=int, default=DEFAULT_POST_INIT_DELAY_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int, default=DEFAULT_LASER_TRIGGER_BATCHES)
    parser.add_argument("--pairs", type=int, default=16)
    parser.add_argument("--pairs-per-rerun", type=int, default=MAX_PAIRS_PER_RERUN)
    parser.add_argument("--shot-period-batches", type=int, default=DEFAULT_SHOT_PERIOD_BATCHES,
                        help="start-to-start spacing for every reference or signal shot")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_mw_on_esr_batched_{formatted_time}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_mw_on_esr_batched_{formatted_time}.png"))
    args = parser.parse_args(argv)
    frequencies_hz = frequency_grid(args.frequency_start_hz, args.frequency_stop_hz, args.frequency_steps)
    duration = mw_duration_batches(args.init_count, args.init_period_batches, args.laser_duration_batches,
                                   args.post_init_delay_batches, args.window_offset_batches, args.window_batches)
    _, ref, sig = acquire_scan(
        args.host, frequencies_hz, port=args.port, init_count=args.init_count,
        init_period_batches=args.init_period_batches, post_init_delay_batches=args.post_init_delay_batches,
        laser_duration_batches=args.laser_duration_batches, mw_amp=args.mw_amp,
        window_offset_batches=args.window_offset_batches, window_batches=args.window_batches,
        pairs=args.pairs, pairs_per_rerun=args.pairs_per_rerun,
        shot_period_batches=args.shot_period_batches, timeout_s=args.timeout_s,
    )
    best = save_and_plot(frequencies_hz, ref, sig, args.output, args.plot, mw_duration=duration)
    print(f"saved batched MW-during-optical ESR scan to {args.output} and {args.plot}; "
          f"{args.pairs_per_rerun} pairs/RPC, {args.shot_period_batches} batches/shot, "
          f"largest measured |contrast| at {best:.9g} Hz")


if __name__ == "__main__":
    main()
