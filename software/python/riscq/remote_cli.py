"""remote_cli — start the board-side RPC server (docs/software/05 §3c).

    python -m riscq.remote_cli --ns <host> --bitfile design.bit
"""

import argparse

from .remote import serve


def main():
    ap = argparse.ArgumentParser(description="riscq board-side RPC server")
    ap.add_argument("--ns", dest="ns_host", default=None,
                    help="Pyro5 name-server host (omit to print a direct PYRO URI)")
    ap.add_argument("--bitfile", default=None, help="bitstream to program at startup")
    ap.add_argument("--name", default="riscq", help="registered object name")
    ap.add_argument("--host", default=None, help="interface to bind (default: hostname)")
    args = ap.parse_args()
    serve(ns_host=args.ns_host, bitfile=args.bitfile, name=args.name, host=args.host)


if __name__ == "__main__":
    main()
