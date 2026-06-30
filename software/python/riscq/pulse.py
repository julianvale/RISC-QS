"""pulse.py — envelope generators + the envelope-RAM packer (docs/software/04 §3a).

Generators return *physical* complex envelopes in [-1, 1] sampled at fs (so quantization happens once,
in the packer). `pack_envelope` lowers an envelope to the host-AXI word stream for a channel's
envelope RAM, matching that channel's interpolation (01 §6): the SoC stores N/interp complex samples
per batch line and block-replicates lane m ← stored[m/interp] on read (RiscqRfWithPulseTableFiber
.expandEnv), so the packer decimates by taking lane j*interp for stored sample j.
"""

from math import ceil

import numpy as np

from .socconfig import SocConfig


# ── envelope generators (physical complex samples in [-1, 1] at fs) ─────────────────────────────
def _n(t_width: float, fs: float) -> int:
    return max(1, round(t_width * fs))


def gaussian(t_width: float, fs: float, sigmas: float = 3) -> np.ndarray:
    """A real Gaussian, peak normalized to 1, centered in a t_width window."""
    n = _n(t_width, fs)
    t = (np.arange(n) - (n - 1) / 2) / fs
    sigma = t_width / (2 * sigmas)
    g = np.exp(-0.5 * (t / sigma) ** 2)
    return g.astype(np.complex128)


def cos_edge_square(t_width: float, fs: float, ramp_fraction: float = 0.25) -> np.ndarray:
    """Flat-top with raised-cosine rise/fall edges (each ramp_fraction of the width)."""
    n = _n(t_width, fs)
    nr = max(1, int(round(n * ramp_fraction)))
    nr = min(nr, n // 2)
    env = np.ones(n)
    edge = 0.5 * (1 - np.cos(np.pi * (np.arange(nr) + 0.5) / nr))
    env[:nr] = edge
    env[n - nr:] = edge[::-1]
    return env.astype(np.complex128)


def drag(t_width: float, fs: float, sigmas: float = 3, beta: float = 0.0) -> np.ndarray:
    """Gaussian + i·beta·d/dt(Gaussian) — the DRAG quadrature correction."""
    g = gaussian(t_width, fs, sigmas).real
    dg = np.gradient(g, 1.0 / fs)
    return (g + 1j * beta * dg).astype(np.complex128)


def square(t_width: float, fs: float) -> np.ndarray:
    """Constant 1.0."""
    return np.ones(_n(t_width, fs), dtype=np.complex128)


# ── packer ──────────────────────────────────────────────────────────────────────────────────────
def pack_envelope(env: np.ndarray, channel: str, cfg: SocConfig, base_line: int = 0):
    """Lower a physical envelope to (start_byte_offset, [32-bit words]) for the channel's env RAM.

    The word stream is contiguous (one 4-byte write per stored complex sample, real in the low 16 bits
    / imag in the high 16), so the driver streams it with write_words — the AXI WidthAdapter steers
    each 4-byte write to the right sub-word of a wider line (no masking needed). Returns the start
    offset relative to the channel's region base (the caller adds host_gate_env / host_readout_env).
    """
    k = cfg.contract
    N = k.batch_size
    interp = k.gate_interp if channel == "gate" else k.readout_interp
    if N % interp:
        raise ValueError(f"interp {interp} must divide batch_size {N}")
    stored_per_line = N // interp                  # gate: 4, readout: 1
    line_bytes = stored_per_line * 4

    re = np.array([cfg.amp2code(x) for x in np.real(env)], dtype=np.int64)
    im = np.array([cfg.amp2code(x) for x in np.imag(env)], dtype=np.int64)

    nbatch = ceil(len(re) / N)                     # pad up to whole batch lines
    pad = nbatch * N - len(re)
    if pad:
        re = np.concatenate([re, np.zeros(pad, np.int64)])
        im = np.concatenate([im, np.zeros(pad, np.int64)])
    re = re.reshape(nbatch, N)[:, ::interp]        # decimate: lane j*interp → stored sample j
    im = im.reshape(nbatch, N)[:, ::interp]

    words = []
    for b in range(nbatch):
        for j in range(stored_per_line):
            words.append((int(re[b, j]) & 0xFFFF) | ((int(im[b, j]) & 0xFFFF) << 16))
    return base_line * line_bytes, words


def num_lines(env: np.ndarray, cfg: SocConfig) -> int:
    """How many envelope-RAM lines (= batches) an envelope occupies."""
    return ceil(len(env) / cfg.batch_size)
