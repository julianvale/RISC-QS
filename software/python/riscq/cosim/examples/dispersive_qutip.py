"""dispersive_qutip — the closed-loop QuantumModel hook (docs/software/06 §3b, illustrative).

Each readout window, the harness hands the user's model the DAC drive the SoC played and feeds the
model's response back into the ADC ports; the ReadoutDecoder then demodulates a qubit-state-dependent
cavity pull into different `res` values — the whole readout chain exercised against real physics.

This is a sketch (qutip is an optional extra); it shows the QuantumModel surface, not a calibrated
simulation. Run `python -m riscq.cosim.examples.dispersive_qutip` to see it evaluate (or a note if
qutip is absent).
"""

import numpy as np

from riscq.cosim import QuantumModel


class DispersiveReadout(QuantumModel):
    """Cavity pulled ±chi by the qubit state; the ADC sees the leaked field ⟨a⟩."""

    def __init__(self, chi=2 * np.pi * 1e6, kappa=2 * np.pi * 1e6, qubit_state=0, dim=10):
        import qutip as qt
        self.qt = qt
        self.chi, self.kappa, self.q = chi, kappa, qubit_state
        self.a = qt.destroy(dim)
        self.cav = qt.basis(dim, 0)               # cavity starts empty

    def adc_response(self, t_batch, dac_drive):
        qt = self.qt
        H = (self.chi if self.q else -self.chi) * self.a.dag() * self.a
        ts = np.arange(len(dac_drive))
        res = qt.mesolve(H, self.cav, ts,
                         c_ops=[np.sqrt(self.kappa) * self.a],
                         e_ops=[self.a])
        self.cav = res.states[-1] if res.states else self.cav
        return np.asarray(res.expect[0])           # ⟨a⟩ → the field the ADC digitizes


def main():
    try:
        import qutip  # noqa: F401
    except ImportError:
        print("qutip not installed — install riscq[qutip] to run the closed-loop demo.")
        print("DispersiveReadout shows the QuantumModel surface the cosim harness calls per window.")
        return
    model = DispersiveReadout(qubit_state=1)
    drive = 0.1 * np.ones(16)                       # a flat readout drive batch (illustrative)
    resp = model.adc_response(0, drive)
    print(f"DispersiveReadout(|1⟩) ⟨a⟩ over {len(resp)} samples: first={resp[0]:.4g} last={resp[-1]:.4g}")


if __name__ == "__main__":
    main()
