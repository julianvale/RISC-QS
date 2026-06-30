"""Module 03 golden check: the ELF loader + Soc facade reproduce the host-AXI load flow that
PulseTableSocCpuSim / PulseTableSocSim perform (docs/software/03 §6).

The sim streams the program word-by-word to `dut.map.coreMemOffset(core) + word*4`, and writes
riscqReset at `dut.map.hostCtrlBase`. We assert Soc(DummyDriver) issues exactly that (addr, data)
stream — same ELF, same addresses — before any hardware exists.
"""

import os

import pytest
from elftools.elf.elffile import ELFFile
from elftools.elf.constants import SH_FLAGS

from riscq import Soc, DummyDriver, default_config
from riscq import contract as C

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
ELF = os.path.join(REPO, "src/riscq/soc/sim/sw/pulse_sched.elf")


def flat_image_words(elf_path):
    """Independent of elf_words: lay each loadable section's bytes at its vaddr (mirroring the sim's
    Elf.load into SparseMemory), then read 32-bit LE words — the image the sim streams over AXI."""
    byts = {}
    with open(elf_path, "rb") as f:
        e = ELFFile(f)
        for s in e.iter_sections():
            if (s["sh_flags"] & SH_FLAGS.SHF_ALLOC) and s["sh_type"] != "SHT_NOBITS":
                for i, b in enumerate(s.data()):
                    byts[s["sh_addr"] + i] = b
    words = {}
    base = min(byts) & ~3
    for a in range(base, max(byts) + 1, 4):
        words[a] = sum(byts.get(a + k, 0) << (8 * k) for k in range(4))
    return words


def test_load_program_matches_sim_axi_stream():
    """Soc.load_program writes exactly the ELF image, at coreMemOffset(0) + (cpu_addr - RAM_BASE)."""
    cfg = default_config(qubit_num=2)               # the sim build
    drv = DummyDriver()
    soc = Soc(drv, cfg)
    soc.load_program(0, ELF)

    img = flat_image_words(ELF)
    expected = {cfg.host_core_ram(0) + (a - C.CPU_RAM_BASE): w for a, w in img.items()}
    assert drv.mem == expected, "load_program AXI image differs from the ELF flat image"
    # core 0 lands at host offset 0 (matches dut.map.coreMemOffset(0))
    assert cfg.host_core_ram(0) == 0


def test_load_program_per_core_offset():
    """Core N lands one coreStride up — what the sim's coreMemOffset(core) computes."""
    cfg = default_config(qubit_num=2)
    drv = DummyDriver()
    Soc(drv, cfg).load_program(1, ELF)
    img = flat_image_words(ELF)
    base = cfg.host_core_ram(1)
    assert base == 0x10000                          # coreStride for the 2q build
    assert all((base + (a - C.CPU_RAM_BASE)) in drv.mem for a in img)


def test_boot_gate_and_control_addresses():
    """reset/time-offset/from-host hit the host control block (region 4) the sim writes."""
    cfg = default_config(qubit_num=2)
    drv = DummyDriver()
    soc = Soc(drv, cfg)
    ctrl = cfg.host_control()
    assert ctrl == 0x80000                          # 4 * region_size (2q)

    soc.reset_hold()
    assert drv.writes[-1] == (ctrl + C.HOST_RESET, 1)
    soc.reset_release()
    assert drv.writes[-1] == (ctrl + C.HOST_RESET, 0)

    soc.set_from_host(0xDEADBEEF)
    assert drv.mem[ctrl + C.HOST_FROM_HOST] == 0xDEADBEEF

    soc.set_time_offset((5 << 32) | 7)
    assert drv.mem[ctrl + C.HOST_TIME_OFF_LO] == 7
    assert drv.mem[ctrl + C.HOST_TIME_OFF_HI] == 5


def test_read_result_roundtrip():
    """The firmware result block round-trips through core RAM (the only HW-visible path)."""
    cfg = default_config(qubit_num=2)
    drv = DummyDriver()
    soc = Soc(drv, cfg)
    base = cfg.host_core_ram(1) + C.RESULT_OFFSET
    drv.mem[base + C.RESULT_REAL] = 0xFFFFFFFF       # -1 as int32
    drv.mem[base + C.RESULT_IMAG] = 123
    drv.mem[base + C.RESULT_RES] = 1
    drv.mem[base + C.RESULT_DONE] = 1
    r = soc.read_result(1)
    assert r == {"done": 1, "real": -1, "imag": 123, "res": 1}


def test_elf_words_only_loadable_sections():
    """elf_words skips .bss (SHT_NOBITS) and emits 32-bit LE words."""
    from riscq import elf_words
    secs = list(elf_words(ELF))
    assert secs, "no loadable sections found"
    for addr, words in secs:
        assert addr >= C.CPU_RAM_BASE
        assert all(0 <= w <= 0xFFFFFFFF for w in words)


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
