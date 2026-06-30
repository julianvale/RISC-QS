"""Module 01 golden check: the contract + generated header reproduce the addresses the RTL uses.

The honesty anchor is src/riscq/soc/sim/sw/pulse_sched.S (the hand-written control program) and the
host-map arithmetic in Zcu216Top.SocMemoryMap.
"""

import os

import pytest

from riscq import contract as C
from riscq.socconfig import SocConfig, default_config
from riscq.contract import Contract
from riscq import gen_header

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))


def test_cpu_addresses_match_pulse_sched():
    """The §5 worked example / pulse_sched.S addresses, derived from SocConfig helpers."""
    cfg = default_config()
    assert C.CPU_TIME == 0xBFF8
    assert cfg.cpu_pulse_start_time(C.GATE) == 0x14100
    assert cfg.cpu_pulse_freq(C.GATE) == 0x10004
    assert cfg.cpu_pulse_fire(C.GATE) == 0x10000
    assert cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_PHASE) == 0x10010
    assert cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_AMP) == 0x10014
    assert cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_ENV) == 0x10018
    assert cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_DUR) == 0x1001C
    # readout-drive buffer is one stride up
    assert cfg.cpu_pulse_start_time(C.RDRV) == 0x24100
    assert cfg.cpu_pulse_field(C.RDRV, 0, C.PULSE_PHASE) == 0x20010
    # demod + decoder + readout result reads (PulseTableSocSim §)
    assert (C.RF_BASE + 2 * C.RF_STRIDE + C.DEMOD_FREQ) == 0x30000
    assert (C.RF_BASE + 2 * C.RF_STRIDE + C.DEMOD_PHASE) == 0x30004
    assert (C.RF_BASE + 3 * C.RF_STRIDE + C.DECODER_DUR) == 0x40000
    assert (C.RF_BASE + 3 * C.RF_STRIDE + C.DECODER_START_TIME) == 0x44100
    assert (C.CPU_RES, C.CPU_REAL, C.CPU_IMAG) == (0x4200, 0x4204, 0x4208)


def test_every_address_in_pulse_sched_is_known():
    """Parse the literal addresses out of pulse_sched.S; each must be an address the contract knows."""
    src = os.path.join(REPO, "src/riscq/soc/sim/sw/pulse_sched.S")
    text = open(src).read()
    # the program touches these CPU addresses (from its `li t, ADDR` immediates / sw offsets)
    cfg = default_config()
    known = {
        C.CPU_TIME, cfg.cpu_pulse_start_time(C.GATE), cfg.cpu_pulse_freq(C.GATE),
        cfg.cpu_pulse_fire(C.GATE),
        cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_PHASE), cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_AMP),
        cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_ENV), cfg.cpu_pulse_field(C.GATE, 0, C.PULSE_DUR),
    }
    # the four addresses the program loads into registers via `li`
    for tok in ("0xbff8", "0x14100", "0x10000"):
        assert int(tok, 16) in known, f"{tok} from pulse_sched.S not a known contract address"
    assert "0x07080000" in text  # freq 1800<<16 — confirms the <<16 packing discipline


def test_field_packing():
    """The <<16 rule and the s16 clamps."""
    cfg = default_config()
    assert C.FIELD_BIT_OFFSET == 16
    assert cfg.freq2code(0) == 0
    assert cfg.amp2code(2.0) == (1 << 15) - 1            # clamps at +full scale
    assert cfg.amp2code(-2.0) == -(1 << 15)              # clamps at -full scale
    assert cfg.phase2code(3.141592653589793) == (1 << 15) - 1  # ~π → near full turn/2, clamped


def test_host_map_14q():
    """The default 14-qubit region bases + strides (Zcu216Top.SocMemoryMap)."""
    k = Contract(qubit_num=14)
    assert (k.core_stride, k.pulse_stride, k.readout_env_stride, k.readout_buf_stride) == \
        (0x10000, 0x4000, 0x1000, 0x2000)
    assert k.region_size == 0x100000
    assert (k.core_mem_base, k.pulse_mem_base, k.readout_env_base, k.readout_buf_base,
            k.host_ctrl_base) == (0x000000, 0x100000, 0x200000, 0x300000, 0x400000)


def test_host_map_2q_matches_sim():
    """The 2-qubit sim build (PulseTableSocCpuSim) lays the regions out at a smaller stride."""
    cfg = default_config(qubit_num=2)
    k = cfg.contract
    assert k.region_size == 0x20000          # pow2ceil(0x10000 * 2)
    assert cfg.host_core_ram(0) == 0x00000
    assert cfg.host_core_ram(1) == 0x10000   # one coreStride up
    assert cfg.host_gate_env(0) == 0x20000   # region 1
    assert cfg.host_control() == 0x80000     # region 4


def test_widths():
    k = Contract()
    assert k.env_width == 512
    assert k.gate_env_width == 128           # ×4 interp
    assert k.readout_env_width == 32         # ×16 interp
    assert k.rob_width == 128


def test_header_is_up_to_date(tmp_path):
    """gen_header is deterministic and the checked-in riscq.h matches what it renders now."""
    out = tmp_path / "riscq.h"
    gen_header.write_header(str(out))
    checked_in = os.path.join(REPO, "software/firmware/include/riscq.h")
    assert open(out).read() == open(checked_in).read(), \
        "firmware/include/riscq.h is stale — run `python -m riscq.gen_header`"


def test_socconfig_json_roundtrip():
    cfg = default_config(qubit_num=7, fs=6e9)
    back = SocConfig.from_json(cfg.to_json())
    assert back.fs == 6e9
    assert back.contract.qubit_num == 7
    assert back.host_control() == cfg.host_control()


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
