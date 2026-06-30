"""program.py — the pulse-sequence DSL → C → ELF (docs/software/04 §3b).

A Program is pulse *definitions* (parameter sets assigned to a buffer's table slots, deduplicated)
plus a *timeline* of launches, in physical units. Lowering emits each slot's field writes once in an
init block; a launch is then just set_start_time + fire (two writes) — the load-once / fire-by-index
pattern the PulseParamBuffer was built for. All physical→code conversion runs here (SocConfig); the
emitted C carries only integer codes (the core does no float).
"""

import logging
import os
import subprocess
from dataclasses import dataclass
from typing import Optional, Union

import numpy as np

from . import contract as C
from .pulse import num_lines
from .socconfig import SocConfig

log = logging.getLogger("riscq.program")

_BUF = {"gate": C.GATE, "readout": C.RDRV}              # channel → pulse-table buffer index
_MACRO = {"gate": "GATE", "readout": "RDRV"}            # channel → riscq.h buffer macro
_PULSE_NUM = {"gate": "gate_pulse_num", "readout": "readout_pulse_num"}


@dataclass
class _PulseDef:
    channel: str
    slot: int
    freq_code: int
    phase_code: int
    amp_code: int
    env_line: int
    dur_code: int
    spilled: bool = False         # exceeded pulseNum → reprogram fields before each fire


class Program:
    def __init__(self, cfg: SocConfig, lead: int = 1024, core: int = 0):
        self.cfg = cfg
        self.lead = lead          # batches of head-room over the posted-link latency (01 §5)
        self.core = core
        self._defs = []           # _PulseDef in definition order
        self._dedup = {}          # param key → _PulseDef
        self._next_slot = {"gate": 0, "readout": 0}
        self._env_next = {"gate": 0, "readout": 0}
        self._env_loads = []      # (channel, base_line, array) for the driver
        self._timeline = []       # lowered statements
        self.cached = 0           # launch counters (docs/software/04 §3b)
        self.reprogrammed = 0

    # ── pulse definition ────────────────────────────────────────────────────────────────────────
    def define_pulse(self, channel: str, *, freq: float, phase: float, amp: float,
                     dur: float, env: Union[int, np.ndarray]) -> _PulseDef:
        if channel not in _BUF:
            raise ValueError(f"unknown channel {channel!r}")
        cfg = self.cfg
        if isinstance(env, np.ndarray):
            line = self._env_next[channel]
            self._env_next[channel] += num_lines(env, cfg)
            self._env_loads.append((channel, line, env))
            env_line = line
        else:
            env_line = int(env)

        fc, pc = cfg.freq2code(freq), cfg.phase2code(phase)
        ac, dc = cfg.amp2code(amp), cfg.s2batch(dur)
        key = (channel, fc, pc, ac, env_line, dc)
        if key in self._dedup:
            return self._dedup[key]

        pn = getattr(cfg.contract, _PULSE_NUM[channel])
        raw = self._next_slot[channel]
        spilled = raw >= pn
        slot = raw if not spilled else (raw % pn)
        self._next_slot[channel] += 1
        pd = _PulseDef(channel, slot, fc, pc, ac, env_line, dc, spilled)
        self._dedup[key] = pd
        self._defs.append(pd)
        if spilled:
            log.warning("channel %s exceeded pulseNum=%d — pulse spills (reprogrammed per fire)", channel, pn)
        return pd

    # ── timeline ──────────────────────────────────────────────────────────────────────────────
    def play(self, pulse: Union[_PulseDef, str], t: float, **inline) -> _PulseDef:
        """Launch a pulse at absolute time t (seconds). `pulse` is a define_pulse handle, or a
        channel name with inline params (defined-on-first-sight sugar)."""
        if isinstance(pulse, str):
            pulse = self.define_pulse(pulse, **inline)
        self._timeline.append({"op": "play", "pulse": pulse, "t": t})
        return pulse

    def readout(self, t: float, demod_freq: float, demod_phase: float = 0.0, dur: float = 0.0):
        """Tune the demod LO and arm one decoder integration window at t (seconds)."""
        cfg = self.cfg
        h = {"op": "readout", "t": t,
             "fcode": cfg.freq2code(demod_freq), "pcode": cfg.phase2code(demod_phase),
             "dcode": cfg.s2batch(dur)}
        self._timeline.append(h)
        return h

    def sleep_until(self, t: float) -> None:
        self._timeline.append({"op": "sleep", "t": t})

    def read_result(self, handle=None) -> None:
        self._timeline.append({"op": "read_result"})

    # ── lowering ────────────────────────────────────────────────────────────────────────────────
    def _start_expr(self, t: float) -> str:
        return f"t0 + {self.lead + self.cfg.s2batch(t)}"

    def _fields(self, pd: _PulseDef) -> str:
        m = _MACRO[pd.channel]
        return (f"set_phase({m}, {pd.slot}, {pd.phase_code}); set_amp({m}, {pd.slot}, {pd.amp_code}); "
                f"set_env({m}, {pd.slot}, {pd.env_line}); set_dur({m}, {pd.slot}, {pd.dur_code});")

    def emit_c(self) -> str:
        L = ['#include "riscq.h"', "", "int main(void) {",
             "  /* ---- init: load the pulse table once ---- */"]
        init_freq = {}
        for pd in self._defs:
            if pd.channel not in init_freq:
                init_freq[pd.channel] = pd.freq_code
                L.append(f"  set_freq({_MACRO[pd.channel]}, {pd.freq_code});")
        for pd in self._defs:
            if not pd.spilled:
                L.append(f"  {self._fields(pd)}")

        L += ["", "  /* ---- schedule: launch by (start time, index) ---- */", "  uint32_t t0 = now();"]
        buf_freq = dict(init_freq)
        for op in self._timeline:
            if op["op"] == "play":
                pd = op["pulse"]
                m = _MACRO[pd.channel]
                if pd.spilled:
                    L.append(f"  set_freq({m}, {pd.freq_code}); {self._fields(pd)}")
                    buf_freq[pd.channel] = pd.freq_code
                    self.reprogrammed += 1
                else:
                    if buf_freq.get(pd.channel) != pd.freq_code:
                        L.append(f"  set_freq({m}, {pd.freq_code});")
                        buf_freq[pd.channel] = pd.freq_code
                    self.cached += 1
                L.append(f"  set_start_time({m}, {self._start_expr(op['t'])}); fire({m}, {pd.slot});")
            elif op["op"] == "readout":
                L.append(f"  set_demod({op['fcode']}, {op['pcode']});")
                L.append(f"  arm_readout({self._start_expr(op['t'])}, {op['dcode']});")
            elif op["op"] == "sleep":
                L.append(f"  sleep_until({self._start_expr(op['t'])});")
            elif op["op"] == "read_result":
                L.append("  int rs = read_res(); int re = read_real(); int im = read_imag();")
                L.append("  put_result(re, im, rs);")
        L += ["", "  for (;;) { }", "}", ""]
        return "\n".join(L)

    # ── build + envelopes ───────────────────────────────────────────────────────────────────────
    def envelopes(self):
        """(channel, base_line, array) tuples for Soc.load_envelope — what define_pulse(env=array) packed."""
        return list(self._env_loads)

    def build(self, out_dir: str, name: str = "prog") -> str:
        """Compile the emitted C to an ELF with the firmware crt0/linker. Returns the ELF path."""
        fw = os.path.normpath(os.path.join(os.path.dirname(__file__), "..", "..", "firmware"))
        cc = "/config/build/riscv-install/bin/clang"
        arch = "rv32im" if self.cfg.contract.with_mul else "rv32i"
        cflags = ["-target", "riscv32", f"-march={arch}", "-mabi=ilp32", "-mno-relax",
                  "-nostdlib", "-static", "-Os", "-ffreestanding", f"-I{os.path.join(fw, 'include')}"]
        os.makedirs(out_dir, exist_ok=True)
        cpath = os.path.join(out_dir, f"{name}.c")
        with open(cpath, "w") as f:
            f.write(self.emit_c())
        crt0 = os.path.join(out_dir, "crt0.o")
        obj = os.path.join(out_dir, f"{name}.o")
        elf = os.path.join(out_dir, f"{name}.elf")
        subprocess.run([cc, *cflags, "-c", os.path.join(fw, "crt0.S"), "-o", crt0], check=True)
        subprocess.run([cc, *cflags, "-c", cpath, "-o", obj], check=True)
        subprocess.run([cc, *cflags, f"-Wl,-T,{os.path.join(fw, 'riscq.ld')}", "-Wl,-e,_start",
                        crt0, obj, "-o", elf], check=True)
        return elf
