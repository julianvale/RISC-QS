# Deployment package boundary

This package is the RFSoC4x2 deployment foundation for one trusted host and one directly connected
board. `identity.py` and `bundle.py` perform all parsing and compatibility checks before an adapter
call; `engine.py` owns aligned word loading, manifest-declared envelope placement, complete image
readback, deadlines, named-symbol access, image reuse, and final reset assertion.

`Rfsoc4x2Adapter` and `Zcu216Adapter` are selected by exact platform ID. The RFSoC4x2 adapter has no
MTS, Nyquist, DAC-current, RF-output, or ADC-capture methods. `EnvelopeAsset` records each payload’s
channel and starting line; placement is derived from `SocMap.env_base`, never engine-specific names
or offsets. The board service uses a configured platform filename, private-link bind address, pairing
token, and one execution lock. These controls prevent accidental cross-interface use; they are not
a full multi-user security model.
