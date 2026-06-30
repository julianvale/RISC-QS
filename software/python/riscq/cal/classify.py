"""classify.py — a per-qubit 2-cloud linear discriminator (specs 02 §4).

Replaces qcal's ClassificationManager + GMM for the 2-level (|0>/|1>) case. One `fit` over single-shot
IQ clouds yields the connecting axis, the decision midpoint, and the Separation SNR; `predict` thresholds
along that axis; `confusion`/`fidelity` follow for free by predicting prepared states. The trained object
is stored in CalConfig.discriminators[q]. (3-level is a future drop-in behind the same fit/predict.)
"""

import numpy as np


def _axis_std(iq, mean, axis):
    """1-D spread of a complex cloud *along* the discriminating `axis`.

    np.std of the complex array would fold in the scatter orthogonal to the axis, which never reaches
    the threshold and so never causes a misassignment — only the spread along the axis sets the cloud
    overlap. So project (iq-mean) onto the unit axis and take that 1-D std: the physically relevant
    spread, and the one that makes snr collapse to |Δmean|/σ for an isotropic cloud.
    """
    return ((iq - mean) * axis.conj()).real.std()


class LinearDiscriminator:
    def fit(self, iq0, iq1):
        """iq0, iq1: complex single-shot IQ clouds for |0> and |1>."""
        iq0, iq1 = np.asarray(iq0), np.asarray(iq1)
        self.m0, self.m1 = iq0.mean(), iq1.mean()                 # cloud means
        self.axis = (self.m1 - self.m0) / abs(self.m1 - self.m0)  # unit |0>→|1> direction
        self.mid = 0.5 * (self.m0 + self.m1)                      # decision midpoint
        spread = 0.5 * (_axis_std(iq0, self.m0, self.axis) + _axis_std(iq1, self.m1, self.axis))
        self.snr = abs(self.m1 - self.m0) / spread                # Separation metric, for free
        return self

    def predict(self, iq):
        """→ bool array, True/1 for |1>: project onto the connecting axis, past the midpoint toward m1."""
        return ((np.asarray(iq) - self.mid) * self.axis.conj()).real > 0

    def confusion(self, iq0, iq1):
        """2x2 [[P(0|0), P(1|0)], [P(0|1), P(1|1)]] — rows = prepared state, cols = assigned state."""
        p1g0 = self.predict(iq0).mean()      # P(1|0)
        p1g1 = self.predict(iq1).mean()      # P(1|1)
        return np.array([[1 - p1g0, p1g0], [1 - p1g1, p1g1]])

    def fidelity(self, iq0, iq1):
        """Assignment fidelity 1 - ½(P(1|0) + P(0|1))."""
        c = self.confusion(iq0, iq1)
        return 1 - 0.5 * (c[0, 1] + c[1, 0])
