# Deployment package boundary

This package is the host-only RFSoC deployment foundation. `identity.py` and `bundle.py` perform all
parsing and compatibility checks before an adapter call; `engine.py` owns aligned word loading,
complete readback, deadlines, named-symbol access, image reuse, and final reset assertion.

`Rfsoc4x2Adapter` and `Zcu216Adapter` are selected by exact platform ID. The RFSoC4x2 adapter has no
MTS, Nyquist, DAC-current, RF-output, or ADC-capture methods. Network authentication, service startup,
provisioning, filesystem installation, and live-board access are outside this package and Phase 2.
