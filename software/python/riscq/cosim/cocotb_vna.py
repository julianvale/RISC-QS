"""cocotb test module — the open-loop VNA golden (docs/software/06 §3a/§6).

Runs INSIDE the Verilated PulseTableSoc under cocotb. Reproduces PulseTableSocSim: Part 1 the AXI
host-bridge round-trip, Part 3 the ADC-tone readout where the demod magnitude is large when the LO is
matched to the injected tone and collapses when detuned — proving CocotbDriver + AdcSource + the
on-core ELF flow agree with the established RTL sim. The ELF path is set via RISCQ_COSIM_ELF.
"""

import os

import cocotb
from cocotb.triggers import Timer

from riscq import contract as C
from riscq.cosim import runner, tone
from riscq.cosim.driver import CocotbDriver
from riscq.socconfig import default_config

CFG = default_config(qubit_num=2)
ELF = os.environ.get("RISCQ_COSIM_ELF", "")
ADC_PHYS = 12            # adcMap 0 -> 12 (core 0's physical ADC)
FCARRIER = 2048          # LO/tone freq code (π·F/2^15 rad/sample)
FDETUNED = 12288         # a clearly different LO ⇒ beat ⇒ ≈0


def _s32(u: int) -> int:
    u &= 0xFFFFFFFF
    return u - (1 << 32) if u & 0x80000000 else u


@cocotb.test()
async def axi_roundtrip(dut):
    """Part 1: a word written to the readout-buffer region reads back over the host AXI bridge."""
    await runner.init_dut(dut)
    drv = CocotbDriver(dut, CFG)
    addr = CFG.contract.readout_buf_base
    await drv.write_word(addr, 0x11223344)
    await Timer(50, units="ns")
    got = await drv.read_word(addr)
    assert got == 0x11223344, f"robs AXI round-trip {got:#x} != 0x11223344"


@cocotb.test()
async def vna_open_loop(dut):
    """Part 3: ADC tone → on-core readout; matched LO ≫ detuned LO (the VNA principle)."""
    assert ELF and os.path.exists(ELF), f"RISCQ_COSIM_ELF not set/found: {ELF!r}"
    await runner.init_dut(dut)
    drv = CocotbDriver(dut, CFG)

    cocotb.start_soon(runner.adc_service(dut, CFG, tone(CFG, FCARRIER), ADC_PHYS))

    await drv.reset_hold()
    await runner.load_program(drv, CFG, 0, ELF)
    await runner.load_self_loop(drv, CFG, 1)

    done_addr = C.RESULT_OFFSET + C.RESULT_DONE

    async def run_point(lo_code):
        await drv.write_word(CFG.host_core_ram(0) + done_addr, 0)            # clear done
        await drv.write_word(CFG.host_control() + C.HOST_FROM_HOST, lo_code)  # pick the LO
        await drv.reset_hold()
        await Timer(200, units="ns")
        await drv.reset_release()
        for _ in range(6000):
            await Timer(100, units="ns")
            if await runner.read_core_ram(drv, CFG, 0, done_addr):
                break
        else:
            raise AssertionError(f"program never signalled done (lo={lo_code})")
        re = _s32(await runner.read_core_ram(drv, CFG, 0, C.RESULT_OFFSET + C.RESULT_REAL))
        im = _s32(await runner.read_core_ram(drv, CFG, 0, C.RESULT_OFFSET + C.RESULT_IMAG))
        mag = (re * re + im * im) ** 0.5
        dut._log.info(f"readout lo={lo_code}: real={re} imag={im} |z|={mag:.0f}")
        return mag

    matched = await run_point(FCARRIER)
    detuned = await run_point(FDETUNED)
    assert matched > 50000, f"matched-LO magnitude {matched:.0f} too small — demod path not tracking"
    assert matched > 4 * detuned, f"no frequency selectivity: matched {matched:.0f} vs detuned {detuned:.0f}"
