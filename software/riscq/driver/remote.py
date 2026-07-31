"""RemoteDriver: Pyro5 proxy to the board server (spec 10 §6). Mirrors CosimDriver — the 4
Driver methods proxy 1:1, `.remote` is set UNCONDITIONALLY (run.setup/rerun route server-side,
one RPC per batch, so LAN latency never multiplies per register poke), `.board` exposes the
RFDC ops + bundle store. No `.sim` attribute: sim-only operations don't exist on hardware, and
poll_done (only ever executed server-side) uses its hardware branch."""

from __future__ import annotations

import hashlib
import json
import os
from pathlib import Path

import Pyro5.api

from riscq.driver.cosim import _RemoteExtras, _to_bytes

CHUNK = 4 * 1024 * 1024   # bundle-upload chunk size (spec 10 §4: <= 4 MB, one in flight)


class _BoardExtras:
    """The board-ops + store surface of the server (spec 10 §5), thin delegates."""

    def __init__(self, proxy: Pyro5.api.Proxy):
        self._proxy = proxy

    def get_params(self) -> str:
        """The loaded bundle's SocParams JSON (the config handshake, spec 04 §2)."""
        return self._proxy.get_params()

    def info(self) -> dict:
        return self._proxy.info()

    def mts(self, daclatency: int = 260, adclatency: int = 60) -> int:
        return self._proxy.mts(daclatency, adclatency)

    def refclks(self, lmk_freq: float, lmx_freq: float | None = None) -> None:
        self._proxy.refclks(lmk_freq, lmx_freq)

    def adc_nyquist_zone(self, n: int) -> None:
        self._proxy.adc_nyquist_zone(int(n))

    def dac_nyquist_zone(self, tile: int, block: int, n: int) -> None:
        self._proxy.dac_nyquist_zone(int(tile), int(block), int(n))

    def dacvop(self, tile: int, block: int, uA: int) -> None:
        self._proxy.dacvop(int(tile), int(block), int(uA))

    def bundles(self) -> dict:
        return self._proxy.bundles()

    def load(self, bundle: str, download: bool = True) -> dict:
        """Construct/replace the server's PynqDriver from a stored bundle (full bring-up)."""
        return self._proxy.load(str(bundle), bool(download))


class RemoteDriver:
    """Driver over Pyro5 to the board server. `host` is a hostname/IP (+ `port`) or a full
    PYRO: uri."""

    def __init__(self, host: str, port: int = 9091):
        uri = host if host.startswith("PYRO:") else f"PYRO:riscq.board@{host}:{port}"
        self._proxy = Pyro5.api.Proxy(uri)
        self.remote = _RemoteExtras(self._proxy)
        self.board = _BoardExtras(self._proxy)

    def read32(self, addr: int) -> int:
        return self._proxy.read32(int(addr))

    def write32(self, addr: int, value: int) -> None:
        self._proxy.write32(int(addr), int(value) & 0xFFFFFFFF)

    def read_block(self, addr: int, nbytes: int) -> bytes:
        return _to_bytes(self._proxy.read_block(int(addr), int(nbytes)))

    def write_block(self, addr: int, data: bytes) -> None:
        self._proxy.write_block(int(addr), bytes(data))

    def close(self) -> None:
        self._proxy._pyroRelease()


class _ProgramRpcExtras:
    """The only remote surface exposed by the RFSoC4x2 ProgramDriver."""

    def __init__(self, transport):
        self._transport = transport

    def setup(self, params_json: str, progmap: dict, timeout_s: float | None = None):
        return self._transport.program_setup(params_json, progmap, timeout_s=timeout_s)

    def rerun(self, cores, params, arrays, results, timeout, timeout_s=None):
        if timeout_s is None or timeout_s <= 0:
            raise ValueError("RFSoC4x2 Program rerun requires a positive timeout_s")
        raw = self._transport.program_rerun(cores, params, arrays, results, timeout,
                                            timeout_s=float(timeout_s))
        return {int(c): {n: _to_bytes(b) for n, b in d.items()} for c, d in raw.items()}


class ProgramDriver:
    """Profile-backed, restricted RFSoC4x2 Driver for the Python DSL.

    It intentionally has no four-operation Driver methods: ``risq.run`` sees only ``remote``
    and sends one authenticated setup/rerun request per batch.
    """

    def __init__(self, transport, soc_map, raw_params_json: str):
        self.remote = _ProgramRpcExtras(transport)
        self.map = soc_map
        self._transport = transport
        self._raw_params_json = raw_params_json

    @classmethod
    def connect(cls, profile: str | Path | None = None, *, transport_factory=None):
        if profile is None:
            root = Path(os.environ.get("XDG_CONFIG_HOME", Path.home() / ".config"))
            profile = root / "riscq" / "board.json"
        profile_path = Path(profile)
        try:
            document = json.loads(profile_path.read_text())
        except (OSError, json.JSONDecodeError) as exc:
            raise RuntimeError(f"cannot read board profile {profile_path}: {exc}") from exc
        if not isinstance(document, dict) or set(document) - {"endpoint", "params", "token", "port"}:
            raise RuntimeError("board profile has unsupported fields")
        if transport_factory is None:
            from riscq.rpc_transport import create_rpc_transport
            transport_factory = create_rpc_transport
        transport = transport_factory(document)
        status = dict(transport.status())
        raw = status.get("params")
        if not isinstance(raw, str):
            params_name = document.get("params")
            if not isinstance(params_name, str):
                raise RuntimeError("board status omitted active raw params")
            params_path = Path(params_name)
            if not params_path.is_absolute():
                params_path = profile_path.parent / params_path
            raw = params_path.read_text()
        from riscq.deployment.identity import raw_config_identity
        identity = raw_config_identity(raw)
        if identity.platform_id != "rfsoc4x2-nv-1q" or identity.params.qubit_num != 1:
            raise RuntimeError("ProgramDriver.connect requires the one-core RFSoC4x2 profile")
        platform = status.get("platform", {})
        for key, value in {"id": identity.platform_id, **identity.requirements()}.items():
            if platform.get(key) != value:
                raise RuntimeError(f"board status {key} does not match host profile")
        return cls(transport, __import__("riscq.map", fromlist=["SocMap"]).SocMap(identity.params),
                   raw)

    def close(self):
        close = getattr(self._transport, "close", None)
        if close is not None:
            close()


def upload_bundle(drv: RemoteDriver, name: str, xsa: str | Path, params_json: str | Path,
                  board: dict | None = None) -> None:
    """Chunk a bundle's files up to the server's store (spec 10 §4): top.xsa + params.json
    (+ board.json when `board` is given). Activate it with drv.board.load(name)."""
    files = [("top.xsa", Path(xsa).read_bytes()),
             ("params.json", Path(params_json).read_bytes())]
    if board is not None:
        files.append(("board.json", json.dumps(board, indent=2).encode()))
    for filename, data in files:
        drv._proxy.store_begin(name, filename, len(data), hashlib.sha256(data).hexdigest())
        for off in range(0, len(data), CHUNK):
            drv._proxy.store_chunk(data[off:off + CHUNK])
        drv._proxy.store_end()
