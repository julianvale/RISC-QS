"""Authenticated Pyro5 RPC client transport factory for host-side Board connection."""

from __future__ import annotations

from typing import Any, Mapping
import Pyro5.api


class AuthenticatedRpcTransport:
    """Client-side HostTransport implementation using Pyro5 Handshake authentication."""

    def __init__(self, endpoint: str, token: str, port: int = 50000):
        self._endpoint = endpoint
        self._port = port
        self._token = token
        
        # Connect to the board daemon via Pyro5 Proxy
        uri = f"PYRO:riscq.board@{endpoint}:{port}"
        self._proxy = Pyro5.api.Proxy(uri)
        
        # Pyro5 connection handshake token
        self._proxy._pyroHandshake = token
        self._proxy._pyroTimeout = 5.0

    def status(self) -> Mapping[str, Any]:
        return dict(self._proxy.status())

    def run_firmware(self, bundle: bytes, *, parameters: Mapping[str, int],
                     results: list[str], timeout_s: float) -> Mapping[str, Any]:
        return dict(self._proxy.run_firmware(
            bundle, 
            parameters=dict(parameters), 
            results=list(results), 
            timeout_s=float(timeout_s)
        ))

    def run_installed(self, name: str, version: str, *, parameters: Mapping[str, int],
                      results: list[str], timeout_s: float) -> Mapping[str, Any]:
        return dict(self._proxy.run_installed(
            str(name), 
            str(version), 
            parameters=dict(parameters), 
            results=list(results), 
            timeout_s=float(timeout_s)
        ))

    def self_test(self, *, timeout_s: float) -> Mapping[str, Any]:
        return dict(self._proxy.self_test(b"", timeout_s=float(timeout_s)))


def create_rpc_transport(profile_doc: dict[str, Any]) -> AuthenticatedRpcTransport:
    """Transport factory passed to Board.connect()."""
    endpoint = profile_doc.get("endpoint")
    token = profile_doc.get("token")
    if not endpoint or not token:
        raise RuntimeError(
            "Phase 3 authenticated transport requires board profile 'endpoint' and 'token' fields."
        )
    port = profile_doc.get("port", 50000)
    if not isinstance(port, int) or isinstance(port, bool) or not 1 <= port <= 65535:
        raise RuntimeError("board profile port is invalid")
    return AuthenticatedRpcTransport(endpoint, token, port=port)
