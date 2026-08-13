import numpy as np
import pytest

from software.quantum_sensing.nv_spin_contrast_abba_window import (
    inclusive_grid,
    summarize_windows,
)


def test_inclusive_grid_keeps_requested_stop():
    assert inclusive_grid(50, 100, 5, "delay") == list(range(50, 101, 5))
    assert inclusive_grid(8, 31, 4, "window") == [8, 12, 16, 20, 24, 28, 31]
    with pytest.raises(ValueError, match="positive"):
        inclusive_grid(1, 2, 0, "test")


def test_window_summary_uses_paired_run_statistics():
    detuned = np.array([[[100, 200]], [[110, 220]]], dtype=float)
    resonant = np.array([[[90, 180]], [[99, 198]]], dtype=float)
    difference, std, sem, snr, z, by_run = summarize_windows(detuned, resonant)
    np.testing.assert_allclose(by_run[:, 0], [[-10, -20], [-11, -22]])
    np.testing.assert_allclose(difference, [[-10.5, -21.0]])
    np.testing.assert_allclose(std, [[np.sqrt(0.5), np.sqrt(2.0)]])
    np.testing.assert_allclose(sem, [[0.5, 1.0]])
    np.testing.assert_allclose(z, np.abs(difference) / sem)
    np.testing.assert_allclose(snr, np.abs(difference) / std)
