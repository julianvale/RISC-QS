import pytest

from riscq import build
from riscq.map import SocMap, SocParams
from software.quantum_sensing.nv_pulsed_esr_halfmw_symmetric_reset import (
    DEFAULT_RESET_PULSES,
    acquire_scan,
    build_program,
    settle_us_to_batches,
)


def _map():
    return SocMap(SocParams.load("software/platforms/rfsoc4x2-nv-1q/1.0.0/rfsoc4x2-nv-1q.json"))


def test_symmetric_reset_defaults_to_the_observed_full_reset_count():
    assert DEFAULT_RESET_PULSES == 20


def test_symmetric_reset_requires_at_least_one_reset_before_connecting():
    with pytest.raises(ValueError, match="reset-pulses must be in 1"):
        acquire_scan("test-host", mw_amp=1.0, reset_pulses=0)


def test_settle_time_uses_rfsoc_batch_clock():
    assert settle_us_to_batches(0.0) == 0
    assert settle_us_to_batches(5.0) == 2458
    assert settle_us_to_batches(20.0) == 9830
    with pytest.raises(ValueError, match="non-negative"):
        settle_us_to_batches(-1.0)


def test_symmetric_reset_kernel_compiles_with_two_reset_trains():
    if build.CC is None:
        pytest.skip("RISC-V LLVM toolchain is unavailable in this checkout")
    program = build_program(_map())
    assert {"reset_pulses", "post_reset_settle_batches", "mw_enabled", "laser_enabled"} <= set(program.params)
    assert program.c_source.count("while (reset_index < reset_pulses)") == 2
    assert "signal_laser = reset_laser + post_reset_settle_batches" in program.c_source
    assert "if (mw_enabled)" in program.c_source
    assert "if (laser_enabled)" in program.c_source
