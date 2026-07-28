# RISC-Q software documentation

The supported implementation is `software/riscq`, `software/fw`, and `software/tests`. Platform
selection is explicit: RFSoC4x2 uses `rfsoc4x2-nv-1q`; existing ZCU216 behavior remains separate.

## Supported workflows

- [ZCU216 setup and legacy remote deployment](11-zcu216-setup.md): build the matching XSA and
  firmware, run locally in PYNQ, or install the preserved `riscq-board-server`/`RemoteDriver` lane.
- [Host deployment quickstart](08-host-deployment.md): the trusted single-host/direct-link
  RFSoC4x2 workflow, provisioning, token RPC, boot self-test, `Board`, and generic firmware runs.
- [Platform developer guide](09-platform-developer.md): immutable artifact inputs, exact metadata,
  and host-only `.rqplatform` packaging after a separately authorized Linux Vivado build.
- [Protected RF validation](10-protected-rf-validation.md): optional cabling/safety boundary and the
  explicit RF-output acknowledgement requirement.
- [Accepted RFSoC4x2 platform](07-rfsoc4x2-accepted-platform.md): exact release identity, hashes,
  hardware contract, accepted digital result, and bounded characterization.

## Subsystem references

- [Hardware contract](01-hardware-contract.md)
- [Firmware](02-firmware.md)
- [Driver and run layer](03-driver.md)
- [Pulse and program model](04-pulse-and-program.md)
- [Remote architecture](05-remote.md)
- [Co-simulation](06-cosim.md)

The ZCU216 guide documents its preserved local and legacy remote workflows. RFSoC4x2 provisioning,
pairing, private-link binding, boot readiness, and generic firmware execution are a separate lane;
they do not alter ZCU216 behavior or documentation.
