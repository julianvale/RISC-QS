# 05 — Remote access

Drive the SoC from a laptop over the network, with the same code that drives it locally.

The principle from [README](README.md) §2.4: **remote is the same interface over a wire.** The remote
client is just another [`Driver`](03-driver.md); the board-side server wraps a local one. Nothing in a
user's program, pulse, or experiment code changes when it moves from local → remote → cosim.

---

## 1. Purpose & scope

**In scope:** a board-side server that exposes the board's `PynqDriver` on the network, and a
`RemoteDriver` the client uses exactly like a local driver. Bulk program/envelope upload, reset
control, result read-back, and a one-time `SocConfig` snapshot so unit math stays client-side.

**Out of scope:** multi-board orchestration / clock sync (QubiC's `JobServer` + PTP graph is over-built
for our single-SoC case — see §5), authentication/multi-tenancy, and any new hardware semantics. This
module is pure transport over [03-driver](03-driver.md).

---

## 2. Where it lives

```
software/python/riscq/
  remote.py        # RemoteDriver (client proxy) + serve() (board-side daemon)
  remote_cli.py    # `python -m riscq.remote_cli` — start the server on the board
deploy/
  riscq-rpc.service  # systemd unit that launches remote_cli on boot
```

---

## 3. Design

### 3a. Transport: Pyro5

Default transport is **Pyro5** — a name server + transparent object proxies, with first-class numpy
support. It is chosen over the two patterns the reference stacks used:

- The RISC-Q reference shipped word arrays as **`pickle` over Flask/HTTP** — an arbitrary-code-execution
  surface and a one-HTTP-round-trip-per-32-bit-word performance trap. We keep neither.
- Raw sockets would mean hand-rolling framing and numpy serialization for no benefit.

Pyro5 gives us a registered top-level object (the `Soc`), method-call proxying, and a name server for
discovery, which is the whole job. (QICK's `pyro.py` is the same design on Pyro4.)

If a language-neutral API is ever required, swap the transport for **gRPC or REST+msgpack** behind the
same `RemoteDriver` surface — the `Driver` ABC is the stable seam, the wire format is not.

### 3b. The client *is* a Driver

```python
class RemoteDriver(Driver):
    """A Driver whose words land on a remote board. The server exposes the board's
    PynqDriver; the Soc facade, ELF loader, and envelope packer all run locally on the
    client — exactly as with any other backend."""
    def __init__(self, ns_host, name="riscq"):
        ns = Pyro5.api.locate_ns(host=ns_host)
        self._d = Pyro5.api.Proxy(ns.lookup(name))        # remote board Driver

    # the Driver ABC, each call forwarded over the wire
    def write_word(self, addr, data):   self._d.write_word(addr, data)
    def write_words(self, addr, words): self._d.write_words(addr, _enc(words))   # one RPC, whole array
    def read_word(self, addr):          return self._d.read_word(addr)
    def reset_hold(self):               self._d.reset_hold()
    def reset_release(self):            self._d.reset_release()
    def get_config(self):               return self._d.get_config()             # JSON SocConfig snapshot
```

Because it satisfies the same ABC, a [`Soc`](03-driver.md) built on a `RemoteDriver` behaves identically
to one built on a `DummyDriver` or `CocotbDriver`. Experiment code is byte-identical across all three —
the QICK/QubiC interchangeability lesson, made literal. And because the `Soc` runs on the client,
`load_program` / `load_envelope` decompose into `write_words` calls — one RPC each, since `write_words`
ships the whole array at once.

### 3c. Board-side server

```python
@Pyro5.api.expose
class _Server:                                  # the network face: the board Driver + a config snapshot
    def __init__(self, driver, cfg): self._d, self._cfg = driver, cfg
    def write_word(self, a, d):   self._d.write_word(a, d)
    def write_words(self, a, ws): self._d.write_words(a, _dec(ws))
    def read_word(self, a):       return self._d.read_word(a)
    def reset_hold(self):         self._d.reset_hold()
    def reset_release(self):      self._d.reset_release()
    def get_config(self):         return self._cfg.to_json()

def serve(ns_host=None, bitfile=None, name="riscq", cfg=None):
    srv = _Server(PynqDriver(bitfile=bitfile), cfg or default_config())   # the real, local board
    daemon = Pyro5.api.Daemon(host=_iface_ip())
    Pyro5.api.locate_ns(host=ns_host).register(name, daemon.register(srv))
    daemon.requestLoop()
```

The `_Server` face is `@expose`d with exactly the `Driver` ABC + `get_config` — the only object with a
network identity. The `Soc`, program lowering, and envelope packing all run on the **client**, so the
board stays a dumb word-mover (the QICK split: unit math on the client, MMIO on the board). Started on
the board with `python -m riscq.remote_cli --ns <host>`, and deployed as a
**systemd service** (`deploy/riscq-rpc.service`) so the board serves on boot — the same pattern QICK and
QubiC ship as a `*_rpc_server.service` unit.

### 3d. Config travels once; math stays local

The client fetches a JSON `SocConfig` snapshot **once** and rebuilds it locally:

```python
drv  = RemoteDriver(ns_host)
cfg  = SocConfig.from_json(drv.get_config())          # one round trip
soc  = Soc(drv, cfg)                                   # everything below runs client-side
code = cfg.freq2code(4.9e9)                            # runs on the client, no network
```

All unit conversions (Hz→code, rad→code, ns→batch — [01](01-hardware-contract.md) §3/§7) execute
client-side; only actual hardware I/O crosses the wire. This is exactly how QICK reconstructs
`QickConfig` from `get_cfg()`, and it keeps interactive use snappy.

### 3e. Bulk data

Programs and envelopes are shipped **whole**, never word-by-word:

- `Soc.load_program(core, elf)` runs on the **client**: it parses the ELF and calls
  `write_words(base, image)` — one RPC per `SHF_ALLOC` section (the whole word array ships at once), not
  one per word.
- `Soc.load_envelope(core, ch, samples)` packs on the client (`pulse.py`) and ships the packed words
  with `write_words` — again one RPC. Encode arrays compactly as `(base64(arr.tobytes()), shape, dtype)`
  (QICK's `NpEncoder`) or via Pyro5's serpent/msgpack serializer. **Never raw `pickle`.**
- `write_words` is the only bulk path and it batches in one call — we do **not** expose a per-word RPC
  loop (the reference's one-round-trip-per-word mistake). (Block read-back — e.g. `robs` — is a chatty
  `read_word` loop today; see the streaming extension in §5.)

### 3f. Remote follows the on-core-program flow

Remote use naturally follows the **on-core program** flow ([README](README.md) §3): build the ELF +
envelopes on the client, ship them once, then `load_program` → `load_envelope` → `reset_release()`
remotely, run, and `read_core_ram` the results back. Direct register poking isn't a real-hardware path
at all (see [03](03-driver.md) / [04](04-pulse-and-program.md)), so there is nothing latency-sensitive
to optimize here.

---

## 4. Connections

- **[03-driver](03-driver.md)** — `RemoteDriver` implements the `Driver` ABC; `serve()` wraps a
  `PynqDriver`. This module adds no hardware semantics, only transport.
- **[01-hardware-contract](01-hardware-contract.md)** — `get_config()` ships the `SocConfig` snapshot.
- **[04-pulse-and-program](04-pulse-and-program.md)** — the client builds ELFs/envelopes; the server
  just stores them. Lowering and codegen never run on the board.
- **[06-cosim](06-cosim.md)** — orthogonal: cosim swaps in a `CocotbDriver` locally; remote swaps in a
  `RemoteDriver`. They are alternative backends behind the same `Soc`, never combined.

---

## 5. Extension points

- **`run(program) -> results` convenience.** A thin `Runner` over the `Driver` that does
  load → reset-release → wait → read-back in one call (QubiC's `AbstractCircuitRunner.run_circuit_batch`,
  but minimal). Optional sugar; the `Driver` is enough on its own.
- **Streaming read-back.** A background thread that DMAs results as a long acquisition progresses
  (QICK's `DataStreamer`), if shot counts grow beyond a single blocking read.
- **Auth / TLS.** Pyro5 supports SSL + HMAC; add only if the board leaves a trusted lab network.
- **Explicitly not adopted:** multi-board sync (`JobServer`, PTP `_SyncGraph`). One SoC, one server.

---

## 6. MVP

1. `@expose` the `Soc` methods; implement `serve()` (daemon + name-server register) and `remote_cli`.
2. `RemoteDriver(Driver)` forwarding every ABC method; `get_config()` + `SocConfig.from_json`.
3. Encode numpy as base64 `(bytes, shape, dtype)`; ship ELFs as raw `bytes`.
4. Acceptance test: one script that builds a gate-pulse program, runs unchanged against
   `Soc(DummyDriver(), cfg)` locally and `Soc(RemoteDriver(ns), cfg)` through a daemon on `localhost`,
   and asserts identical issued-write logs. Proves the seam before any board exists.

---

## 7. Open questions

- **Name server vs direct URI.** A name server is convenient for discovery but is one more process;
  for a single fixed board a hard-coded `PYRO:riscq@host:port` URI may be simpler. Default to the name
  server, allow a direct-URI shortcut.
- **Where the bitstream lives.** Does the client ship the `.bit`, or does the board hold a known
  bitstream loaded at service start? Default: board-side at startup (`serve(bitfile=...)`); client only
  ships programs/envelopes.
- **Result schema.** Whether `read_core_ram` returns raw words (client decodes per the program's known
  result addresses) or a typed result object (QubiC's `ResultChannel`). MVP: raw words; revisit if a
  result-type layer lands in [04](04-pulse-and-program.md).
