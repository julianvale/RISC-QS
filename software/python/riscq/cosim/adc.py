"""ADC injection — the user-facing centerpiece of the cosim (docs/software/06 §3b).

The SoC's ADC ports carry `adc_batch` real 16-bit lanes per batch tick (not batch_size — the ADC path
is the demod rate). An AdcSource supplies those lanes for each batch; FixedAdc/CallbackAdc are
open-loop, QuantumModel is the closed-loop hook (the harness captures the DAC drive and feeds back the
model's response). pack_adc lowers the lanes to the 64-bit io_adc payload word the RTL reads.
"""

import numpy as np

from ..socconfig import SocConfig


class AdcSource:
    """Supplies ADC samples for a batch tick: adc_batch real (or complex) lanes in [-1, 1]."""

    def adc_samples(self, core: int, t_batch: int) -> np.ndarray:
        raise NotImplementedError


class FixedAdc(AdcSource):
    """A fixed real waveform, sliced adc_batch lanes per batch (open-loop)."""

    def __init__(self, array, adc_batch: int = 4):
        self.array = np.asarray(array)
        self.n = adc_batch

    def adc_samples(self, core: int, t_batch: int) -> np.ndarray:
        s = t_batch * self.n
        chunk = self.array[s:s + self.n]
        if len(chunk) < self.n:
            chunk = np.concatenate([chunk, np.zeros(self.n - len(chunk), self.array.dtype)])
        return chunk


class CallbackAdc(AdcSource):
    """A plain function of (core, t_batch) → adc_batch lanes (open-loop, e.g. a swept tone)."""

    def __init__(self, fn):
        self.fn = fn

    def adc_samples(self, core: int, t_batch: int) -> np.ndarray:
        return np.asarray(self.fn(core, t_batch))


class QuantumModel:
    """User physics (closed-loop, docs/software/06 §3b): given the DAC drive the SoC played this
    window, return the ADC response the converter digitizes. Strictly optional (qutip is an extra)."""

    def adc_response(self, t_batch: int, dac_drive: np.ndarray) -> np.ndarray:
        raise NotImplementedError


def pack_adc(samples, cfg: SocConfig) -> int:
    """Lower adc_batch lanes (real part used; ADC is real-valued) to the 64-bit io_adc payload word —
    lane k at bits [k*w .. k*w+w), s16-coded, exactly as PulseTableSocSim.adcWord builds it."""
    w = cfg.contract.data_width
    word = 0
    for k, s in enumerate(samples):
        word |= (cfg.amp2code(float(np.real(s))) & ((1 << w) - 1)) << (k * w)
    return word


def tone(cfg: SocConfig, freq_code: int, amp: float = 0.85) -> CallbackAdc:
    """A free-running real cosine at `freq_code` (matched to a demod LO tuned to the same code).

    The LO is exp(iπ·F·s/2^(w-1)) at sample index s = adc_batch·t + k, so a cosine at the same F is
    frequency-matched and the demod integral is large; a detuned LO averages it to ≈0 (the VNA
    principle). Absolute phase is irrelevant — the matched magnitude is phase-invariant."""
    n, w = cfg.contract.adc_batch, cfg.contract.data_width
    scale = float(1 << (w - 1))

    def fn(core, t):
        return np.array([amp * np.cos(np.pi * freq_code * (t * n + k) / scale) for k in range(n)])

    return CallbackAdc(fn)
