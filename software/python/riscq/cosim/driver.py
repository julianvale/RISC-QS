"""CocotbDriver — a Driver over the Verilated PulseTableSoc host AXI4 slave (docs/software/06 §3a).

The host AXI path covers everything the production flow needs in sim: core RAM, envelope RAM, robs,
and the host control block (boot gate). Every method is a coroutine (cocotb owns the event loop), so
the async run helpers in runner.py await them. The test tap (CPU-space poke/peek) is sim-only and not
a top-level port in this build, so direct register access isn't offered here — the ELF flow (load,
release, read core RAM) is the path, exactly as on real hardware.
"""

from typing import Sequence

from cocotb.triggers import RisingEdge

from .. import contract as C
from ..driver.base import Driver
from ..socconfig import SocConfig


class CocotbDriver(Driver):
    def __init__(self, dut, cfg: SocConfig):
        self.dut = dut
        self.cfg = cfg
        self.clk = dut.clk

    # ── single-beat AXI4 (len=0, size=2, INCR) — enough for word/bulk access ──────────────────────
    async def _await_ready(self, valid, ready):
        valid.value = 1
        await RisingEdge(self.clk)
        while ready.value != 1:
            await RisingEdge(self.clk)
        valid.value = 0

    async def write_word(self, addr: int, data: int) -> None:
        dut = self.dut
        addr &= 0xFFFFFFFF
        for sig, v in (("addr", addr), ("id", 0), ("region", 0), ("len", 0), ("size", 2),
                       ("burst", 1), ("lock", 0), ("cache", 0), ("qos", 0), ("prot", 0)):
            getattr(dut, f"io_axi_aw_payload_{sig}").value = v
        dut.io_axi_w_payload_data.value = int(data) & 0xFFFFFFFF
        dut.io_axi_w_payload_strb.value = 0xF
        dut.io_axi_w_payload_last.value = 1
        dut.io_axi_b_ready.value = 1
        # address + data phases (independent handshakes)
        await self._await_ready(dut.io_axi_aw_valid, dut.io_axi_aw_ready)
        await self._await_ready(dut.io_axi_w_valid, dut.io_axi_w_ready)
        while dut.io_axi_b_valid.value != 1:
            await RisingEdge(self.clk)
        dut.io_axi_b_ready.value = 0

    async def write_words(self, addr: int, words: Sequence[int]) -> None:
        addr = int(addr)
        for w in words:
            await self.write_word(addr, int(w))
            addr += 4

    async def read_word(self, addr: int) -> int:
        dut = self.dut
        addr = int(addr) & 0xFFFFFFFF
        for sig, v in (("addr", addr), ("id", 0), ("region", 0), ("len", 0), ("size", 2),
                       ("burst", 1), ("lock", 0), ("cache", 0), ("qos", 0), ("prot", 0)):
            getattr(dut, f"io_axi_ar_payload_{sig}").value = v
        dut.io_axi_r_ready.value = 1
        await self._await_ready(dut.io_axi_ar_valid, dut.io_axi_ar_ready)
        while dut.io_axi_r_valid.value != 1:
            await RisingEdge(self.clk)
        data = int(dut.io_axi_r_payload_data.value)
        dut.io_axi_r_ready.value = 0
        return data & 0xFFFFFFFF

    async def reset_hold(self) -> None:
        await self.write_word(self.cfg.host_control() + C.HOST_RESET, 1)

    async def reset_release(self) -> None:
        await self.write_word(self.cfg.host_control() + C.HOST_RESET, 0)
