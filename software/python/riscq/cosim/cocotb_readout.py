"""cocotb test — inject an ADC tone, run a readout program, read back the integral (examples/).

Generic: the notebook builds the readout program, compiles it, and hands the ELF + ADC-tone settings
(freq code, amplitude, physical ADC port) over in a job (RISCQ_COSIM_JOB). This runs INSIDE the
Verilated example DUT (CosimExampleGen — core 0 on DAC 0 / ADC 14): a real cosine is driven onto the
mapped ADC, the program demodulates + integrates one window, and the hardware real/imag/res are read
back over AXI and written to RISCQ_COSIM_OUT for the notebook to plot/validate.
"""

import os

import cocotb
import numpy as np
from cocotb.triggers import Timer

from .. import contract as C
from . import runner
from .adc import tone
from .driver import CocotbDriver
from ..socconfig import default_config

CFG = default_config(qubit_num=2)
JOB = runner.load_job(os.environ["RISCQ_COSIM_JOB"])
OUT = os.environ["RISCQ_COSIM_OUT"]


def _s32(u: int) -> int:
    u &= 0xFFFFFFFF
    return u - (1 << 32) if u & 0x80000000 else u


@cocotb.test()
async def readout(dut):
    await runner.init_dut(dut)
    drv = CocotbDriver(dut, CFG)

    # free-running real cosine on the mapped physical ADC (the stimulus to demodulate).
    cocotb.start_soon(runner.adc_service(dut, CFG, tone(CFG, JOB["fcode"], amp=JOB["amp"]), JOB["adc_phys"]))

    await drv.reset_hold()
    await runner.load_program(drv, CFG, 0, JOB["elf"])
    await runner.load_self_loop(drv, CFG, 1)
    await drv.reset_release()

    done_addr = C.RESULT_OFFSET + C.RESULT_DONE
    for _ in range(8000):
        await Timer(100, units="ns")
        if await runner.read_core_ram(drv, CFG, 0, done_addr):
            break
    else:
        raise AssertionError("readout program never signalled done")

    real = _s32(await runner.read_core_ram(drv, CFG, 0, C.RESULT_OFFSET + C.RESULT_REAL))
    imag = _s32(await runner.read_core_ram(drv, CFG, 0, C.RESULT_OFFSET + C.RESULT_IMAG))
    res = _s32(await runner.read_core_ram(drv, CFG, 0, C.RESULT_OFFSET + C.RESULT_RES))
    mag = (real * real + imag * imag) ** 0.5
    dut._log.info(f"readout: real={real} imag={imag} res={res} |z|={mag:.0f}")

    np.savez(OUT, real=real, imag=imag, res=res)
    assert mag > 50000, f"matched-LO magnitude {mag:.0f} too small — demod path not tracking the tone"
