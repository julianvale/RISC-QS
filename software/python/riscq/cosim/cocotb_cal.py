"""cocotb test — the calibration runtime against the Verilated PulseTableSoc (specs 03 §5, M1/M2).

The authoritative runtime check that the on-core kernel does what the host expects, with a *fake ADC
tone* fed in (no real qubit): the kernel sweeps the demod LO on-core from a host-written descriptor,
runs N_SHOTS per point, and streams raw (I,Q) through the chunked IQ ring; the host drains it and the
demod magnitude peaks where the swept LO matches the injected tone (the VNA principle). Exercises the
sweep arithmetic, the shot loop, the IQ ring, multi-chunk streaming, and (test 2) multi-core boot — all
at once. The pytest wrapper (test_cosim.py) builds the kernel ELF + descriptor into RISCQ_COSIM_JOB.
"""

import os

import cocotb
import numpy as np

from .. import contract as C
from . import runner
from .adc import tone
from .driver import CocotbDriver
from ..socconfig import default_config

CFG = default_config(qubit_num=2)
JOB = runner.load_job(os.environ["RISCQ_COSIM_JOB"])
ADC = {0: 12, 1: 13}            # CosimGen adcMap: core q → physical ADC port


async def _boot(dut):
    await runner.init_dut(dut)
    return CocotbDriver(dut, CFG)


@cocotb.test()
async def cal_sweep(dut):
    """One core: a demod-freq sweep over a fixed tone, drained through the chunked ring. The matched
    point's |z| must dominate the detuned points, and the ring must yield exactly n_points·n_shots."""
    drv = await _boot(dut)
    cocotb.start_soon(runner.adc_service(dut, CFG, tone(CFG, JOB["fcode"], amp=0.85), ADC[0]))

    await drv.reset_hold()
    await runner.load_program(drv, CFG, 0, JOB["elf"])
    await runner.write_sweep_desc(drv, CFG, 0, JOB["elf"], JOB["desc"])
    await runner.load_self_loop(drv, CFG, 1)
    await drv.reset_release()

    iq = await runner.drain_iq(drv, CFG, 0, JOB["elf"], JOB["n_points"], JOB["n_shots"])
    mag = np.abs(iq).mean(axis=(1, 2))             # mean |z| per sweep point
    dut._log.info(f"cal_sweep per-point |z|: {[int(m) for m in mag]}")
    assert iq.shape == (JOB["n_points"], JOB["n_shots"], 1)
    matched = JOB["match_index"]
    assert mag[matched] > 50000, f"matched point |z|={mag[matched]:.0f} too small"
    for p in range(JOB["n_points"]):
        if p != matched:
            assert mag[matched] > 4 * mag[p], f"point {p} not detuned: {mag[p]:.0f} vs {mag[matched]:.0f}"


@cocotb.test()
async def cal_multicore(dut):
    """Cores 0 and 1 boot on one reset edge, each with its own tone; both IQ rings fill and track."""
    drv = await _boot(dut)
    for q in (0, 1):
        cocotb.start_soon(runner.adc_service(dut, CFG, tone(CFG, JOB["fcode"], amp=0.85), ADC[q]))

    await drv.reset_hold()
    for q in (0, 1):
        await runner.load_program(drv, CFG, q, JOB["mc_elf"])
        await runner.write_sweep_desc(drv, CFG, q, JOB["mc_elf"], JOB["mc_desc"])
    await drv.reset_release()

    for q in (0, 1):
        iq = await runner.drain_iq(drv, CFG, q, JOB["mc_elf"], 1, JOB["mc_shots"])
        mag = float(np.abs(iq).mean())
        dut._log.info(f"cal_multicore core {q}: {iq.shape} mean|z|={mag:.0f}")
        assert iq.shape == (1, JOB["mc_shots"], 1)
        assert mag > 50000, f"core {q} ring |z|={mag:.0f} too small — boot/drain failed"
