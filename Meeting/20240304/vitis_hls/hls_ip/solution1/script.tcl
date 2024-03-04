############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_ip
set_top keygen
add_files ../FalconHLS/code_hls/codec.c
add_files ../FalconHLS/code_hls/common.c
add_files ../FalconHLS/code_hls/fft.c
add_files ../FalconHLS/code_hls/fpr.c
add_files ../FalconHLS/code_hls/header.h
add_files ../FalconHLS/code_hls/keygen.c
add_files ../FalconHLS/code_hls/rng.c
add_files ../FalconHLS/code_hls/shake.c
add_files ../FalconHLS/code_hls/sign.c
add_files ../FalconHLS/code_hls/vrfy.c
add_files -tb ../FalconHLS/code_hls/tb.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb ../FalconHLS/code_hls/tb_data.h -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vivado
set_part {xc7z020-clg400-1}
create_clock -period 100 -name default
source "./hls_ip/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
