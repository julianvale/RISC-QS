# 05 — Parallel remote transport boundaries

The public experiment API is host-side:

```python
from riscq import Board

board = Board.connect()
firmware = board.compile_c("experiment.c")
result = board.run(firmware, parameters={"shots": 100}, timeout_s=1.0)
```

`Board` talks through the bounded `HostTransport` protocol in `riscq.api`. The protocol exposes only
platform status, bounded firmware execution, installed-firmware execution, and self-test. It does
not expose raw MMIO, shell commands, ARM-side Python, arbitrary filesystem paths, or runtime platform
replacement.

## New RFSoC4x2 host boundary

Phase-independent host operations are available now:

- compile C and construct deterministic `.rqfw` bundles;
- inspect and verify `.rqfw` and `.rqplatform` bundles;
- run through `LocalEngineTransport` with a fake or explicitly supplied adapter;
- validate platform, map, ABI, image, symbol, deadline, readback, and reset invariants.

`Board.connect()` reads one default profile, but intentionally requires an injected transport
factory. The authenticated network transport and board service are not installed by this host-only
foundation.

## Preserved ZCU216 remote deployment

`riscq.driver.remote`, `riscq.board.server`, the `riscq-board-server` entry point, and
`software/deploy/riscq-rpc.service` form the preserved ZCU216 compatibility deployment. That service
loads ZCU216 XSA/config bundles and retains the established `PynqDriver` startup behavior and Pyro API.
Its complete setup is [documented here](11-zcu216-setup.md).

The legacy ZCU216 protocol has no RFSoC4x2 pairing-token semantics. It belongs only on the trusted,
isolated network used by existing ZCU216 deployments and must bind to the explicitly configured board
address. It is not an implementation or substitute for the new RFSoC4x2 service.

The RFSoC4x2 service must bind only to its configured private link, authenticate a mode-restricted
pairing token, serialize access, fail closed during startup, and expose only the bounded transport.
Its provisioning and installation remain separate future work.

## Serialization and result model

Bundles and manifests cross a transport as bytes and JSON-compatible values. Named result arrays are
copied from manifest-validated RAM symbols. Python pickle, arbitrary remote imports, remote code
execution, and per-word network loading are outside the public interface.

Co-simulation uses the same map/run operations behind its own adapter. Both real-board lanes keep
their own platform identity, startup, and transport contract; selecting one must never silently fall
back to the other.
