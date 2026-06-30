"""riscq.cal — a riscq-native calibration framework (specs/calibration-software/).

A small, typed library over numpy/scipy and the in-repo riscq runtime: a calibration store, a
sequence (gate→pulse) layer, an on-core arithmetic sweep, a 2-cloud discriminator, six fit models, and
the experiment base. Everything here is host-side float math/analysis; it lowers to integer register
writes on the core via riscq.program's calibration kernel.
"""

from .sweep import Sweep, Sweep2D

__all__ = ["Sweep", "Sweep2D"]
