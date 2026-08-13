"""Stage-0 pulsed-NV raw detector measurement using the shared ``robs`` buffer.

Each pair contains an identical zero-amplitude DAC1 capture gate.  The laser-on
member schedules one high-level PMODA trigger inside that gate; the laser-off
member omits it.  The external laser is rising-edge triggered, so the software
high time is a robust trigger width, not the optical pulse length.  The host
reads only the written trace prefix and plots ``mean(on) - mean(off)`` in ADC
codes.  This is a timing/shape diagnostic, not an integrator or voltage
calibration.
"""

from __future__ import annotations

import argparse
import math
from pathlib import Path
from typing import no_type_check

import numpy as np

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import ADC_BATCH, SocMap, SocParams
from riscq.pulses import Pulse, envelopes


SCHEDULE_LEAD = 2_048
DEFAULT_CAPTURE_BATCHES = 512
DEFAULT_LASER_DELAY_BATCHES = 96
# A ~39 ns digital high interval is comfortably above one DSP tick.  It controls
# trigger robustness only; the laser's rising-edge-triggered optical pulse has
# its own width set by the external hardware.
DEFAULT_LASER_TRIGGER_BATCHES = 19
LASER_HALF_PERIOD = 1  # ignored for cw=1, but required by the hardware helper
LASER_CW = 1


def capture_table(m: SocMap) -> ParamTable:
    """A DAC1-silent pulse whose validity clocks ADC samples into ``robs``."""
    return ParamTable(1, 0.0, {
        "capture": Pulse(envelopes.square(m.params.env_depth), amp=0.0),
    })


@no_type_check
@kernel
def k_raw_readout(capture: ParamTable, out: Array, capture_batches: int,
                  laser_delay_batches: int, laser_duration_batches: int, laser_on: int):
    """One paired-shot member: same capture timing, optionally with one laser pulse."""
    init_pulse_params(capture.pulses)  # noqa: F821
    set_freq(capture, capture.freq)  # noqa: F821
    set_start(capture, now())  # noqa: F821
    set_dur(capture, capture["capture"], capture_batches << 16)  # noqa: F821
    capture_start = now() + SCHEDULE_LEAD  # noqa: F821
    laser_start = capture_start + laser_delay_batches
    play(capture, capture["capture"], capture_start)  # noqa: F821
    if laser_on != 0:
        play_laser(LASER_HALF_PERIOD, laser_duration_batches, LASER_CW, laser_start)  # noqa: F821
    wait_until(capture_start + capture_batches + 64)  # noqa: F821
    out[0] = capture_start
    out[1] = capture_batches
    out[2] = laser_start
    out[3] = laser_on


def build_program(m: SocMap):
    return compile_kernel(k_raw_readout, m, tables={"capture": capture_table(m)}, out=Array(4))


def _validate(m: SocMap, capture_batches: int, laser_delay_batches: int,
              laser_duration_batches: int, pairs: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not 1 <= capture_batches <= m.params.rob_depth:
        raise ValueError(f"capture-batches must be in 1..{m.params.rob_depth} to avoid robs wrapping")
    if laser_delay_batches < 0:
        raise ValueError("laser-delay-batches must be non-negative")
    if not 1 <= laser_duration_batches <= 65_535:
        raise ValueError("laser-duration-batches must be in 1..65535")
    if laser_delay_batches + laser_duration_batches > capture_batches:
        raise ValueError("laser pulse must end within the readout-buffer capture gate")
    if pairs < 1:
        raise ValueError("pairs must be positive")


def acquire_pairs(host: str, port: int = 9091, capture_batches: int = DEFAULT_CAPTURE_BATCHES,
                  laser_delay_batches: int = DEFAULT_LASER_DELAY_BATCHES,
                  laser_duration_batches: int | None = None, pairs: int = 1,
                  timeout_s: float = 2.0) -> tuple[SocMap, np.ndarray, np.ndarray]:
    """Return aligned ``(map, laser_off, laser_on)`` arrays shaped ``(pairs, batches, 4)``."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        if laser_duration_batches is None:
            laser_duration_batches = DEFAULT_LASER_TRIGGER_BATCHES
        _validate(m, capture_batches, laser_delay_batches, laser_duration_batches, pairs)
        program = build_program(m)
        params = {"capture_batches": capture_batches, "laser_delay_batches": laser_delay_batches,
                  "laser_duration_batches": laser_duration_batches}
        run.setup(drv, m, {0: program})
        off, on = [], []
        for _ in range(pairs):
            # Interleave the pair so baseline drift affects both conditions similarly.
            for laser_on, destination in ((0, off), (1, on)):
                run.rerun(drv, m, {0: program}, params={0: {**params, "laser_on": laser_on}},
                          results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)))
                raw = run.read_robs(drv, m, capture_batches * ADC_BATCH * 4)
                destination.append(raw.reshape(capture_batches, ADC_BATCH))
        return m, np.stack(off), np.stack(on)
    finally:
        drv.close()


def combine_adc_lanes(traces: np.ndarray) -> np.ndarray:
    """Return each ``(..., batch, lane)`` trace as chronological ADC samples.

    The four lanes in a DSP batch are consecutive samples from one ADC stream,
    rather than four independent detector channels.
    """
    if traces.ndim < 2 or traces.shape[-1] != ADC_BATCH:
        raise ValueError(f"traces must end in (batches, {ADC_BATCH}) ADC lanes")
    return traces.reshape(*traces.shape[:-2], traces.shape[-2] * ADC_BATCH)


def save_and_plot(m: SocMap, off: np.ndarray, on: np.ndarray, output: Path, plot: Path,
                  laser_delay_batches: int, laser_duration_batches: int) -> None:
    """Save raw codes and plot the combined paired detector response with ±1σ shading."""
    sample_hz = m.params.dsp_freq_hz * ADC_BATCH
    time_ns = np.arange(off.shape[1] * ADC_BATCH) / sample_hz * 1e9
    off_combined = combine_adc_lanes(off)
    on_combined = combine_adc_lanes(on)
    delta = on_combined - off_combined
    np.savez(output, laser_off=off, laser_on=on, delta=delta, mean_delta=delta.mean(axis=0),
             std_delta=delta.std(axis=0), time_ns=time_ns, dsp_freq_hz=m.params.dsp_freq_hz,
             adc_sample_hz=sample_hz, laser_delay_batches=laser_delay_batches,
             laser_duration_batches=laser_duration_batches)
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, ax = plt.subplots(layout="constrained")
    mean, std = delta.mean(axis=0), delta.std(axis=0)
    line, = ax.plot(time_ns, mean, label="combined ADC samples")
    ax.fill_between(time_ns, mean - std, mean + std, color=line.get_color(), alpha=0.18)
    laser_start_ns = laser_delay_batches / m.params.dsp_freq_hz * 1e9
    laser_end_ns = (laser_delay_batches + laser_duration_batches) / m.params.dsp_freq_hz * 1e9
    ax.axvspan(laser_start_ns, laser_end_ns, color="black", alpha=0.08, label="laser pulse")
    ax.set(xlabel="time from capture-gate start (ns)", ylabel="laser-on minus laser-off (ADC code)",
           title=f"Pulsed-NV raw detector response ({off.shape[0]} paired acquisition(s))")
    ax.grid(True, alpha=0.3)
    ax.legend()
    fig.savefig(plot, dpi=160)
    plt.close(fig)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--capture-batches", type=int, default=DEFAULT_CAPTURE_BATCHES)
    parser.add_argument("--laser-delay-batches", type=int, default=DEFAULT_LASER_DELAY_BATCHES)
    parser.add_argument("--laser-duration-batches", type=int,
                        help="digital trigger high width; default is 19 DSP ticks (~39 ns), not optical width")
    parser.add_argument("--pairs", type=int, default=16, help="interleaved laser-off/laser-on pairs")
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path, default=Path("data/nv_raw_readout.npz"))
    parser.add_argument("--plot", type=Path, default=Path("data/nv_raw_readout.png"))
    args = parser.parse_args(argv)
    m, off, on = acquire_pairs(args.host, args.port, args.capture_batches, args.laser_delay_batches,
                               args.laser_duration_batches, args.pairs, args.timeout_s)
    laser_duration = args.laser_duration_batches or DEFAULT_LASER_TRIGGER_BATCHES
    save_and_plot(m, off, on, args.output, args.plot, args.laser_delay_batches, laser_duration)
    print(f"saved {off.shape[0]} off/on pairs, {off.shape[1]} batches / {off.shape[1] * ADC_BATCH} samples "
          f"to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
