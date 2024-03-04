# This script segment is generated automatically by AutoPilot

set id 128
set name keygen_mul_mul_16ns_15ns_16_4_1
set corename simcore_mul
set op mul
set stage_num 4
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 0
set in1_width 15
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 16
set arg_lists {i0 {16 0 +} i1 {15 0 +} p {16 0 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {all} IMPL {dsp48} LATENCY 3 ALLOW_PRAGMA 1
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 131
set name keygen_mul_mul_16s_17s_32_4_1
set corename simcore_mul
set op mul
set stage_num 4
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 1
set in1_width 17
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 32
set arg_lists {i0 {16 1 +} i1 {17 1 +} p {32 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {all} IMPL {dsp48} LATENCY 3 ALLOW_PRAGMA 1
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 152
set name keygen_mul_mul_17s_16ns_32_4_1
set corename simcore_mul
set op mul
set stage_num 4
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 17
set in0_signed 1
set in1_width 16
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
set arg_lists {i0 {17 1 +} i1 {16 0 +} p {32 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {all} IMPL {dsp48} LATENCY 3 ALLOW_PRAGMA 1
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 155
set name keygen_am_addmul_15s_17s_14ns_32_4_1
set corename simcore_am
set op am
set stage_num 4
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 15
set in0_signed 1
set in1_width 17
set in1_signed 1
set in2_width 14
set in2_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
set arg_lists {i0 {15 1 +} i1 {17 1 +} s {18 1 +} i2 {14 0 +} p {32 1 +} c_expval {c} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {all} IMPL {dsp48} LATENCY 3 ALLOW_PRAGMA 1
}


set op am
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 158
set name keygen_ama_submuladd_1ns_16ns_14ns_22ns_30_4_1
set corename simcore_ama
set op ama
set stage_num 4
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 1
set in0_signed 0
set in1_width 16
set in1_signed 0
set in2_width 14
set in2_signed 0
set in3_width 22
set in3_signed 0
set ce_width 1
set ce_signed 0
set out_width 30
set arg_lists {i0 {1 0 +} i1 {16 0 -} s {16 0 +} i2 {14 0 +} m {30 1 +} i3 {22 0 +} p {30 0 +} c_expval {c} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $name BINDTYPE {op} TYPE {all} IMPL {dsp48} LATENCY 3 ALLOW_PRAGMA 1
}


set op ama
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 164
set hasByteEnable 0
set MemName keygen_compute_public_1_iGMb_ROM_AUTO_1R
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 14
set AddrRange 1024
set AddrWd 10
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "00111111111011" "01000100110001" "00010000111001" "00010011001101" "00100111100010" "01011101111110" "01111100001011" "01010011010001" "00101000010011" "01001010001111" "01100101000000" "10110110110111" "01101101101111" "00101011111100" "01011100000010" "10100111001010" "00110000100101" "00100001001101" "00011110101000" "10101010101101" "10100101101001" "10100010100100" "01000001011101" "00011101010011" "01011011010111" "10000101100010" "01001000000111" "01010001000110" "10110000111100" "10100101010010" "01011011111010" "10101110010011" "10000011100001" "10111111110011" "10100101100111" "01110100010110" "01011001010111" "00110111110001" "01011101011101" "10011101111100" "01000101001010" "10000001110010" "10101000000011" "01001001000111" "10101100101100" "00011000000010" "10111001010001" "00000001100100" "10000000110111" "01100111100001" "10010111111101" "01010000011001" "00110101010100" "01111010110010" "01011011000111" "10010011110100" "01010001100001" "10100111110100" "01111011001010" "01110101010010" "10111110001100" "10110000011100" "01011110100001" "00000001001111" "00000000001101" "01101100011010" "10001010110110" "01010101001101" "01000111101010" "10110010111111" "00101101010111" "01001001000100" "10011001110011" "01110111000101" "10001001110110" "10001110010101" "00100000100011" "10000100111011" "10000111101101" "00110000100110" "01101101100111" "00110011000101" "00010101010111" "01100011111101" "10100000010011" "10000011110011" "10100100011111" "10110100100111" "10101101010110" "00100010100011" "00011100010000" "01110010010111" "00000000110000" "10010101001011" "00101000000000" "00010011001100" "10010011011110" "10101000100011" "10111000011000" "00011100011100" "10110010001110" "10001100000110" "01100000001111" "00101111000100" "01011111011101" "00101011101100" "00100010011011" "00011001110100" "00001011000111" "01101101011100" "00010000011101" "10001100001101" "01010001111100" "00010111101101" "10010001101010" "10110000000101" "00001110000100" "00111100110000" "10101101111101" "10100111110000" "01001101010101" "01110111000000" "10011011110110" "01001010001010" "10100000011110" "00000001111110" "00101101101001" "01101001000000" "01100111101011" "01100110001111" "00011000101110" "01001100000100" "00000000101010" "00001010100001" "00100011000000" "01110000110011" "00010100010000" "10111011010101" "01110111111011" "10000110000010" "10111010101101" "00001111011101" "10100100101101" "01111000000111" "01101110101101" "10000100100111" "00001111101100" "10011111111100" "01001001011111" "00000010100011" "10001110110111" "01000111110101" "01100100011111" "10111100010100" "00101110101111" "10111010100010" "01001000100111" "00110100100010" "00100000001100" "10110001011101" "10111011101011" "01101000001000" "01011000010111" "01110000111001" "01011100011010" "10010001101111" "00111111111100" "01011011111000" "01101100010100" "00110101001010" "01010000001101" "10010010110010" "10101111011101" "01010010000100" "10001100110000" "00011000010100" "01101011111100" "01001010100101" "00111100001101" "10001001001100" "10100001010101" "01111000111001" "00011011011110" "01101110111111" "10110001101111" "10111111110001" "10000110011010" "00110010101011" "01100110001000" "01110110100110" "10000110001111" "10110100100000" "01011111010101" "00110010110101" "10011011110001" "10010110101000" "01000110011010" "00111010011000" "01101010101101" "10101001000110" "10001110101010" "10011011011100" "00110111101110" "00100001010101" "00111100111101" "01011110010110" "01110010100101" "01100111010001" "00110110001100" "01001000110011" "00001001110001" "00101010001100" "01111000111010" "00110101110011" "00101111110100" "00110100111100" "00110111000110" "01000101000010" "10111010000111" "01100001011000" "00011011000010" "00100111111110" "10100001100100" "01010011100000" "01010010100110" "00100010001110" "10110100101010" "01100000110111" "00100110110010" "10001000110100" "01010100001011" "01000000000101" "01001000000001" "10000110011101" "10000000100010" "00000010010000" "01011000011000" "10001000000000" "00101000111101" "01010100110000" "10101000111100" "00101110001111" "10110001010010" "01100001101001" "00011010110011" "01001101010111" "10010101000100" "00011101100000" "00111010110100" "00000000100111" "10000000011011" "00100000100000" "00100111000110" "00010110111101" "10100100110110" "10001000000101" "01010111100001" "00010001000101" "00111011001000" "01001110110001" "00100000001010" "10000011001111" "10110010111000" "10010110100111" "00100000001011" "10011010010110" "01110011101101" "00100111000000" "01111011101110" "10110101001010" "00000101110011" "01111100111001" "00110000000001" "10100001010110" "00000000101000" "10011100010100" "10010000011101" "01111100110011" "01010111100011" "00111111010011" "01111011010110" "00001010100100" "10110001110100" "01110011010011" "01100101100101" "01001101110101" "00101001000100" "00110110100000" "10101011001100" "01101101101110" "01101001010001" "10011011001101" "01101111100011" "00100100011010" "00111100101100" "01010101100001" "01111010111001" "01101100011101" "01011001101001" "01010111101101" "10010100100001" "10110100110000" "10110000001101" "00100111001110" "01101000100001" "00000110000010" "01000101101110" "00000001101001" "00100000011100" "10100011001011" "00000001110111" "00111101110011" "01000100010010" "10110011110001" "00111001011000" "10110010101111" "00001011101110" "00110010101000" "00110000111101" "00001011110010" "00111110101101" "10111010011001" "10001111111010" "01010100000010" "10111001101001" "10101100001010" "00101100000010" "00011100111011" "01001101100110" "01111111110101" "00101010000000" "01100000111101" "01101010011110" "00001110011110" "00101101111000" "01000011100111" "10011110111111" "01101110110001" "01011110011111" "10010011000010" "10100011111100" "10001011110110" "00100110101000" "01100001101111" "00001011011000" "01110110010001" "01011110101000" "10100011000000" "10101100011100" "00100110010100" "00101011111011" "00111011001011" "00001110110001" "10001100100110" "00010011011100" "10001001101111" "10101100001001" "10101111010010" "01011100000110" "01000011100101" "01001000011111" "00111011101011" "10011001100010" "01101110010000" "01101010000010" "10000111011110" "01010110100011" "01111000011011" "00010101010001" "10011001010100" "00101110000101" "10110000000001" "10100000111101" "10001110010100" "00000111011110" "01100101011001" "00000001100101" "00011101110111" "10010100001011" "00111000011000" "10111011011101" "10100100101000" "00001100101100" "10001011010011" "00001001111101" "01111111011111" "01010010110011" "10001110101000" "00110110111000" "10000001100010" "01101110011100" "01111011110010" "00101111011100" "01001010010111" "00100001110011" "00111101100001" "00111010101011" "10110000101010" "01111000111011" "01001100111010" "10111010011100" "00000110101000" "01010110100010" "01100001010100" "10101101111011" "01111001100010" "10111011000110" "00010001001001" "00101101001010" "10011100101011" "00101000001001" "00100011001010" "00100100110000" "00001100110101" "00100111110110" "10101100001000" "01111001011001" "00000010001000" "00001001101001" "00110001010101" "01011100000001" "10010000000011" "01101011000111" "00000001111000" "01000100110101" "00011100100001" "10010110100011" "01110000101110" "10100000010101" "10110010000001" "00100110001001" "10010101011010" "10101110101000" "00001001010111" "00100000100101" "10110011001001" "01110001000001" "01100000100001" "01001011000001" "10011011000110" "10001100110010" "01000110100010" "10010011101111" "10110001011000" "10110110010110" "01100000011110" "01111100001110" "10011000100110" "01101011110000" "10110101010011" "00110010001101" "10000100011001" "10011010010001" "00101100010011" "10100010110110" "00111010010100" "01111100011001" "00010110110001" "10101001101001" "01111110000101" "00001101000000" "00011001011100" "00110101010010" "01001100100100" "10101001100111" "01001111110111" "10010101000111" "01100010110101" "01110100000111" "00111111110011" "00110000000000" "10001010001111" "10011001111101" "10011110001010" "01010010001011" "10110010010101" "01100110011100" "00000100101111" "00010110111001" "00111100011111" "01001100001001" "01011010110101" "10011100100001" "01101011110010" "00110011101111" "01011100111011" "10000110111101" "01011011011100" "00111100010000" "00001110100000" "01001101000101" "10000101010010" "00011101001111" "00100010001000" "01010111000011" "01011011110111" "00110110011001" "10110101001101" "10010100100111" "01111111011001" "00000000100011" "00101000110001" "01011101001011" "01111110000000" "00010000111000" "10111100000111" "10000011111100" "00101111101100" "00111011100101" "10101100111001" "01101001010000" "10000100000110" "00100100100100" "01110111100011" "00011101110110" "10100111010101" "00100001000101" "10010110100101" "01100100000010" "01011110001100" "00100001001100" "01111000010101" "00101001110111" "01010000111111" "01100001111110" "01110100000000" "00101000100101" "01101010001011" "10010000000110" "10101001010101" "00000100011000" "10000110000111" "00110011000110" "01101001100001" "00100100110010" "00111011000011" "01011111010110" "01001001111100" "01011100100110" "00100111000001" "10000111000000" "10100000110001" "01011111011011" "10111101011111" "00101110001110" "10111111111111" "10100000110100" "01111110010110" "00001100110001" "00111110110101" "00101000110010" "00010110100100" "01011100001011" "10110111001000" "00110011011100" "00100101111000" "01001111100010" "01110001001010" "01010001010101" "01010010100001" "10011011100100" "00101010001110" "01101000000000" "00001011011111" "00100011000011" "10110110001000" "00001101000001" "00110000100011" "01011101111100" "01101010010001" "00010001100110" "01100011000011" "01010010000010" "10100010010111" "10010110101010" "01010010011110" "00110110111001" "10011000101001" "00101111010001" "00001100001011" "10010011011001" "00110101000000" "01110100001101" "00001010011100" "10011111001000" "01111110101111" "01100101111111" "01100110101000" "10101001001111" "01100101010010" "10000001000111" "01011001001111" "10011000110100" "00000111010011" "01010101010110" "01000101001001" "10111011011111" "00010010110101" "01001110010111" "01101100000110" "01001111101000" "00111011110011" "01010110010101" "10110100111011" "00110110111110" "01001100001011" "01110011011100" "00011110001011" "01100111010111" "00011000000101" "10001000000100" "00000100000100" "00110100111001" "01001010111000" "01000100100111" "01011001000001" "01111011010111" "00100001101011" "01110010101001" "00000011101100" "10100110001011" "10110100001110" "00011101110010" "01001010111001" "10010100110111" "01110001000111" "10000010100010" "01010000000001" "10100110100110" "00100100000111" "00110100010010" "10000101101100" "00001011000011" "00010001000000" "01001101001000" "00001010100110" "10100000000101" "00000000010010" "01011000110100" "00001111000000" "01000101101011" "01111100010101" "00000011100010" "00100110010011" "00000000000110" "10001010101010" "00000101000000" "01100010011010" "10001100000011" "10001000011111" "00101100100100" "00101110100101" "00011010101011" "01010100100000" "01001110011001" "10011010010100" "10011000111110" "00101110011000" "00011101101011" "01101001001001" "01000001010111" "01010010101010" "10011101100100" "01110111111111" "01111100000101" "10001000101000" "01011000111110" "00110110000101" "01000001001111" "01011001110011" "01010110111001" "00110100110010" "01010001101011" "00001110111000" "01000011011111" "10011001010010" "01000100000100" "00110000010000" "10101101101110" "00001101001000" "01100001110001" "00000111100110" "01011101110000" "00010100111110" "10100010001110" "01011110000001" "01001010111110" "01010101110001" "01000110010010" "01000001100001" "00100100000010" "01100101111001" "00010111000011" "01100011100100" "10001101000101" "01111101100101" "00011001011001" "01101101101100" "01001010000100" "01011001100010" "01111100010100" "01100011001111" "01100101011110" "01101100000101" "10110010001101" "01110100111111" "10011111011010" "10011110101011" "01110111110010" "01110110000100" "10110011110101" "00011000001010" "01100110101011" "10011111010111" "00100011011001" "01110010011111" "01011011000000" "10110010000100" "10110100111101" "10010111111010" "00100011001011" "10101110111111" "01010011101100" "01110011110000" "00101100101101" "00111110100011" "10001111111111" "00000111100100" "01110101100110" "10010011000001" "10111111001011" "01100000001101" "10001101000001" "00100001001001" "10100000001111" "00100111010111" "10010100111101" "00111011110000" "10000111100010" "10110010011011" "10101010001000" "01001010011010" "10110000100111" "01000000000001" "00100101101110" "01100101100000" "10011011100001" "10100100111010" "00001100101000" "00101110110111" "00100001010010" "01000010111110" "10111100101110" "01110100010101" "01010000001100" "01111011101011" "00000011110101" "01011101010110" "01001100001010" "01110001111100" "01110110001000" "10100100101011" "10011011100000" "10001101110011" "00100001000001" "00111010001001" "10100000101101" "10011100100110" "10010101101010" "10001011100110" "10101101000010" "10010100011010" "00000100100110" "01001001100111" "00110100111111" "00010101100001" "10001101110000" "10011111001101" "01000111011001" "10101010001010" "10011010110101" "01101100001011" "00000000110101" "01001000101101" "00000110110111" "10100000001101" "01101101110100" "10011111011111" "10000010010111" "00010001110101" "00100111111100" "01110110110001" "01111111010110" "10100110000110" "10000111001000" "10011001101000" "01111100001111" "10101111101101" "00100001010011" "01011010000101" "10100001100111" "10011000110101" "00101010011110" "00010110001011" "01000110110011" "00111100000100" "00111111100010" "01000011000101" "10110110001001" "10110100000101" "10110001011001" "01000011011001" "01001100000101" "10111110011010" "00011001001011" "10101010001100" "10110011100001" "10001010000001" "00100101011001" "00000000001111" "10101001001110" "01001110001011" "00000000010001" "00001000110101" "01011100000011" "10111110010001" "10101100110010" "10100010101100" "10001010110101" "00111110000110" "10101011100101" "01101111011010" "01011011010000" "10100011110010" "10000010010010" "01011110010011" "01101100110100" "00011000100110" "10101010111000" "00011111100100" "00100110100001" "01111111111111" "00000110000000" "00101001010010" "00101010101001" "01010100010111" "00100001111111" "10010010110100" "10111011010011" "01111101100011" "01000100010111" "01100111010011" "01001110010010" "10111000100100" "10001110101011" "10110010100011" "00000001101000" "01100011001100" "10010110101011" "01101001100101" "10111101001110" "01010111110001" "10101010110111" "00001000011101" "00000010000111" "00101111100001" "01110000100000" "01100101111110" "01001111011101" "10111101101000" "00001101001010" "01000000100001" "01111000000101" "10101101000111" "10000011101010" "00001111110000" "00101010100101" "10110111111100" "01011110101010" "00010001001101" "00011110011110" "10000011101000" "01011000111000" "01101011011100" "10111011100101" "10011101011111" "01010011010111" "00001110011111" "00011011101010" "00000100010001" "10000010111001" "00100011011111" "01010001101001" "10100000101011" "00000001110100" "10111000011111" "00000001011011" "10110110110011" "00001011110101" "00010100011000" "01110101100100" "01100100110011" "01111101100000" "01111111011010" "01110100100000" "01000001011111" "00000100110101" "00100100001110" "00100011110100" "10100010011001" "10110101110111" "10010100001001" "10111111001110" "10100101100010" "10010101100001" "01111011101000" "10100010000000" "10011010100001" "10111111010100" "01110000001011" "00111101010100" "00110001110100" "00000101101111" "00100000011101" "00000101010000" "01010100001000" "01010111111111" "10000110010100" "01001000001101" "00011011101111" "10001010100010" "00000111000011" "01011111011100" "00010100100101" "01100001100110" "10001001011011" "01011100001000" "01110001110011" "00110000111100" "10110100101100" "01001101110001" "10111110000001" "01110011001011" "00010101010110" "10111101100010" "10100101111011" "00111011100001" "01010000011101" "01100010011100" "00101001001110" "01000001100101" "00010110001010" "10011101010001" "01000000111100" "10000010110101" "10000111000100" "10100011001101" "00001101110010" "01111111011110" "10011110111101" "10011000100011" "10111110011111" "00000111001011" "00101110010110" "00110001011110" "00000110010101" "01001110001000" "10010001011111" "01100100000100" "10001100011010" "00011000001111" "01111111101111" "00111000101110" "10101000001110" "10010000110001" "00001010111100" "10000101111101" "10010100100100" "01100111100110" "10110010101101" "10110101001011" "01011011011010" "00111101101110" "01001010100111" "10111010100101" "00010110100110" "01011110000010" "00110100111010" "10110011001110" "01010010111110" "01010101100100" "00001000101001" "10010100000010" "00101000011010" "00010110010111" "00101010110101" "00000111011001" "10110001110111" "01001010001001" "00001101000100" "00111111011110" "10100110101010" "01111000101111" "10110111101000" "01010110011110" "00000100111000" "01000011010011" "01000011111111" "01011010000100" "10000111100111" "10000010111101" "01111111111011" "00000000000101" "01110011100011" "01000100001011" "00010010000000" "01010100101101" "01010001101111" "01100101001001" "00000110110100" "01110110001111" "10000110011011" "01100001010101" "10000000100110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 3.254
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $MemName BINDTYPE {storage} TYPE {rom} IMPL {auto} LATENCY 2 ALLOW_PRAGMA 1
}


set CoreName ROM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem  \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 165 \
    name h \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename h \
    op interface \
    ports { h_address0 { O 10 vector } h_ce0 { O 1 bit } h_we0 { O 1 bit } h_d0 { O 16 vector } h_q0 { I 16 vector } h_address1 { O 10 vector } h_ce1 { O 1 bit } h_we1 { O 1 bit } h_d1 { O 16 vector } h_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'h'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 166 \
    name f \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename f \
    op interface \
    ports { f_address0 { O 10 vector } f_ce0 { O 1 bit } f_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'f'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 167 \
    name g \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename g \
    op interface \
    ports { g_address0 { O 10 vector } g_ce0 { O 1 bit } g_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'g'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 168 \
    name tmp2108 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename tmp2108 \
    op interface \
    ports { tmp2108_address0 { O 11 vector } tmp2108_ce0 { O 1 bit } tmp2108_we0 { O 2 vector } tmp2108_d0 { O 16 vector } tmp2108_q0 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'tmp2108'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


