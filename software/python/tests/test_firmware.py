"""Module 02 check: the firmware builds, fits the 4 KiB RAM, and pulse.c reproduces the MMIO
write-set of the hand-written golden src/riscq/soc/sim/sw/pulse_sched.S — field-for-field addresses
and <<16 packing (docs/software/02 §6, 04 honesty check).

The equivalence check models the lui/addi/li/lw/sw idiom per register, so it is robust to the
compiler's NOP padding and instruction order and does not depend on byte-identical codegen.
"""

import os
import re
import shutil
import subprocess

import pytest
from elftools.elf.elffile import ELFFile
from elftools.elf.constants import SH_FLAGS

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
FW = os.path.join(REPO, "software/firmware")
OBJDUMP = "/config/build/riscv-install/bin/llvm-objdump"
RAM_TOP = 0x80001000

KNOWN = {"lui", "addi", "li", "mv", "lw", "sw", "nop"}
_MEM = re.compile(r"(-?0x[0-9a-fA-F]+|-?\d+)?\((\w+)\)")


def _imm(tok):
    return int(tok, 0)


def trace_writes(lines):
    """Symbolically execute a flat RV32I instruction stream; return (writes, reads).

    writes: {target_addr: value or None}   (None = a dynamic value, e.g. now()+LEAD)
    reads:  {source_addr}                  (load targets, e.g. the `now()` read of 0xbff8)
    """
    regs = {"zero": 0, "x0": 0}
    writes, reads = {}, set()
    for ln in lines:
        ln = ln.split("#", 1)[0].split("//", 1)[0]            # strip comments
        toks = ln.replace(",", " ").split()
        if not toks:
            continue
        try:
            mi = next(i for i, t in enumerate(toks) if t in KNOWN)  # skip addr/byte/label prefix
        except StopIteration:
            continue
        m, ops = toks[mi], toks[mi + 1:]
        if m == "nop":
            continue
        if m == "lui":
            regs[ops[0]] = (_imm(ops[1]) << 12) & 0xFFFFFFFF
        elif m == "li":
            regs[ops[0]] = _imm(ops[1]) & 0xFFFFFFFF
        elif m == "mv":
            regs[ops[0]] = regs.get(ops[1])
        elif m == "addi":
            rs = regs.get(ops[1])
            regs[ops[0]] = None if rs is None else (rs + _imm(ops[2])) & 0xFFFFFFFF
        elif m == "lw":
            mem = _MEM.search(ops[1])
            base = regs.get(mem.group(2))
            off = _imm(mem.group(1)) if mem.group(1) else 0
            if base is not None:
                reads.add((base + off) & 0xFFFFFFFF)
            regs[ops[0]] = None                                # loaded value is dynamic
        elif m == "sw":
            mem = _MEM.search(ops[1])
            base = regs.get(mem.group(2))
            off = _imm(mem.group(1)) if mem.group(1) else 0
            if base is not None:
                writes[(base + off) & 0xFFFFFFFF] = regs.get(ops[0])
    return writes, reads


@pytest.fixture(scope="module")
def built():
    assert os.path.exists("/config/build/riscv-install/bin/clang"), "RV32 clang missing"
    subprocess.run(["make", "clean"], cwd=FW, check=True, capture_output=True)
    r = subprocess.run(["make"], cwd=FW, capture_output=True, text=True)
    assert r.returncode == 0, f"firmware build failed:\n{r.stdout}\n{r.stderr}"
    return FW


def loaded_span(elf_path):
    with open(elf_path, "rb") as f:
        e = ELFFile(f)
        lo, hi = 1 << 40, 0
        for s in e.iter_sections():
            if (s["sh_flags"] & SH_FLAGS.SHF_ALLOC) and s["sh_size"] > 0:
                lo = min(lo, s["sh_addr"])
                hi = max(hi, s["sh_addr"] + s["sh_size"])
    return lo, hi


def test_all_examples_build_and_fit(built):
    for name in ("pulse", "readout", "vna"):
        elf = os.path.join(built, "build", f"{name}.elf")
        assert os.path.exists(elf), f"{name}.elf not built"
        lo, hi = loaded_span(elf)
        assert lo == 0x80000000, f"{name} not based at 0x80000000"
        assert hi <= RAM_TOP - 256, f"{name} image {hi - lo} B leaves <256 B stack in 4 KiB RAM"


def test_pulse_matches_pulse_sched(built):
    """pulse.elf's MMIO write-set == pulse_sched.S's, including the <<16-packed values."""
    sched_s = open(os.path.join(REPO, "src/riscq/soc/sim/sw/pulse_sched.S")).read().splitlines()
    golden_w, golden_r = trace_writes(sched_s)

    elf = os.path.join(built, "build", "pulse.elf")
    disasm = subprocess.run([OBJDUMP, "-d", elf], capture_output=True, text=True, check=True).stdout
    got_w, got_r = trace_writes(disasm.splitlines())

    # compare only the MMIO/RF writes (CPU addr < RAM base); the linear tracer also "executes" crt0's
    # .bss-zero store, a no-op at runtime (__bss_start == __bss_end) that targets RAM, not a register.
    mmio = lambda w: {a: v for a, v in w.items() if a < 0x80000000}
    golden_w, got_w = mmio(golden_w), mmio(got_w)

    # the gate-pulse program touches exactly these CPU addresses (from pulse_sched.S §5)
    expected = {
        0x14100: None,        # startTime = now()+LEAD (dynamic)
        0x10004: 1800 << 16,  # freq
        0x10010: 2000 << 16,  # table[0].phase
        0x10014: 9000 << 16,  # table[0].amp
        0x10018:   10 << 16,  # table[0].env
        0x1001C:    6 << 16,  # table[0].dur
        0x10000: 0,           # fire slot 0
    }
    assert golden_w == expected, f"pulse_sched.S golden drifted: {golden_w}"
    assert got_w == expected, f"pulse.c emitted a different write-set: {got_w}"
    assert 0xBFF8 in golden_r and 0xBFF8 in got_r, "now() must read the time register 0xbff8"


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
