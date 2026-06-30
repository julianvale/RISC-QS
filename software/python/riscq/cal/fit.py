"""fit.py — the six curve-fit models the calibration experiments need (specs 02 §5).

Each model is a private `f(x, *params)` plus a public wrapper `name(x, y)` that auto-seeds and calls
scipy.optimize.curve_fit, then returns a dict of the fitted params alongside the derived quantity the
experiment consumes (period, τ, fringe frequency, vertex, x-intercept). Seeds are computed from the data
(range → amplitude/offset, FFT peak → frequency, argmin/argmax → vertex) so the fits survive the noisy
shot-averaged inputs the experiments feed them.
"""

import numpy as np
from scipy.optimize import curve_fit

_MAXFEV = 10000


# ── model functions ─────────────────────────────────────────────────────────────────────────────────
def _cos(x, A, f, phi, c):
    return A * np.cos(2 * np.pi * f * x + phi) + c


def _decaying_cos(x, A, f, phi, tau, c):
    return A * np.exp(-x / tau) * np.cos(2 * np.pi * f * x + phi) + c


def _exp(x, A, tau, c):
    return A * np.exp(-x / tau) + c


def _parabola(x, a, x0, c):
    return a * (x - x0) ** 2 + c


def _linear(x, m, b):
    return m * x + b


def _abs(x, A, x0, c):
    return A * np.abs(x - x0) + c


def _fft_freq(x, y):
    """Dominant non-DC frequency of y on the uniform x grid — the cosine/Ramsey frequency seed."""
    dx = (x[-1] - x[0]) / (len(x) - 1)
    mag = np.abs(np.fft.rfft(y - y.mean()))
    return np.fft.rfftfreq(len(x), dx)[1:][np.argmax(mag[1:])]    # skip the DC bin


# ── curve-fit wrappers ──────────────────────────────────────────────────────────────────────────────
def cosine(x, y):
    """A·cos(2πf x+φ)+c (Rabi/Phase). Seeds: c=mean, A=½ peak-to-peak, f=FFT peak, φ=0."""
    x, y = np.asarray(x, float), np.asarray(y, float)
    p0 = [(y.max() - y.min()) / 2, _fft_freq(x, y), 0.0, y.mean()]
    A, f, phi, c = curve_fit(_cos, x, y, p0=p0, maxfev=_MAXFEV)[0]
    if A < 0:                                  # fold a negative amplitude into the phase so x_max is a max
        A, phi = -A, phi + np.pi
    f = abs(f)
    k = np.ceil(x[0] * f + phi / (2 * np.pi))  # first cos-arg multiple of 2π at/after x[0]
    return {"A": A, "f": f, "phi": phi % (2 * np.pi), "c": c,
            "period": 1 / f, "x_max": (k - phi / (2 * np.pi)) / f}


def decaying_cosine(x, y):
    """A·exp(-x/τ)·cos(2πf x+φ)+c (Ramsey). τ seed = full span (slow decay); f from FFT peak."""
    x, y = np.asarray(x, float), np.asarray(y, float)
    p0 = [(y.max() - y.min()) / 2, _fft_freq(x, y), 0.0, x[-1] - x[0], y.mean()]
    A, f, phi, tau, c = curve_fit(_decaying_cos, x, y, p0=p0, maxfev=_MAXFEV)[0]
    return {"A": A, "f": abs(f), "phi": phi % (2 * np.pi), "tau": abs(tau), "c": c}


def exponential(x, y):
    """A·exp(-x/τ)+c (T1/echo). Seeds: c=asymptote (last point), A=y0-c, τ from the 1/e crossing."""
    x, y = np.asarray(x, float), np.asarray(y, float)
    c0, A0 = y[-1], y[0] - y[-1]
    # τ ≈ x where the swing has fallen to 1/e of its initial value (robust, sign-agnostic)
    tau0 = x[np.argmin(np.abs(y - (c0 + A0 / np.e)))] - x[0] or (x[-1] - x[0]) / 2
    A, tau, c = curve_fit(_exp, x, y, p0=[A0, tau0, c0], maxfev=_MAXFEV)[0]
    return {"A": A, "tau": tau, "c": c}


def parabola(x, y):
    """a·(x-x0)²+c (error-amplified amp). Concavity (edges vs centre) picks the vertex sign + seed."""
    x, y = np.asarray(x, float), np.asarray(y, float)
    opens_up = (y[0] + y[-1]) / 2 > y[len(y) // 2]            # edges above centre ⇒ a minimum (a>0)
    iv = np.argmin(y) if opens_up else np.argmax(y)
    a0 = (y.max() - y.min()) / ((x.max() - x.min()) / 2) ** 2
    p0 = [a0 if opens_up else -a0, x[iv], y[iv]]
    a, x0, c = curve_fit(_parabola, x, y, p0=p0, maxfev=_MAXFEV)[0]
    return {"a": a, "x0": x0, "c": c}                          # x0 = vertex


def linear(x, y):
    """m·x+b (Phase crossing). Seed via np.polyfit; derived x-intercept = -b/m."""
    x, y = np.asarray(x, float), np.asarray(y, float)
    m, b = curve_fit(_linear, x, y, p0=list(np.polyfit(x, y, 1)))[0]
    return {"m": m, "b": b, "x_intercept": -b / m}


def absolute_value(x, y):
    """A·|x-x0|+c (Frequency vertex). V/Λ detected by concavity; vertex seed = argmin/argmax."""
    x, y = np.asarray(x, float), np.asarray(y, float)
    is_v = (y[0] + y[-1]) / 2 > y[len(y) // 2]                # edges above centre ⇒ V (A>0)
    iv = np.argmin(y) if is_v else np.argmax(y)
    A0 = (y.max() - y.min()) / ((x.max() - x.min()) / 2)
    p0 = [A0 if is_v else -A0, x[iv], y[iv]]
    A, x0, c = curve_fit(_abs, x, y, p0=p0, maxfev=_MAXFEV)[0]
    return {"A": A, "x0": x0, "c": c}                          # x0 = vertex
