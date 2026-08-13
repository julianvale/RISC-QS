"""Capture and plot the raw ``robs`` trace for a DAC0 -> ADC0 loopback.

This is a diagnostic for the readout-buffer path used by the first pulsed-NV
calibration.  A DAC0 tone provides a known input through the physical loopback;
a simultaneous zero-amplitude readout-drive pulse supplies the valid interval
that makes the shared ``robs`` buffer capture ADC samples.  It does not use the
integrator or attempt a voltage calibration.
"""

from __future__ import annotations

import argparse
import math
from pathlib import Path

import numpy as np

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import ADC_BATCH, SocMap, SocParams
from riscq.pulses import Pulse, envelopes, units


DAC_HZ = 80e6
DAC_AMP_CODE = 3276
SCHEDULE_LEAD = 2_048
DEFAULT_CAPTURE_BATCHES = 512


def _tables(m: SocMap) -> tuple[ParamTable, ParamTable]:
    """DAC0 stimulus and a DAC1-silent capture gate, each spanning the RAM once."""
    envelope = envelopes.square(m.params.env_depth)
    gate = ParamTable(0, DAC_HZ, {
        "stimulus": Pulse(envelope, freq_hz=DAC_HZ, amp=DAC_AMP_CODE / units.AMP_SCALE),
    })
    capture = ParamTable(1, 0.0, {
        # robs capture follows pulse validity, so no RF output is required on DAC1.
        "gate": Pulse(envelope, amp=0.0),
    })
    return gate, capture


@kernel
def k_capture(gate: ParamTable, capture: ParamTable, out: Array, capture_batches: int):
    """Launch the loopback tone and zero-amplitude capture gate at one shared time."""
    init_pulse_params(gate.pulses)  # noqa: F821
    init_pulse_params(capture.pulses)  # noqa: F821
    set_freq(gate, gate.freq)  # noqa: F821
    set_freq(capture, capture.freq)  # noqa: F821
    set_start(gate, now())  # noqa: F821
    set_start(capture, now())  # noqa: F821
    set_dur(gate, gate["stimulus"], capture_batches << 16)  # noqa: F821
    set_dur(capture, capture["gate"], capture_batches << 16)  # noqa: F821
    start = now() + SCHEDULE_LEAD  # noqa: F821
    play(gate, gate["stimulus"], start)  # noqa: F821
    play(capture, capture["gate"], start)  # noqa: F821
    wait_until(start + capture_batches + 64)  # noqa: F821
    out[0] = start
    out[1] = capture_batches


def build_program(m: SocMap):
    gate, capture = _tables(m)
    return compile_kernel(k_capture, m, tables={"gate": gate, "capture": capture}, out=Array(2))


def _validate(m: SocMap, capture_batches: int, shots: int) -> None:
    if m.params.name != "rfsoc4x2-nv-1q":
        raise RuntimeError("this experiment is only valid for the rfsoc4x2-nv-1q platform")
    if not 1 <= capture_batches <= m.params.rob_depth:
        raise ValueError(f"capture-batches must be in 1..{m.params.rob_depth} to avoid robs wrapping")
    if shots < 1:
        raise ValueError("shots must be positive")


def capture_loopback(host: str, port: int = 9091, capture_batches: int = DEFAULT_CAPTURE_BATCHES,
                     shots: int = 1, timeout_s: float = 2.0) -> tuple[SocMap, np.ndarray]:
    """Return ``(map, traces)`` with shape ``(shots, batches, four_adc_lanes)``."""
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    try:
        m = SocMap(SocParams.from_json(drv.board.get_params()))
        _validate(m, capture_batches, shots)
        program = build_program(m)
        run.setup(drv, m, {0: program})
        traces = []
        for _ in range(shots):
            run.rerun(drv, m, {0: program}, params={0: {"capture_batches": capture_batches}},
                      results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)))
            # Only this prefix was written by the capture gate; the remaining BRAM is stale.
            raw = run.read_robs(drv, m, capture_batches * ADC_BATCH * 4)
            traces.append(raw.reshape(capture_batches, ADC_BATCH))
        return m, np.stack(traces)
    finally:
        drv.close()


def save_and_plot(m: SocMap, traces: np.ndarray, output: Path, plot: Path) -> None:
    """Save raw ADC-code lanes to NPZ and a time-domain plot of their shot mean."""
    samples = traces.reshape(traces.shape[0], -1)
    sample_hz = m.params.dsp_freq_hz * ADC_BATCH
    time_ns = np.arange(samples.shape[1]) / sample_hz * 1e9
    
    np.savez(output, traces=traces, mean=samples.mean(axis=0), std=samples.std(axis=0),
             time_ns=time_ns, dsp_freq_hz=m.params.dsp_freq_hz, adc_sample_hz=sample_hz)

    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    fig, ax = plt.subplots(layout="constrained")
    batch_time_ns = np.arange(traces.shape[1]) / m.params.dsp_freq_hz * 1e9
    for lane in range(ADC_BATCH):
        lane_time_ns = batch_time_ns + lane / sample_hz * 1e9
        ax.plot(lane_time_ns, traces[:, :, lane].mean(axis=0),
                label=f"ADC lane {lane}")


    ax.set(xlabel="time from capture-gate start (ns)", ylabel="ADC code",
           title=f"DAC0 -> ADC0 raw robs loopback ({traces.shape[0]} shot(s))")
    ax.set_xlim([100,200])
    ax.grid(True, alpha=0.3)
    ax.legend()
    fig.savefig(plot, dpi=160)
    plt.close(fig)

    fig, ax = plt.subplots(layout="constrained")
    mean_trace = traces.mean(axis=0).reshape(-1)
    ax.plot(time_ns, mean_trace)
    ax.scatter(time_ns, mean_trace)

    ax.set(xlabel="time from capture-gate start (ns)", ylabel="ADC code",
            title=f"DAC0 -> ADC0 raw robs loopback ({traces.shape[0]} shot(s))")
    ax.set_xlim([100,200])
    ax.grid(True, alpha=0.3)
    ax.legend()
    fig.savefig(Path("data/loopback_mean.png"), dpi=160)
    plt.close(fig)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True, help="board-service host or Pyro URI")
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--capture-batches", type=int, default=DEFAULT_CAPTURE_BATCHES)
    parser.add_argument("--shots", type=int, default=1, help="aligned raw acquisitions to average")
    parser.add_argument("--timeout-s", type=float, default=2.0)
    parser.add_argument("--output", type=Path, default=Path("data/loopback_robs.npz"))
    parser.add_argument("--plot", type=Path, default=Path("data/loopback_robs.png"))
    args = parser.parse_args(argv)
    m, traces = capture_loopback(args.host, args.port, args.capture_batches, args.shots, args.timeout_s)
    save_and_plot(m, traces, args.output, args.plot)
    print(f"saved {traces.shape[0]} shot(s), {traces.shape[1]} batches / {traces.shape[1] * 4} samples "
          f"to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
