import numpy as np
import pytest

from software.quantum_sensing import nv_pulsed_esr_dwell_transient_order_control as order_control


def _runs(low, high):
    return np.array([[[low, low + 1], [high, high + 1]]], dtype=float)


def test_reverse_order_is_physically_relabeled_before_effects_are_pooled():
    forward_signal = _runs(10, 15)
    forward_reference = _runs(20, 22)
    forward_contrast = _runs(0.1, 0.3)
    # These rows are raw reverse acquisition order: physical high then low.
    reverse_signal = _runs(16, 11)
    reverse_reference = _runs(23, 21)
    reverse_contrast = _runs(0.4, 0.15)

    summary = order_control.summarize_order_control(
        forward_signal, forward_reference, forward_contrast,
        reverse_signal, reverse_reference, reverse_contrast,
    )

    np.testing.assert_allclose(summary["reverse_signal_runs_low_high"], [[[11, 12], [16, 17]]])
    np.testing.assert_allclose(summary["signal_high_minus_low_runs"], [[5, 5], [5, 5]])
    np.testing.assert_allclose(summary["reference_high_minus_low"], [2, 2])
    np.testing.assert_allclose(summary["contrast_high_minus_low"], [0.225, 0.225])
    np.testing.assert_allclose(summary["signal_high_minus_low_sem"], [0, 0])


def test_acquire_runs_both_orders_through_shared_acquire(monkeypatch):
    calls = []

    def fake_acquire(host, **kwargs):
        calls.append((host, kwargs))
        return (_runs(1, 2), _runs(3, 4), _runs(0.1, 0.2))

    monkeypatch.setattr(order_control.dwell, "acquire", fake_acquire)
    forward, reverse = order_control.acquire_order_control(
        "board", low_hz=2.8e9, high_hz=2.95e9, mw_amp=0.3,
        pairs_per_group=2, groups_per_frequency=3, averages=1, port=9123, timeout_s=4.0,
    )

    assert len(calls) == 2
    assert calls[0] == ("board", {"detuned_hz": 2.8e9, "resonant_hz": 2.95e9, "port": 9123,
                                   "mw_amp": 0.3, "pairs_per_group": 2, "groups_per_frequency": 3,
                                   "averages": 1, "timeout_s": 4.0})
    assert calls[1][1]["detuned_hz"] == 2.95e9
    assert calls[1][1]["resonant_hz"] == 2.8e9
    assert forward[0].shape == reverse[0].shape == (1, 2, 2)


def test_relabel_and_input_validation_reject_bad_shapes_or_frequencies():
    with pytest.raises(ValueError, match="shape"):
        order_control.relabel_low_high(np.zeros((2, 3)))
    with pytest.raises(ValueError, match="exceed"):
        order_control.acquire_order_control("board", low_hz=2.8e9, high_hz=2.8e9, mw_amp=0.1)
