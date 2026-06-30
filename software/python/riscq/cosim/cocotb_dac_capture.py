"""cocotb test — load a program + envelopes and capture a physical DAC port (examples/).

Generic: the notebook builds the pulse program, compiles it, and hands the ELF + envelopes + capture
settings over in a job (RISCQ_COSIM_JOB). This runs INSIDE the Verilated example DUT (CosimExampleGen
— core 0 on DAC 0 / ADC 14): it loads the program over the host AXI bus, releases core 0, and records
the chosen DAC every dsp cycle (one batch = batch_size real lanes) into a flat waveform written to
RISCQ_COSIM_OUT for the notebook to plot.
"""

import os

import cocotb
import numpy as np
from cocotb.triggers import RisingEdge

from . import runner
from .driver import CocotbDriver
from ..socconfig import default_config

CFG = default_config(qubit_num=2)
JOB = runner.load_job(os.environ["RISCQ_COSIM_JOB"])
OUT = os.environ["RISCQ_COSIM_OUT"]
W = CFG.contract.data_width
N_LANES = CFG.batch_size                      # DAC drives batch_size (16) real lanes per batch tick


def _unpack_lanes(word: int) -> list:
    """DAC payload word → N_LANES signed W-bit real lanes (lane k at bits [k·W, k·W+W))."""
    out = []
    for k in range(N_LANES):
        v = (word >> (k * W)) & ((1 << W) - 1)
        out.append(v - (1 << W) if v & (1 << (W - 1)) else v)
    return out


@cocotb.test()
async def capture_dac(dut):
    await runner.init_dut(dut)
    drv = CocotbDriver(dut, CFG)

    # hold the cores, load core 0's program + its envelope(s) + core 1's self-loop, then release.
    await drv.reset_hold()
    await runner.load_program(drv, CFG, 0, JOB["elf"])
    await runner.load_self_loop(drv, CFG, 1)
    for channel, base_line, samples in JOB["envelopes"]:
        await runner.load_envelope(drv, CFG, 0, channel, samples, base_line)
    await drv.reset_release()

    payload = getattr(dut, f"io_dac_{JOB['dac_phys']}_payload")
    lanes = []
    for _ in range(JOB["capture_batches"]):
        lanes.append(_unpack_lanes(int(payload.value)))
        await RisingEdge(dut.dspClk)

    wave = np.array(lanes, dtype=np.int32).reshape(-1)     # flatten batches × lanes → full-rate samples
    np.savez(OUT, dac=wave, batch_size=N_LANES, data_width=W, fs=CFG.fs)
    dut._log.info(f"captured DAC {JOB['dac_phys']}: {wave.size} samples, peak |amp|={int(np.abs(wave).max())}")
    assert np.abs(wave).max() > 0, "DAC never drove — no pulse reached the converter"
