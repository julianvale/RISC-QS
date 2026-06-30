"""PynqDriver — the real ZCU216, running on the Zynq PS under PYNQ (docs/software/03 §3b).

`pynq`/`xrfclk` are board-only and imported lazily (gated behind the `riscq[board]` extra) so the
host package installs cleanly on a laptop. The absolute AXI base/span are assigned by the Zynq PS
block design (Flow A) — pin them per build (docs/software/03 §7).
"""

from typing import Sequence

from .base import Driver

# Placeholders — set per build (Flow A: the PS-assigned slave base; Flow B: the crossbar base).
AXI_BASE = 0xA000_0000
AXI_SPAN = 0x0020_0000      # ≥ 5 regions; size to the contract's 5*region_size for the build


class PynqDriver(Driver):
    def __init__(self, base: int = AXI_BASE, span: int = AXI_SPAN, bitstream: str = None):
        from pynq import MMIO            # board-only, imported lazily
        if bitstream:
            self.program_bitstream(bitstream)
        self.mmio = MMIO(base, span)

    def write_word(self, addr: int, data: int) -> None:
        self.mmio.write(int(addr), int(data) & 0xFFFFFFFF)

    def write_words(self, addr: int, words: Sequence[int]) -> None:
        addr = int(addr)
        for w in words:
            self.mmio.write(addr, int(w) & 0xFFFFFFFF)
            addr += 4

    def read_word(self, addr: int) -> int:
        return self.mmio.read(int(addr), 4)

    def reset_hold(self) -> None:
        self.write_word(self.ctrl(0x00), 1)

    def reset_release(self) -> None:
        self.write_word(self.ctrl(0x00), 0)

    def set_ref_clks(self, lmk_freq=None, lmx_freq=None) -> None:
        import xrfclk
        xrfclk.set_ref_clks(lmk_freq=lmk_freq, lmx_freq=lmx_freq)

    def program_bitstream(self, path: str) -> None:
        from pynq import Overlay
        self.overlay = Overlay(path)
