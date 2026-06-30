"""sequence.py — the gate→pulse layer (specs 02 §2). A Sequence is a short ordered op list on one
qubit; lowering walks it keeping a running absolute time and a running virtual-Z phase, resolving each
gate against the typed store and emitting Program ops (define_pulse/play, readout, read_result).

Gates are pulse-*resolving helpers*, not unitary objects — virtual-Z is the only "compilation" and it
is one running addition. Envelopes come from riscq.pulse, sampled at fs; pack_envelope (in load) does
the Q15 quantize + interpolation. All physical→code conversion happens in Program (the core sees only
integer codes); this layer stays in float/physical units.
"""

from math import pi

from .. import pulse
from ..program import Program

# Amplitude pre-scale K (00-contracts §1): identity for v1 — the store holds physical amp ∈ [0,1) and
# amp2code maps it straight to [0, 2^15). One place to change if a non-unit prescale is ever pinned.
K = 1.0

_ENV = {"gaussian": pulse.gaussian, "drag": pulse.drag,
        "cos_edge_square": pulse.cos_edge_square, "square": pulse.square}


def _envelope(name, dur, fs, kwargs):
    if name not in _ENV:
        raise ValueError(f"unknown envelope {name!r} (expected one of {list(_ENV)})")
    return _ENV[name](dur, fs, **(kwargs or {}))


class Sequence:
    """An ordered op list on one qubit. Methods append and return self (chainable). Gates resolve
    against the store at lowering time; rz is a zero-time carrier-phase advance (virtual-Z)."""

    def __init__(self):
        self.ops = []

    def gate(self, name: str) -> "Sequence":
        self.ops.append(("gate", name))
        return self

    def x90(self) -> "Sequence":
        return self.gate("X90")

    def x(self) -> "Sequence":
        return self.gate("X")

    def rz(self, phase: float) -> "Sequence":
        self.ops.append(("rz", phase))
        return self

    def y90(self) -> "Sequence":
        return self.rz(+pi / 2).x90().rz(-pi / 2)        # Y90 = virtual-Z framed X90

    def delay(self, t: float) -> "Sequence":
        self.ops.append(("delay", t))
        return self

    def measure(self) -> "Sequence":
        self.ops.append(("measure", None))
        return self


def lower(seq: Sequence, qcfg, cfg, lead: int = 1024) -> Program:
    """Sequence → a single-shot Program timeline (the kernel codegen wraps it in the sweep/shot loops).

    Walks the ops with a running time `t` (s) and virtual-Z phase `vz` (rad): a gate plays its resolved
    pulse at `t` (phase folded with vz) and advances `t`; rz advances vz only; delay advances `t`;
    measure plays the readout drive, arms the demod window at `t+demod_delay`, and reads one result.
    """
    prog = Program(cfg, lead=lead)
    t, vz = 0.0, 0.0
    for op, arg in seq.ops:
        if op == "gate":
            g = qcfg.gates[arg]
            env = _envelope(g.envelope, g.dur, cfg.fs, g.env_kwargs)
            pd = prog.define_pulse("gate", freq=qcfg.drive_freq, amp=K * g.amp,
                                   phase=g.phase + vz, dur=g.dur, env=env)
            prog.play(pd, t=t)
            t += g.dur
        elif op == "rz":
            vz += arg
        elif op == "delay":
            t += arg
        elif op == "measure":
            renv = _envelope(qcfg.readout_env, qcfg.readout_dur, cfg.fs, {})
            pd = prog.define_pulse("readout", freq=qcfg.readout_freq, amp=qcfg.readout_amp,
                                   phase=0.0, dur=qcfg.readout_dur, env=renv)
            prog.play(pd, t=t)
            prog.readout(t + qcfg.demod_delay, demod_freq=qcfg.demod_freq,
                         demod_phase=qcfg.demod_phase, dur=qcfg.demod_dur)
            prog.read_result()
            t += qcfg.readout_dur
    return prog
