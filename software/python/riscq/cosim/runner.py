"""runner.py — wire the Verilated DUT to the production stack and the user's ADC source (docs 06 §3c).

Provides the async facade the experiment uses (load_program / load_envelope / reset / read_core_ram —
the same logical API Soc exposes, awaited here because cocotb is async), the free-running ADC service
coroutine, and the cocotb.runner entry that Verilates PulseTableSoc.v and runs a test module.
"""

import os
import pickle
import shutil

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

from .. import contract as C
from ..soc import elf_words
from ..socconfig import SocConfig
from .adc import AdcSource, pack_adc

RTL_DIR = os.path.join(os.path.dirname(__file__), "rtl")
DUT = "PulseTableSoc"


# ── notebook → cocotb-subprocess handoff ─────────────────────────────────────────────────────────
# The example notebooks build the pulse program themselves, then describe the run (compiled ELF path +
# envelopes to load + capture/readout settings) in a small job dict the generic cocotb test reads back.
def save_job(path: str, **job) -> str:
    with open(path, "wb") as f:
        pickle.dump(job, f)
    return path


def load_job(path: str) -> dict:
    with open(path, "rb") as f:
        return pickle.load(f)


# ── DUT bring-up ──────────────────────────────────────────────────────────────────────────────
async def init_dut(dut, period_ns: int = 10):
    """Start both clock domains, idle every bus input, then release the hardware reset."""
    dut.reset.value = 1
    dut.dspRst.value = 1
    for sig in ("aw", "w", "ar"):
        getattr(dut, f"io_axi_{sig}_valid").value = 0
    dut.io_axi_b_ready.value = 0
    dut.io_axi_r_ready.value = 0
    for i in range(16):                                    # DAC sinks always ready
        getattr(dut, f"io_dac_{i}_ready").value = 1
    for i in range(16):                                    # ADC inputs valid, zero until driven
        getattr(dut, f"io_adc_{i}_valid").value = 1
        getattr(dut, f"io_adc_{i}_payload").value = 0

    cocotb.start_soon(Clock(dut.clk, period_ns, units="ns").start())
    cocotb.start_soon(Clock(dut.dspClk, period_ns, units="ns").start())
    await Timer(20 * period_ns, units="ns")
    dut.reset.value = 0
    dut.dspRst.value = 0
    await Timer(20 * period_ns, units="ns")


# ── async facade (mirrors Soc, awaited) ─────────────────────────────────────────────────────────
async def load_program(drv, cfg: SocConfig, core: int, elf_path: str):
    base = cfg.host_core_ram(core)
    for addr, words in elf_words(elf_path):
        await drv.write_words(base + (addr - C.CPU_RAM_BASE), words)


async def load_self_loop(drv, cfg: SocConfig, core: int):
    """A 1-instruction `jal x0,0` so an unused core's dBus stays idle (matches the sims)."""
    await drv.write_word(cfg.host_core_ram(core), 0x0000006F)


async def load_envelope(drv, cfg: SocConfig, core: int, channel: str, samples, base_line: int = 0):
    from ..pulse import pack_envelope
    start, words = pack_envelope(samples, channel, cfg, base_line)
    await drv.write_words(cfg.host_env(core, channel) + start, words)


async def read_core_ram(drv, cfg: SocConfig, core: int, offset: int) -> int:
    return await drv.read_word(cfg.host_core_ram(core) + offset)


async def boot(drv, cfg: SocConfig):
    """Clean reset-release edge over the host control block (hold → release), as the sims do."""
    await drv.reset_hold()
    await Timer(200, units="ns")
    await drv.reset_release()
    await Timer(600, units="ns")                           # CDC + settle ⇒ time advances, cores run


# ── ADC service ─────────────────────────────────────────────────────────────────────────────────
async def adc_service(dut, cfg: SocConfig, source: AdcSource, adc_phys: int, core: int = 0):
    """Free-running: each dspClk, present the source's lanes on the mapped physical ADC port. The tone
    frequency tracks the LO because the local batch counter advances one batch per dspClk, in lockstep
    with the SoC's batch time; the absolute phase offset is magnitude-invariant for a matched tone."""
    payload = getattr(dut, f"io_adc_{adc_phys}_payload")
    t = 0
    while True:
        payload.value = pack_adc(source.adc_samples(core, t), cfg)
        await RisingEdge(dut.dspClk)
        t += 1


# ── build + run via cocotb's Verilator runner ─────────────────────────────────────────────────────
def build_and_run(test_module: str, *, testcase=None, build_dir: str = None, rtl_dir: str = RTL_DIR):
    """Verilate PulseTableSoc.v (+ BramBlackBox.v) and run `test_module`'s cocotb tests. Returns the
    JUnit results-xml path; raises if any test fails. `rtl_dir` must already hold the emitted DUT
    (CosimGen → RTL_DIR for the VNA golden; CosimExampleGen → EXAMPLE_RTL_DIR for the notebooks)."""
    from cocotb.runner import get_runner

    if not os.path.exists(os.path.join(rtl_dir, f"{DUT}.v")):
        raise FileNotFoundError(f"{rtl_dir}/{DUT}.v missing — run `cosim.build.generate_rtl()` "
                                f"(or generate_example_rtl()) first")
    build_dir = build_dir or os.path.join(os.path.dirname(__file__), "sim_build")
    mem_v = os.path.normpath(os.path.join(rtl_dir, "..", "..", "..", "..", "..",
                                          "src", "riscq", "memory", "BramBlackBox.v"))
    runner = get_runner("verilator")
    runner.build(
        verilog_sources=[os.path.join(rtl_dir, f"{DUT}.v"), mem_v],
        hdl_toplevel=DUT,
        build_dir=build_dir,
        always=True,
        build_args=["-Wno-fatal", "-Wno-MULTIDRIVEN", "-Wno-WIDTH", "-Wno-CASEINCOMPLETE",
                    "-Wno-UNOPTFLAT", "--timescale", "1ns/1ps", "--threads", "1"],
    )
    # ROM init files ($readmemb at runtime, relative to the sim cwd) must sit beside the executable
    for f in os.listdir(rtl_dir):
        if f.endswith(".bin"):
            shutil.copy(os.path.join(rtl_dir, f), os.path.join(build_dir, f))
    return runner.test(hdl_toplevel=DUT, test_module=test_module, testcase=testcase,
                       build_dir=build_dir)
