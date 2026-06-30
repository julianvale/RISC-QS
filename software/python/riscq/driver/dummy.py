"""DummyDriver — host-side testing / golden checks (docs/software/03 §3b).

Records every write and serves a backing dict, so a test can assert the exact (addr, data) stream a
load produces — the basis for the golden check against the RTL sims' AXI load flow.
"""

from typing import Sequence

from .base import Driver


class DummyDriver(Driver):
    def __init__(self):
        self.mem = {}
        self.writes = []          # ordered (addr, data) log of every word written

    def write_word(self, addr: int, data: int) -> None:
        addr = int(addr) & 0xFFFFFFFF
        data = int(data) & 0xFFFFFFFF
        self.mem[addr] = data
        self.writes.append((addr, data))

    def write_words(self, addr: int, words: Sequence[int]) -> None:
        for w in words:
            self.write_word(addr, w)
            addr += 4

    def read_word(self, addr: int) -> int:
        return self.mem.get(int(addr) & 0xFFFFFFFF, 0)

    def reset_hold(self) -> None:
        self.write_word(self.ctrl(0x00), 1)

    def reset_release(self) -> None:
        self.write_word(self.ctrl(0x00), 0)
