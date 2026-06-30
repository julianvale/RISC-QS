"""Module 06 check (docs/software/06 §6).

Fast: AdcSource packing / tone logic match PulseTableSocSim.adcWord (no RTL).
Slow (the golden): Verilate PulseTableSoc and run the cocotb VNA — the production CocotbDriver +
AdcSource + on-core ELF flow reproduce PulseTableSocSim's AXI round-trip and ADC-tone readout
selectivity (matched LO ≫ detuned). Set RISCQ_SKIP_COSIM=1 to skip the heavy run.
"""

import os
import shutil
import subprocess
import xml.etree.ElementTree as ET

import numpy as np
import pytest

from riscq.socconfig import default_config
from riscq.cosim import pack_adc, tone, FixedAdc, CallbackAdc

REPO = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
FW = os.path.join(REPO, "software/firmware")


# ── fast: pure-Python ADC logic (mirrors PulseTableSocSim.adcWord) ───────────────────────────────
def test_pack_adc_matches_sim_adcword():
    cfg = default_config(qubit_num=2)
    N, w = cfg.contract.adc_batch, cfg.contract.data_width
    F, A, t = 2048, 28000 / 2 ** 15, 7
    src = tone(cfg, F, amp=A)
    word = pack_adc(src.adc_samples(0, t), cfg)
    # sim: code_k = round(28000*cos(pi*F*(t*N+k)/2^15)) & 0xffff, packed at k*w
    expected = 0
    for k in range(N):
        s = t * N + k
        code = round(28000 * np.cos(np.pi * F * s / (1 << (w - 1)))) & 0xFFFF
        expected |= code << (k * w)
    assert word == expected


def test_fixed_and_callback_adc():
    cfg = default_config(qubit_num=2)
    n = cfg.contract.adc_batch
    fa = FixedAdc(np.arange(2 * n) / 100.0, adc_batch=n)
    assert list(fa.adc_samples(0, 0)) == [0, 0.01, 0.02, 0.03]
    assert list(fa.adc_samples(0, 1)) == [0.04, 0.05, 0.06, 0.07]
    assert len(fa.adc_samples(0, 99)) == n          # past the end → zero-padded
    cb = CallbackAdc(lambda core, t: np.full(n, t))
    assert list(cb.adc_samples(0, 3)) == [3, 3, 3, 3]


# ── slow: the cocotb golden against the Verilated DUT ────────────────────────────────────────────
@pytest.mark.skipif(os.environ.get("RISCQ_SKIP_COSIM") == "1", reason="RISCQ_SKIP_COSIM=1")
def test_cosim_vna_golden():
    if not shutil.which("verilator"):
        pytest.skip("verilator not found")
    from riscq.cosim import build, runner

    build.generate_rtl()                                       # CosimGen → rtl/PulseTableSoc.v
    r = subprocess.run(["make"], cwd=FW, capture_output=True, text=True)
    assert r.returncode == 0, f"firmware build failed:\n{r.stderr}"
    os.environ["RISCQ_COSIM_ELF"] = os.path.join(FW, "build", "vna_point.elf")

    results = runner.build_and_run("riscq.cosim.cocotb_vna")
    tree = ET.parse(results)
    cases = tree.findall(".//testcase")
    assert cases, "no cocotb testcases ran"
    for c in cases:
        fails = c.findall("failure") + c.findall("error")
        assert not fails, f"cocotb {c.get('name')} failed: {[f.get('message') for f in fails]}"


if __name__ == "__main__":
    raise SystemExit(pytest.main([__file__, "-v"]))
