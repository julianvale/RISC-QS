# Platform developer guide

Platform development is a native-Linux workflow. Vivado execution, hardware access, and FPGA rebuilds
are not part of host packaging and require their own authorization and signoff procedure.

## Product chain

1. Select the exact Scala/JSON configuration and explicit board adapter.
2. Generate RTL and complete the guarded Vivado implementation/signoff workflow.
3. Retain the matching bit/HWH pair, complete raw params JSON, source commit, device/board part,
   clocks, HWH ranges, and Vivado build provenance.
4. Package those already-built bytes without substitution:

```bash
riscq platform package BUILD_DIR \
  --params CONFIG.json --version 1.0.0 --metadata platform-metadata.json \
  --output platform.rqplatform
riscq platform inspect platform.rqplatform
```

The metadata JSON contains exactly `clocks`, `hwh_ranges`, `device`, `board_part`, `source_commit`,
and `vivado`. The semantic platform ID comes from the complete raw params document. The packager
rejects duplicate/malformed JSON, unsafe ZIP members, size/expansion violations, unknown critical
entries, corruption, identity mismatch, and overwrite.

The accepted `rfsoc4x2-nv-1q` 1.0.0 bundle is stored with its exact source payloads under
`software/platforms/rfsoc4x2-nv-1q/1.0.0/`. Packaging does not run Vivado, program a board, or alter
the source payload bytes.
