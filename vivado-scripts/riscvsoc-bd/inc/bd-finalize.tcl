# ---- Validate, generate the HDL wrapper, add constraints, set the top ------------------------------
validate_bd_design

make_wrapper -files [get_files $BD_NAME.bd] -top -import -force
if {$GENERATE_TARGETS} {
  generate_target all [get_files $BD_NAME.bd]
} else {
  puts "\[bd-finalize\] validation-only: skipped generate_target"
}
close_bd_design $BD_NAME

set_property top ${BD_NAME}_wrapper [current_fileset]

set _constraints $SCRIPT_DIR/$CONSTRAINTS_FILE
if {![file exists $_constraints]} {
  error "platform constraints file not found: $_constraints"
}
add_files -fileset constrs_1 -norecurse $_constraints
if {$PLATFORM eq "rfsoc4x2"} {
  # The PS/RFDC generated clocks do not exist while synth_1 first parses project XDC. Apply this XDC
  # after the synthesized netlists are linked for Phase 5A reporting, and normally during implementation.
  set_property USED_IN_SYNTHESIS false [get_files $_constraints]
}
puts "\[bd-finalize\] constraints=$_constraints"
update_compile_order -fileset sources_1
