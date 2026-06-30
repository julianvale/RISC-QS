"""M1/M2 golden: the calibration kernel (riscq.program.emit_kernel) + the on-core arithmetic sweep
(riscq.cal.sweep). Fast checks (clang + llvm-objdump, no Verilator):

  * a 1-point/1-shot no-sweep kernel reproduces readout.c's RF/control write-set (trace_writes), with
    the IQ-ring stores landing in core RAM (00-contracts §5);
  * apply_sweep writes the right register per Sweep.target and suppresses the swept demod write;
  * the host reproduces the realized grid exactly ((acc0 + p·inc) >> FRAC), and a re-run rewrites only
    the descriptor — the same ELF serves every sweep of one target ("grid by arithmetic, no table");
  * the Sweep2D bilinear-phase finite-difference seeds reproduce phase2code(2π·δ·τ) mod 2^16.

The authoritative runtime check (the kernel actually fires + the ring drains) is the Verilator cosim.
"""

import math
import os
import subprocess

import numpy as np
import pytest

from riscq import default_config, Program, pulse
from riscq.program import FRAC
from riscq.cal.sweep import Sweep, Sweep2D
from riscq.soc import elf_symbols

from test_firmware import trace_writes, OBJDUMP

SCRATCH = "/tmp/claude-1000/-config-build-agentic-rv-dev/617b3887-d7b2-4654-b259-1cdcd3aeda7e/scratchpad/cal_kernel"


def _readout_prog(cfg, lead=1024):
    """readout.c as a Program: a gate pulse, then a demod LO + one integration window + read."""
    prog = Program(cfg, lead=lead)
    prog.play("gate", t=0.0, freq=1800 * cfg.fs / 2 ** 16, phase=2000 * math.pi / 2 ** 15,
              amp=9000 / 2 ** 15, dur=6 * cfg.batch_size / cfg.fs, env=10)
    prog.readout(t=200 * cfg.batch_size / cfg.fs, demod_freq=2048 * cfg.fs / 2 ** 16,
                 demod_phase=0.0, dur=20 * cfg.batch_size / cfg.fs)
    prog.read_result()
    return prog


def test_kernel_writeset_matches_readout(tmp_path_factory):
    """A no-sweep 1-shot kernel emits readout.c's RF/control writes; IQ stores go to RAM, not a register."""
    cfg = default_config(qubit_num=2)
    elf = _readout_prog(cfg).build_kernel(SCRATCH, "knosweep", n_shots=1, chunk=4, apply=None)
    dis = subprocess.run([OBJDUMP, "-d", elf], capture_output=True, text=True, check=True).stdout
    writes, reads = trace_writes(dis.splitlines())
    rf = {a: v for a, v in writes.items() if a < 0x80000000}

    # the readout sequence's RF/control write addresses (values where statically known)
    assert rf[0x10004] == 1800 << 16        # set_freq(GATE)
    assert rf[0x10010] == 2000 << 16        # phase
    assert rf[0x10014] == 9000 << 16        # amp
    assert rf[0x10018] == 10 << 16          # env
    assert rf[0x1001C] == 6 << 16           # dur
    assert 0x10000 in rf                    # fire(GATE)
    assert 0x14100 in rf                    # set_start_time(GATE)  (dynamic t0)
    assert rf[0x30000] == 2048 << 16        # set_demod freq
    assert rf[0x40000] == 20 << 16          # arm_readout dur
    assert 0x44100 in rf                    # arm_readout start_time (dynamic)
    assert 0xBFF8 in reads                  # now()
    # the IQ ring lives in core RAM — every store is a RAM write, never an RF/control register
    assert any(a >= 0x80000000 for a in writes), "iq_store must write the RING in core RAM"


@pytest.mark.parametrize("target,reg_sub,suppressed", [
    ("demod.freq", "set_demod(code,", True),     # sweep owns the demod tune → drop the in-loop set_demod
    ("readout.amp", "set_amp(RDRV, 0, code)", False),
    ("drive.amp", "set_amp(GATE, 0, code)", False),
    ("drive.phase", "set_phase(GATE, 0, code)", False),
])
def test_apply_sweep_per_target(target, reg_sub, suppressed):
    cfg = default_config(qubit_num=2)
    prog = _readout_prog(cfg)
    sw = Sweep(target, 1.0, 2.0, n=8)        # endpoints irrelevant to the C; only the target shapes it
    src = prog.emit_kernel(n_shots=4, chunk=4, apply=sw.apply())
    assert reg_sub in src, f"{target}: apply_sweep should write {reg_sub!r}"
    assert "apply_sweep((int)(acc >> 16))" in src
    # the swept demod write must be removed from the shot loop (only apply_sweep drives it)
    in_loop_demod = "      set_demod(" in src
    assert in_loop_demod is (not suppressed)


def test_sweep_recurrence_is_exact():
    """realized_codes reproduces the on-core fixed-point recurrence, sub-LSB over a fine sweep."""
    cfg = default_config(qubit_num=2)
    sw = Sweep("readout.freq", 297.5e6, 302.5e6, n=31)   # ±2.5 MHz / 31, the drift-prone case
    n, acc0, inc = sw.descriptor_words(cfg)
    assert n == 31
    codes = sw.realized_codes(cfg)
    assert codes.tolist() == [(acc0 + p * inc) >> FRAC for p in range(31)]
    # monotone, endpoints land on the rounded codes, no integer-rounding runaway (≤1 LSB off linspace)
    ideal = np.linspace(cfg.freq2code(297.5e6), cfg.freq2code(302.5e6), 31)
    assert np.all(np.abs(codes - ideal) <= 1)
    assert codes[0] == cfg.freq2code(297.5e6)


def test_grid_by_arithmetic_no_table():
    """One ELF serves every sweep of a target: the C is descriptor-independent, only the words change."""
    cfg = default_config(qubit_num=2)
    prog = _readout_prog(cfg)
    a = prog.emit_kernel(n_shots=8, chunk=16, apply=Sweep("readout.freq", 1e6, 2e6, 11).apply())
    b = prog.emit_kernel(n_shots=8, chunk=16, apply=Sweep("readout.freq", 5e6, 9e6, 41).apply())
    assert a == b, "the kernel must not bake the sweep endpoints — re-runs rewrite only the descriptor"
    assert Sweep("readout.freq", 1e6, 2e6, 11).descriptor_words(cfg) \
        != Sweep("readout.freq", 5e6, 9e6, 41).descriptor_words(cfg)


def test_symbols_present_all_targets():
    """Every target's kernel compiles and exposes the host-written SWEEP + RING globals by symbol."""
    cfg = default_config(qubit_num=2)
    for i, t in enumerate(["demod.freq", "readout.amp", "drive.amp", "drive.phase"]):
        prog = _readout_prog(cfg)
        elf = prog.build_kernel(SCRATCH, f"ksym{i}", n_shots=2, chunk=4, apply=Sweep(t, 1.0, 2.0, 4).apply())
        syms = elf_symbols(elf)
        assert "SWEEP" in syms and "RING" in syms


def test_sweep2d_bilinear_phase_seeds():
    """The Ramsey finite-difference seeds reproduce phase2code(2π·δ·τ) mod 2^16 via pure addition."""
    cfg = default_config(qubit_num=2)
    sw = Sweep2D(det_start=-5e6, det_stop=5e6, n_det=5, del_start=0.0, del_stop=1e-6, n_del=7)
    n_det, n_del, tau0, dtau, S, dS, D, dD = sw.descriptor_words(cfg)
    dets = sw.realized_detunings()
    dels_b = [tau0 + i * dtau for i in range(n_del)]

    # run the nested-difference recurrence (00-contracts §2) and compare to the direct bilinear phase.
    # forward differencing accumulates ≤ ½·(1+o)·(1+i) LSB of rounding drift (the spec's acknowledged
    # cost of "no multiply"); a few-LSB / sub-degree phase error is negligible for a Ramsey fringe.
    def circ(a):                                    # signed circular distance, in LSB of a full turn
        return ((a + 32768) & 0xFFFF) - 32768
    S_acc, D_acc = S, D
    for o in range(n_det):
        phi = S_acc
        for i in range(n_del):
            tau_s = dels_b[i] * cfg.batch_size / cfg.fs
            want = round(2 * math.pi * dets[o] * tau_s / math.pi * 2 ** 15)
            bound = 0.5 * (1 + o) * (1 + i) + 1
            assert abs(circ(phi - want)) <= bound, f"phase drift {circ(phi-want)} > {bound} at {o},{i}"
            phi += D_acc
        S_acc += dS
        D_acc += dD


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
