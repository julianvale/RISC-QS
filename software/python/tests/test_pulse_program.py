"""Module 04 golden check: the envelope packer matches the RTL line layout, and a Program built in
physical units lowers to C that compiles to the SAME MMIO write-set as the hand-written golden
src/riscq/soc/sim/sw/pulse_sched.S (docs/software/04 §3, honesty check).
"""

import os
import subprocess

import numpy as np
import pytest

from riscq import default_config, Program, pulse, Soc, DummyDriver
from riscq import contract as C
from riscq.pulse import pack_envelope

# reuse the register-tracing equivalence checker from the firmware test
from test_firmware import trace_writes, OBJDUMP

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
SCRATCH = "/tmp/claude-1000/-config-build-agentic-rv-dev/774b7c56-1ecd-4220-9b73-2f8f7a145cc9/scratchpad/prog04"


# physical values chosen so SocConfig (default fs) yields exactly the pulse_sched.S codes
def _phys(cfg):
    return dict(
        freq=1800 * cfg.fs / 2 ** 16,        # → freq2code 1800
        phase=2000 * np.pi / 2 ** 15,        # → phase2code 2000
        amp=9000 / 2 ** 15,                  # → amp2code 9000
        dur=6 * cfg.batch_size / cfg.fs,     # → s2batch 6
        env=10,                              # line index
    )


def test_codes_roundtrip():
    cfg = default_config()
    p = _phys(cfg)
    assert cfg.freq2code(p["freq"]) == 1800
    assert cfg.phase2code(p["phase"]) == 2000
    assert cfg.amp2code(p["amp"]) == 9000
    assert cfg.s2batch(p["dur"]) == 6


def test_program_matches_pulse_sched():
    """DSL → C → ELF reproduces pulse_sched.S's RF/control write-set field-for-field."""
    cfg = default_config(qubit_num=2)
    prog = Program(cfg, lead=1024)
    g = prog.define_pulse("gate", **_phys(cfg))
    prog.play(g, t=0.0)

    elf = prog.build(SCRATCH, "pulse_dsl")
    disasm = subprocess.run([OBJDUMP, "-d", elf], capture_output=True, text=True, check=True).stdout
    got, reads = trace_writes(disasm.splitlines())
    got = {a: v for a, v in got.items() if a < 0x80000000}      # RF/control writes only

    expected = {
        0x14100: None,        # set_start_time(GATE, now()+1024)
        0x10004: 1800 << 16,  # set_freq
        0x10010: 2000 << 16,  # phase
        0x10014: 9000 << 16,  # amp
        0x10018:   10 << 16,  # env
        0x1001C:    6 << 16,  # dur
        0x10000: 0,           # fire 0
    }
    assert got == expected, f"DSL program write-set differs:\n{got}"
    assert 0xBFF8 in reads
    assert prog.cached == 1 and prog.reprogrammed == 0      # the single launch stayed cached


def test_pulse_table_caching():
    """Re-firing a loaded slot is two writes (start_time+fire); distinct slots are deduped."""
    cfg = default_config(qubit_num=2)
    prog = Program(cfg)
    p = _phys(cfg)
    x90 = prog.define_pulse("gate", **p)
    x180 = prog.define_pulse("gate", **{**p, "amp": 0.5})  # distinct → slot 1
    again = prog.define_pulse("gate", **p)                 # same params → dedup to slot 0
    assert x90.slot == 0 and x180.slot == 1
    assert again is x90
    prog.play(x90, t=0.0)
    prog.play(x180, t=1e-7)
    prog.play(x90, t=2e-7)                                  # re-fire slot 0, no reprogram
    c = prog.emit_c()
    # exactly one set_amp per distinct slot in init (loaded once), three fires in the schedule
    assert c.count("fire(GATE,") == 3
    assert c.count("set_amp(GATE, 0,") == 1
    assert c.count("set_amp(GATE, 1,") == 1


def test_overflow_spill():
    """A 5th distinct gate pulse (pulseNum=4) spills: its fields are reprogrammed before its fire."""
    cfg = default_config(qubit_num=2)
    prog = Program(cfg)
    p = _phys(cfg)
    pulses = [prog.define_pulse("gate", **{**p, "amp": 0.1 * (i + 1)}) for i in range(5)]
    assert pulses[4].spilled
    for i, pd in enumerate(pulses):
        prog.play(pd, t=i * 1e-7)
    prog.emit_c()
    assert prog.reprogrammed == 1 and prog.cached == 4


def test_gate_packer_matches_sim_layout():
    """pack_envelope('gate') reproduces PulseTableSocSim.loadEnv addressing + envWord bit layout."""
    cfg = default_config(qubit_num=2)
    N, w, interp = cfg.batch_size, cfg.contract.data_width, cfg.contract.gate_interp
    stored = N // interp                              # 4 samples per gate line
    # a 2-batch envelope; decimate by taking lane j*interp (the lane the RTL replicates)
    env = (np.linspace(-0.9, 0.9, 2 * N) + 1j * np.linspace(0.1, -0.1, 2 * N))
    start, words = pack_envelope(env, "gate", cfg)
    assert start == 0
    assert len(words) == 2 * stored                  # 2 lines × 4 stored samples

    # rebuild expected directly from the decimated, quantized samples (real low / imag high, 1 word/sample)
    re = np.array([cfg.amp2code(x) for x in env.real]).reshape(2, N)[:, ::interp]
    im = np.array([cfg.amp2code(x) for x in env.imag]).reshape(2, N)[:, ::interp]
    expected = [(int(re[b, j]) & 0xFFFF) | ((int(im[b, j]) & 0xFFFF) << 16)
                for b in range(2) for j in range(stored)]
    assert words == expected
    # contiguous 4-byte stream: line b sample j at byte b*16 + j*4 (gate line = 16 bytes, as in the sim)
    assert stored * 4 == 16


def test_load_envelope_stream():
    """Soc.load_envelope streams the packed words to the gate env region (host_gate_env + base)."""
    cfg = default_config(qubit_num=2)
    drv = DummyDriver()
    soc = Soc(drv, cfg)
    env = pulse.gaussian(t_width=2 * cfg.batch_size / cfg.fs, fs=cfg.fs)  # 2 batches
    soc.load_envelope(0, "gate", env, base_line=10)
    base = cfg.host_gate_env(0) + 10 * (cfg.batch_size // cfg.contract.gate_interp) * 4
    _, words = pack_envelope(env, "gate", cfg)
    for i, word in enumerate(words):
        assert drv.mem[base + 4 * i] == word


def test_readout_packer():
    """readout-drive (×16) stores one 32-bit word per line — direct, no adapter (01 §6)."""
    cfg = default_config(qubit_num=2)
    env = pulse.square(t_width=3 * cfg.batch_size / cfg.fs, fs=cfg.fs)   # 3 batches
    start, words = pack_envelope(env, "readout", cfg)
    assert start == 0 and len(words) == 3           # 1 stored sample per line, 3 lines


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
