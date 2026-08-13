"""RFSoC4x2 DAC0 -> ADC0 loopback validation through the Python DSL.

This is the Program-lane counterpart of ``fw/rfsoc4x2_loopback_validation.c``.  It deliberately
keeps the reviewed constants and three controls: matched, no-DAC, and detuned.  The service
returns one int32 array instead of exposing MMIO or firmware symbols.
"""

from __future__ import annotations

import argparse
import math

import numpy as np

from riscq import run
from riscq.driver.remote import RemoteDriver
from riscq.lang import Array, ParamTable, compile_kernel, kernel
from riscq.map import READOUT_LEAD, SocMap, SocParams, pack16
from riscq.pulses import Pulse, envelopes, units
from typing import no_type_check


MODE_NAMES = ("matched", "no-dac", "detuned")
DAC_CODE = 667
MATCHED_CODE = 2668
DETUNED_CODE = 2924
DAC_AMP = 3276
DEMOD_AMP = 19896
DAC_DUR = 2458
DEMOD_DUR = 4096
SCHEDULE_LEAD = 2048
DEMOD_EARLY = 256


def _s32(value: int) -> int:
    value &= 0xFFFFFFFF
    return value - 0x100000000 if value & 0x80000000 else value


def _tables(m):
    # The table images fill the same complete banks as the former C wrapper:
    # 1024 gate lines x 4 stored samples and 1024 demod lines x 1 sample.
    dac_hz = units.code_to_freq(DAC_CODE, m.params)
    gate = ParamTable(0, dac_hz, {
        "drive": Pulse(envelopes.square(4 * m.params.env_depth),
                        freq_hz=dac_hz, amp=DAC_AMP / units.AMP_SCALE),
    })
    demod = ParamTable(2, 0.0, {
        "window": Pulse(envelopes.square(m.params.env_depth),
                         amp=DEMOD_AMP / units.AMP_SCALE),
    })
    return gate, demod

@no_type_check
@kernel
def k_loopback(gate: ParamTable, demod: ParamTable, out: Array, mode: int,
               dac_code: int, matched_code: int, detuned_code: int):
    """One reviewed DAC0 -> ADC0 loopback control.

    out = [mode, signature, t_dac, t_demod, t_result, res, real, imag].
    """
    init_pulse_params(gate.pulses)  # noqa: F821
    init_pulse_params(demod.pulses)  # noqa: F821

    set_start(gate, now())  # noqa: F821
    set_phase_offset(gate, 0)  # noqa: F821
    set_dc_offset(gate, 0)  # noqa: F821
    set_freq(gate, dac_code)  # noqa: F821
    # The C validation uses 2458 batches with a 1024-line bank; preserve that exact duration.
    set_dur(gate, gate["drive"], DAC_DUR << 16)  # noqa: F821

    set_start(demod, now())  # noqa: F821
    set_phase_offset(demod, 0)  # noqa: F821
    set_dc_offset(demod, 0)  # noqa: F821
    if mode == 2:
        set_freq(demod, detuned_code)  # noqa: F821
    else:
        set_freq(demod, matched_code)  # noqa: F821
    # As above, retain the reviewed 4096-batch demodulation window.
    set_dur(demod, demod["window"], DEMOD_DUR << 16)  # noqa: F821

    t_dac = now() + SCHEDULE_LEAD  # noqa: F821
    t_demod = t_dac - DEMOD_EARLY
    play(demod, demod["window"], t_demod)  # noqa: F821
    if mode != 1:
        play(gate, gate["drive"], t_dac)  # noqa: F821

    wait_until(t_demod + DEMOD_DUR + READOUT_LEAD)  # noqa: F821
    res = read_res()  # noqa: F821
    out[0] = mode
    out[1] = 0x354C4200 + mode
    out[2] = t_dac
    out[3] = t_demod
    out[4] = now()  # noqa: F821
    out[5] = res
    out[6] = read_real()  # noqa: F821
    out[7] = read_imag()  # noqa: F821


def run_loopback(host: str, port: int = 9091, timeout_s: float = 2.0):
    if timeout_s <= 0:
        raise ValueError("timeout-s must be positive")
    drv = RemoteDriver(host, port)
    m = SocMap(SocParams.from_json(drv.board.get_params()))
    gate, demod = _tables(m)
    program = compile_kernel(
        k_loopback, m, tables={"gate": gate, "demod": demod}, out=Array(8),
        dac_code=pack16(DAC_CODE), matched_code=pack16(MATCHED_CODE),
        detuned_code=pack16(DETUNED_CODE),
    )
    run.setup(drv, m, {0: program})
    try:
        for mode, name in enumerate(MODE_NAMES):
            result = run.rerun(
                drv, m, {0: program}, params={0: {"mode": mode}},
                results=["out"], timeout=max(1, math.ceil(timeout_s * 1000)),
            )[0]["out"].astype(np.int64)
            values = [_s32(int(value)) for value in result]
            magnitude = math.hypot(values[6], values[7])
            expected_code = DETUNED_CODE if mode == 2 else MATCHED_CODE
            if values[0] != mode or values[1] != 0x354C4200 + mode:
                raise RuntimeError(f"{name}: control/signature mismatch: {values}")
            if values[3] != values[2] - DEMOD_EARLY:
                raise RuntimeError(f"{name}: schedule mismatch: t_dac={values[2]} t_demod={values[3]}")
            print(f"{name}: demod_code={expected_code} t_dac={values[2]} "
                  f"t_demod={values[3]} t_result={values[4]} res={values[5]} "
                  f"i={values[6]} q={values[7]} magnitude={magnitude:.3f}")
    finally:
        drv.close()


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", required=True)
    parser.add_argument("--port", type=int, default=9091)
    parser.add_argument("--timeout-s", type=float, default=2.0)
    args = parser.parse_args(argv)
    run_loopback(args.host, args.port, args.timeout_s)


if __name__ == "__main__":
    main()
