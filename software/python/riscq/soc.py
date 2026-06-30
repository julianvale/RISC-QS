"""Soc — the facade that knows the memory map (docs/software/03 §3c).

The only object that turns "load core 3's program", "play this envelope", "release the cores" into
host-AXI writes. It owns a `Driver` (a dumb word-mover) and a `SocConfig` (addresses + conversions).
The shared ELF loader (`elf_words`) lives here, once.
"""

from typing import Iterator, List, Tuple

import numpy as np

from . import contract as C
from .driver.base import Driver
from .socconfig import SocConfig


def elf_words(elf_path: str) -> Iterator[Tuple[int, List[int]]]:
    """Walk the ELF's loadable sections, yielding (virtual_addr, [32-bit LE words]).

    Only SHF_ALLOC sections with file data are emitted (.bss is SHT_NOBITS — no image bytes; crt0
    zeroes it on the core). Section data is padded up to a 4-byte boundary.
    """
    from elftools.elf.elffile import ELFFile
    from elftools.elf.constants import SH_FLAGS

    with open(elf_path, "rb") as f:
        elf = ELFFile(f)
        for sec in elf.iter_sections():
            flags = sec["sh_flags"]
            if not (flags & SH_FLAGS.SHF_ALLOC):
                continue
            if sec["sh_type"] == "SHT_NOBITS":      # .bss — allocated but no file data
                continue
            data = sec.data()
            if not data:
                continue
            if len(data) % 4:
                data = data + b"\x00" * (4 - len(data) % 4)
            words = [int.from_bytes(data[i:i + 4], "little") for i in range(0, len(data), 4)]
            yield sec["sh_addr"], words


class Soc:
    def __init__(self, driver: Driver, cfg: SocConfig):
        self.drv = driver
        self.cfg = cfg
        # backends reach the host control block through Soc, which owns the map.
        driver.ctrl = lambda off: cfg.host_control() + off

    # ── boot ────────────────────────────────────────────────────────────────────────────────
    def reset_hold(self) -> None:
        self.drv.reset_hold()

    def reset_release(self) -> None:
        self.drv.reset_release()

    def set_time_offset(self, batches: int) -> None:
        base = self.cfg.host_control()
        self.drv.write_word(base + C.HOST_TIME_OFF_LO, batches & 0xFFFFFFFF)
        self.drv.write_word(base + C.HOST_TIME_OFF_HI, (batches >> 32) & 0xFFFFFFFF)

    def set_from_host(self, word: int) -> None:
        self.drv.write_word(self.cfg.host_control() + C.HOST_FROM_HOST, word)

    # ── program load ──────────────────────────────────────────────────────────────────────────
    def load_program(self, core: int, elf_path: str) -> None:
        base = self.cfg.host_core_ram(core)            # CPU 0x80000000 ↔ this host offset
        for addr, words in elf_words(elf_path):
            self.drv.write_words(base + (addr - C.CPU_RAM_BASE), words)

    # ── envelope load ─────────────────────────────────────────────────────────────────────────
    def load_envelope(self, core: int, channel: str, samples: np.ndarray, base_line: int = 0) -> None:
        from .pulse import pack_envelope               # bit-layout knowledge lives in pulse.py (04)

        start, words = pack_envelope(samples, channel, self.cfg, base_line)
        self.drv.write_words(self.cfg.host_env(core, channel) + start, words)

    # ── read-back ─────────────────────────────────────────────────────────────────────────────
    def read_core_ram(self, core: int, offset: int) -> int:
        """Always available — on HW, sim, and remote. Results round-trip through core RAM."""
        return self.drv.read_word(self.cfg.host_core_ram(core) + offset)

    def read_result(self, core: int) -> dict:
        """The firmware result block (docs/software/02 §7): real/imag/res + a done flag."""
        ro = C.RESULT_OFFSET
        return {
            "done": self.read_core_ram(core, ro + C.RESULT_DONE),
            "real": _s32(self.read_core_ram(core, ro + C.RESULT_REAL)),
            "imag": _s32(self.read_core_ram(core, ro + C.RESULT_IMAG)),
            "res":  _s32(self.read_core_ram(core, ro + C.RESULT_RES)),
        }

    def read_robs(self, core: int, n: int) -> np.ndarray:
        """Captured ADC trace (docs/software/01 §6): n 32-bit words, host read-back."""
        base = self.cfg.host_robs(core)
        return np.array([self.drv.read_word(base + 4 * i) for i in range(n)], dtype=np.uint32)


def _s32(u: int) -> int:
    u &= 0xFFFFFFFF
    return u - (1 << 32) if u & 0x80000000 else u
