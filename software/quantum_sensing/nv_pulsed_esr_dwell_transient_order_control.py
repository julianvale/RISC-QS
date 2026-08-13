"""Compare forward and reverse frequency-switch dwell trajectories.

The underlying dwell experiment labels its two output rows ``detuned`` and
``resonant``.  This wrapper runs it in both physical orders and relabels the
reverse run so every saved physical comparison is high frequency minus low
frequency, independent of the acquisition order.
"""

from __future__ import annotations

import argparse
import math
import os
import time
from datetime import datetime
from pathlib import Path

import numpy as np

from software.quantum_sensing import nv_pulsed_esr_dwell_transient as dwell


def _sem(samples: np.ndarray) -> np.ndarray:
    """Return a scan-level SEM over axis zero, or NaNs for one scan."""
    samples = np.asarray(samples, dtype=float)
    if samples.shape[0] == 1:
        return np.full(samples.shape[1:], np.nan)
    return samples.std(axis=0, ddof=1) / math.sqrt(samples.shape[0])


def relabel_low_high(runs: np.ndarray, *, reverse: bool = False) -> np.ndarray:
    """Put a dwell result into physical ``(low, high)`` frequency row order."""
    runs = np.asarray(runs, dtype=float)
    if runs.ndim != 3 or runs.shape[1] != 2:
        raise ValueError("runs must have shape (averages, 2, pairs-per-group)")
    return runs[:, ::-1, :] if reverse else runs.copy()


def summarize_order_control(forward_signal_runs: np.ndarray, forward_reference_runs: np.ndarray,
                            forward_contrast_runs: np.ndarray, reverse_signal_runs: np.ndarray,
                            reverse_reference_runs: np.ndarray, reverse_contrast_runs: np.ndarray) -> dict[str, np.ndarray]:
    """Relabel both orders and return pooled physical high-minus-low effects."""
    forward = tuple(relabel_low_high(x, reverse=False) for x in
                    (forward_signal_runs, forward_reference_runs, forward_contrast_runs))
    reverse = tuple(relabel_low_high(x, reverse=True) for x in
                    (reverse_signal_runs, reverse_reference_runs, reverse_contrast_runs))
    if any(x.shape != forward[0].shape for x in (*forward, *reverse)):
        raise ValueError("all forward and reverse arrays must share one shape")
    signal_runs = np.concatenate((forward[0], reverse[0]), axis=0)
    reference_runs = np.concatenate((forward[1], reverse[1]), axis=0)
    contrast_runs = np.concatenate((forward[2], reverse[2]), axis=0)
    signal_effect_runs = signal_runs[:, 1] - signal_runs[:, 0]
    reference_effect_runs = reference_runs[:, 1] - reference_runs[:, 0]
    contrast_effect_runs = contrast_runs[:, 1] - contrast_runs[:, 0]
    return {
        "forward_signal_runs_low_high": forward[0],
        "forward_reference_runs_low_high": forward[1],
        "forward_positive_contrast_runs_low_high": forward[2],
        "reverse_signal_runs_low_high": reverse[0],
        "reverse_reference_runs_low_high": reverse[1],
        "reverse_positive_contrast_runs_low_high": reverse[2],
        "signal_high_minus_low_runs": signal_effect_runs,
        "signal_high_minus_low": signal_effect_runs.mean(axis=0),
        "signal_high_minus_low_sem": _sem(signal_effect_runs),
        "reference_high_minus_low_runs": reference_effect_runs,
        "reference_high_minus_low": reference_effect_runs.mean(axis=0),
        "reference_high_minus_low_sem": _sem(reference_effect_runs),
        "contrast_high_minus_low_runs": contrast_effect_runs,
        "contrast_high_minus_low": contrast_effect_runs.mean(axis=0),
        "contrast_high_minus_low_sem": _sem(contrast_effect_runs),
    }


def acquire_order_control(host: str, *, low_hz: float, high_hz: float, mw_amp: float,
                          pairs_per_group: int = dwell.DEFAULT_PAIRS_PER_GROUP,
                          groups_per_frequency: int = dwell.DEFAULT_GROUPS_PER_FREQUENCY,
                          averages: int = dwell.DEFAULT_AVERAGES, port: int = 9091,
                          timeout_s: float = 10.0) -> tuple[tuple[np.ndarray, np.ndarray, np.ndarray],
                                                             tuple[np.ndarray, np.ndarray, np.ndarray]]:
    """Acquire low-to-high then high-to-low dwell runs using the shared kernel path."""
    if not all(math.isfinite(value) and value > 0 for value in (low_hz, high_hz)):
        raise ValueError("low-hz and high-hz must be positive finite values")
    if high_hz <= low_hz:
        raise ValueError("high-hz must exceed low-hz")
    common = dict(port=port, mw_amp=mw_amp, pairs_per_group=pairs_per_group,
                  groups_per_frequency=groups_per_frequency, averages=averages, timeout_s=timeout_s)
    forward = dwell.acquire(host, detuned_hz=low_hz, resonant_hz=high_hz, **common)
    reverse = dwell.acquire(host, detuned_hz=high_hz, resonant_hz=low_hz, **common)
    return forward, reverse


def save_and_plot(forward: tuple[np.ndarray, np.ndarray, np.ndarray],
                  reverse: tuple[np.ndarray, np.ndarray, np.ndarray], output: Path, plot: Path, *,
                  low_hz: float, high_hz: float, mw_amp: float, pairs_per_group: int,
                  groups_per_frequency: int, averages: int) -> dict[str, np.ndarray]:
    """Save raw orders, physically relabeled effects, and one comparison plot."""
    summary = summarize_order_control(*forward, *reverse)
    output.parent.mkdir(parents=True, exist_ok=True)
    np.savez(output, forward_signal_runs=forward[0], forward_reference_runs=forward[1],
             forward_positive_contrast_runs=forward[2], reverse_signal_runs=reverse[0],
             reverse_reference_runs=reverse[1], reverse_positive_contrast_runs=reverse[2],
             low_hz=low_hz, high_hz=high_hz, mw_amp=mw_amp, pairs_per_group=pairs_per_group,
             groups_per_frequency=groups_per_frequency, averages_per_order=averages,
             forward_order="low_to_high", reverse_order="high_to_low", **summary)
    try:
        import matplotlib.pyplot as plt
    except ImportError as exc:
        raise RuntimeError(f"wrote {output}, but plotting requires matplotlib") from exc
    position = np.arange(1, pairs_per_group + 1)
    fig, axes = plt.subplots(3, 1, sharex=True, layout="constrained", figsize=(9, 9))
    labels = (("MW-on signal", "signal"), ("MW-off reference", "reference"),
              ("positive contrast", "contrast"))
    for ax, (label, key) in zip(axes, labels):
        forward_effect = summary[f"{key}_high_minus_low_runs"][:averages]
        reverse_effect = summary[f"{key}_high_minus_low_runs"][averages:]
        ax.plot(position, forward_effect.mean(axis=0), ".-", label="low → high acquisition")
        ax.plot(position, reverse_effect.mean(axis=0), ".-", label="high → low acquisition")
        effect = summary[f"{key}_high_minus_low"]
        sem = summary[f"{key}_high_minus_low_sem"]
        ax.plot(position, effect, "k.-", label="pooled physical high − low")
        ax.fill_between(position, effect - sem, effect + sem, color="black", alpha=0.12)
        ax.axhline(0.0, color="black", linewidth=0.8)
        ax.set_ylabel(label)
        ax.grid(True, alpha=0.3)
        ax.legend(fontsize="small")
    axes[0].set_title(f"Dwell order control: {high_hz / 1e9:.6g} GHz − {low_hz / 1e9:.6g} GHz")
    axes[-1].set_xlabel("pair number after frequency switch")
    fig.savefig(plot, dpi=160)
    plt.close(fig)
    return summary


def main(argv=None):
    timestamp = datetime.fromtimestamp(time.time()).strftime("%Y-%m-%d_%H_%M")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("BOARD_IP"))
    parser.add_argument("--mw-amp", required=True, type=float)
    parser.add_argument("--low-hz", type=float, default=dwell.DEFAULT_DETUNED_HZ)
    parser.add_argument("--high-hz", type=float, default=dwell.DEFAULT_RESONANT_HZ)
    parser.add_argument("--pairs-per-group", type=int, default=dwell.DEFAULT_PAIRS_PER_GROUP)
    parser.add_argument("--groups-per-frequency", type=int, default=dwell.DEFAULT_GROUPS_PER_FREQUENCY)
    parser.add_argument("--averages", type=int, default=dwell.DEFAULT_AVERAGES)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=10.0)
    parser.add_argument("--output", type=Path,
                        default=Path(f"data/esr/nv_pulsed_esr_dwell_transient_order_control_{timestamp}.npz"))
    parser.add_argument("--plot", type=Path,
                        default=Path(f"data/esr/nv_pulsed_esr_dwell_transient_order_control_{timestamp}.png"))
    args = parser.parse_args(argv)
    if not args.host:
        parser.error("--host is required when BOARD_IP is not set")
    forward, reverse = acquire_order_control(
        args.host, low_hz=args.low_hz, high_hz=args.high_hz, mw_amp=args.mw_amp,
        pairs_per_group=args.pairs_per_group, groups_per_frequency=args.groups_per_frequency,
        averages=args.averages, port=args.port, timeout_s=args.timeout_s,
    )
    save_and_plot(forward, reverse, args.output, args.plot, low_hz=args.low_hz, high_hz=args.high_hz,
                  mw_amp=args.mw_amp, pairs_per_group=args.pairs_per_group,
                  groups_per_frequency=args.groups_per_frequency, averages=args.averages)
    print(f"saved forward/reverse order control to {args.output} and {args.plot}")


if __name__ == "__main__":
    main()
