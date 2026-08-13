import json

import numpy as np
import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_esr_halfmw import (
    DEFAULT_FREQUENCY_STEPS,
    DEFAULT_HALF_DURATION_BATCHES,
    DEFAULT_LASER_START_BATCHES,
    DEFAULT_LASER_TRIGGER_BATCHES,
    DEFAULT_READOUT_DELAY_BATCHES,
    DEFAULT_READOUT_WINDOW_BATCHES,
    DEFAULT_SAMPLES_PER_FREQUENCY,
    MAX_RESET_PULSES,
    _validate,
    build_program,
    build_symmetric_reset_program,
    frequency_grid,
    save_and_plot,
    summarize_runs,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_defaults_transcribe_working_halfmw_event_geometry():
    assert DEFAULT_HALF_DURATION_BATCHES == 492
    assert DEFAULT_LASER_START_BATCHES == 375
    assert DEFAULT_LASER_TRIGGER_BATCHES == 30
    assert DEFAULT_READOUT_DELAY_BATCHES == 77
    assert DEFAULT_READOUT_WINDOW_BATCHES == 23
    assert DEFAULT_LASER_START_BATCHES + DEFAULT_LASER_TRIGGER_BATCHES <= DEFAULT_HALF_DURATION_BATCHES
    assert (DEFAULT_LASER_START_BATCHES + DEFAULT_READOUT_DELAY_BATCHES
            + DEFAULT_READOUT_WINDOW_BATCHES <= DEFAULT_HALF_DURATION_BATCHES)


def test_frequency_grid_is_inclusive_and_ascending_like_qdspectro():
    grid = frequency_grid(2.5e9, 3.2e9, DEFAULT_FREQUENCY_STEPS)
    assert len(grid) == DEFAULT_FREQUENCY_STEPS
    assert grid[0] == 2.5e9
    assert grid[-1] == 3.2e9
    assert grid == sorted(grid)


def test_validation_rejects_invalid_event_geometry_and_excessive_train_length():
    m = _map()
    with pytest.raises(ValueError, match="laser start and duration"):
        _validate(m, [2.87e9], 1.0, 100, 80, 30, 70, 30, 0, 1, 1)
    with pytest.raises(ValueError, match="readout delay and duration"):
        _validate(m, [2.87e9], 1.0, 100, 30, 30, 60, 30, 0, 1, 1)
    with pytest.raises(ValueError, match="samples-per-frequency"):
        _validate(m, [2.87e9], 1.0, 492, 375, 30, 77, 23, 0,
                  DEFAULT_SAMPLES_PER_FREQUENCY + 1, 1)
    with pytest.raises(ValueError, match="reset-pulses"):
        _validate(m, [2.87e9], 1.0, 492, 375, 30, 77, 23, 0, 1, 1,
                  preparation="symmetric-reset", reset_pulses=MAX_RESET_PULSES + 1)
    with pytest.raises(ValueError, match="requires preparation"):
        _validate(m, [2.87e9], 1.0, 492, 375, 30, 77, 23, 0, 1, 1,
                  reset_pulses=1)


def test_symmetric_reset_preparation_accepts_matched_reset_parameters():
    _validate(
        _map(), [2.87e9], 1.0, 492, 375, 30, 77, 23, 0, 1, 1,
        preparation="symmetric-reset", reset_pulses=20, post_reset_settle_batches=492,
    )


def test_summary_matches_qdspectro_ratio_of_per_run_means():
    reference = np.array([[100, 200], [120, 240]], dtype=float)
    signal = np.array([[90, 180], [96, 216]], dtype=float)
    ratio, sem, ratio_by_run = summarize_runs(reference, signal)
    np.testing.assert_allclose(ratio_by_run, [[0.9, 0.9], [0.8, 0.9]])
    np.testing.assert_allclose(ratio, [0.85, 0.9])
    np.testing.assert_allclose(sem, [0.05, 0.0])


def test_save_records_run_parameters_in_npz_and_json_sidecar(tmp_path):
    output = tmp_path / "scan.npz"
    plot = tmp_path / "scan.png"
    save_and_plot(
        [2.53e9, 2.55e9],
        np.array([[100.0, 101.0], [102.0, 103.0]]),
        np.array([[99.0, 100.0], [101.0, 102.0]]),
        output,
        plot,
        half_duration_batches=492,
        laser_start_batches=375,
        laser_duration_batches=30,
        readout_delay_batches=77,
        readout_window_batches=23,
        warmup_pairs=0,
        samples_per_frequency=1000,
        experiment_metadata={"mw_amp": 0.75, "platform": "rfsoc4x2-nv-1q"},
    )

    with np.load(output) as saved:
        assert saved["mw_amp"].item() == 0.75
        assert saved["frequency_start_hz"].item() == 2.53e9
        assert saved["frequency_stop_hz"].item() == 2.55e9
        assert saved["frequency_steps"].item() == 2
        embedded = json.loads(saved["experiment_metadata_json"].item())
        assert embedded["mw_amp"] == 0.75

    sidecar = json.loads(output.with_suffix(".json").read_text(encoding="utf-8"))
    assert sidecar == embedded
    assert sidecar["samples_per_frequency"] == 1000
    assert sidecar["averages"] == 2


def test_kernel_compiles_with_accumulators_and_rolling_queue_schedule():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"mw_freq_code", "warmup_pairs", "samples_per_frequency"} <= set(program.params)
    assert "signal_sum = signal_sum + read_real()" in program.c_source
    assert "reference_sum = reference_sum + read_real()" in program.c_source
    assert "next_signal_start = signal_start + 4 * half_duration_batches" in program.c_source
    assert "group_start" not in program.c_source


def test_symmetric_reset_kernel_compiles_with_matched_preparation():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_symmetric_reset_program(_map())
    assert {"reset_pulses", "post_reset_settle_batches"} <= set(program.params)
    assert program.c_source.count("while (reset_index < reset_pulses)") == 2
    assert "signal_laser = reset_laser + post_reset_settle_batches" in program.c_source
    assert "reference_laser = reset_laser + post_reset_settle_batches" in program.c_source
