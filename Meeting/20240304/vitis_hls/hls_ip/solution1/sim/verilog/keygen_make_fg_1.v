// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_make_fg_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        vla18_address0,
        vla18_ce0,
        vla18_we0,
        vla18_d0,
        vla18_q0,
        vla18_address1,
        vla18_ce1,
        vla18_we1,
        vla18_d1,
        vla18_q1,
        data,
        f_address0,
        f_ce0,
        f_q0,
        g_address0,
        g_ce0,
        g_q0,
        depth,
        out_ntt_offset
);

parameter    ap_ST_fsm_state1 = 14'd1;
parameter    ap_ST_fsm_state2 = 14'd2;
parameter    ap_ST_fsm_state3 = 14'd4;
parameter    ap_ST_fsm_state4 = 14'd8;
parameter    ap_ST_fsm_state5 = 14'd16;
parameter    ap_ST_fsm_state6 = 14'd32;
parameter    ap_ST_fsm_state7 = 14'd64;
parameter    ap_ST_fsm_state8 = 14'd128;
parameter    ap_ST_fsm_state9 = 14'd256;
parameter    ap_ST_fsm_state10 = 14'd512;
parameter    ap_ST_fsm_state11 = 14'd1024;
parameter    ap_ST_fsm_state12 = 14'd2048;
parameter    ap_ST_fsm_state13 = 14'd4096;
parameter    ap_ST_fsm_state14 = 14'd8192;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [12:0] vla18_address0;
output   vla18_ce0;
output  [3:0] vla18_we0;
output  [31:0] vla18_d0;
input  [31:0] vla18_q0;
output  [12:0] vla18_address1;
output   vla18_ce1;
output  [3:0] vla18_we1;
output  [31:0] vla18_d1;
input  [31:0] vla18_q1;
input  [63:0] data;
output  [9:0] f_address0;
output   f_ce0;
input  [7:0] f_q0;
output  [9:0] g_address0;
output   g_ce0;
input  [7:0] g_q0;
input  [31:0] depth;
input  [0:0] out_ntt_offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[12:0] vla18_address0;
reg vla18_ce0;
reg[3:0] vla18_we0;
reg[31:0] vla18_d0;
reg[12:0] vla18_address1;
reg vla18_ce1;
reg[3:0] vla18_we1;
reg[31:0] vla18_d1;
reg f_ce0;
reg g_ce0;

(* fsm_encoding = "none" *) reg   [13:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [9:0] REV10_address0;
reg    REV10_ce0;
wire   [9:0] REV10_q0;
wire   [14:0] empty_fu_302_p1;
reg   [14:0] empty_reg_746;
wire   [14:0] gt_fu_306_p2;
reg   [14:0] gt_reg_754;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln3008_fu_326_p2;
wire   [9:0] trunc_ln3009_fu_338_p1;
reg   [9:0] trunc_ln3009_reg_768;
wire   [0:0] and_ln3013_fu_352_p2;
reg   [0:0] and_ln3013_reg_778;
wire   [31:0] w_68_fu_450_p2;
reg   [31:0] w_68_reg_798;
wire    ap_CS_fsm_state3;
reg   [12:0] lshr_ln84_reg_803;
wire   [3:0] trunc_ln3030_fu_475_p1;
reg   [3:0] trunc_ln3030_reg_808;
wire    ap_CS_fsm_state5;
wire   [31:0] sub_ln3029_fu_491_p2;
reg   [31:0] sub_ln3029_reg_816;
wire   [0:0] icmp_ln3030_fu_480_p2;
wire   [0:0] icmp_ln3030_1_fu_498_p2;
reg   [0:0] icmp_ln3030_1_reg_821;
wire   [0:0] or_ln3030_fu_510_p2;
reg   [0:0] or_ln3030_reg_826;
wire   [31:0] z_128_fu_566_p2;
reg   [31:0] z_128_reg_834;
wire    ap_CS_fsm_state7;
wire   [0:0] tmp_204_fu_528_p3;
wire   [31:0] grp_modp_montymul_fu_265_ap_return;
reg   [31:0] ig_reg_860;
wire   [14:0] gm_fu_583_p2;
reg   [14:0] gm_reg_865;
wire    ap_CS_fsm_state9;
wire   [0:0] icmp_ln962_fu_615_p2;
reg   [12:0] lshr_ln86_reg_879;
wire    ap_CS_fsm_state10;
wire    grp_make_fg_step_1_fu_234_ap_start;
wire    grp_make_fg_step_1_fu_234_ap_done;
wire    grp_make_fg_step_1_fu_234_ap_idle;
wire    grp_make_fg_step_1_fu_234_ap_ready;
wire   [12:0] grp_make_fg_step_1_fu_234_vla18_address0;
wire    grp_make_fg_step_1_fu_234_vla18_ce0;
wire   [3:0] grp_make_fg_step_1_fu_234_vla18_we0;
wire   [31:0] grp_make_fg_step_1_fu_234_vla18_d0;
wire   [12:0] grp_make_fg_step_1_fu_234_vla18_address1;
wire    grp_make_fg_step_1_fu_234_vla18_ce1;
wire   [3:0] grp_make_fg_step_1_fu_234_vla18_we1;
wire   [31:0] grp_make_fg_step_1_fu_234_vla18_d1;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din1;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din2;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din3;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din4;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din1;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din2;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din3;
wire   [31:0] grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din4;
wire    grp_modp_montymul_fu_255_ap_ready;
reg   [31:0] grp_modp_montymul_fu_255_a;
reg   [31:0] grp_modp_montymul_fu_255_b;
reg   [31:0] grp_modp_montymul_fu_255_p;
reg   [31:0] grp_modp_montymul_fu_255_p0i;
wire   [31:0] grp_modp_montymul_fu_255_ap_return;
wire    grp_modp_montymul_fu_265_ap_ready;
reg   [31:0] grp_modp_montymul_fu_265_a;
reg   [31:0] grp_modp_montymul_fu_265_b;
reg   [31:0] grp_modp_montymul_fu_265_p;
reg   [31:0] grp_modp_montymul_fu_265_p0i;
wire    grp_modp_NTT2_ext_1_fu_281_ap_start;
wire    grp_modp_NTT2_ext_1_fu_281_ap_done;
wire    grp_modp_NTT2_ext_1_fu_281_ap_idle;
wire    grp_modp_NTT2_ext_1_fu_281_ap_ready;
wire   [12:0] grp_modp_NTT2_ext_1_fu_281_vla18_address0;
wire    grp_modp_NTT2_ext_1_fu_281_vla18_ce0;
wire   [3:0] grp_modp_NTT2_ext_1_fu_281_vla18_we0;
wire   [31:0] grp_modp_NTT2_ext_1_fu_281_vla18_d0;
wire   [12:0] grp_modp_NTT2_ext_1_fu_281_vla18_address1;
wire    grp_modp_NTT2_ext_1_fu_281_vla18_ce1;
wire   [3:0] grp_modp_NTT2_ext_1_fu_281_vla18_we1;
wire   [31:0] grp_modp_NTT2_ext_1_fu_281_vla18_d1;
reg   [14:0] grp_modp_NTT2_ext_1_fu_281_a;
reg    grp_make_fg_step_1_fu_234_ap_start_reg;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state11;
reg    grp_modp_NTT2_ext_1_fu_281_ap_start_reg;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state14;
wire   [63:0] zext_ln3008_fu_320_p1;
wire   [63:0] zext_ln3009_1_fu_425_p1;
wire   [63:0] zext_ln3010_fu_471_p1;
wire    ap_CS_fsm_state4;
wire   [63:0] zext_ln962_fu_610_p1;
wire   [63:0] zext_ln967_3_fu_664_p1;
wire   [63:0] zext_ln968_3_fu_712_p1;
reg   [10:0] u_07_fu_120;
wire   [10:0] u_212_fu_332_p2;
reg   [31:0] d_10_fu_124;
wire   [31:0] d_11_fu_485_p2;
wire    ap_CS_fsm_state8;
reg   [5:0] i_fu_128;
wire   [5:0] i_17_fu_572_p2;
reg   [10:0] u_134_fu_132;
wire   [10:0] u_214_fu_621_p2;
reg   [31:0] x1_fu_136;
reg   [31:0] x2_fu_140;
wire   [31:0] w_66_fu_392_p2;
wire   [0:0] icmp_ln3013_fu_347_p2;
wire  signed [7:0] sext_ln3009_fu_372_p0;
wire  signed [7:0] tmp_fu_376_p1;
wire   [0:0] tmp_fu_376_p3;
wire   [31:0] select_ln635_fu_384_p3;
wire  signed [31:0] sext_ln3009_fu_372_p1;
wire   [11:0] shl_ln_fu_399_p3;
wire   [14:0] zext_ln3009_fu_406_p1;
wire   [14:0] add_ln3009_fu_410_p2;
wire   [12:0] lshr_ln_fu_415_p4;
wire  signed [7:0] sext_ln3010_fu_430_p0;
wire  signed [7:0] tmp_203_fu_434_p1;
wire   [0:0] tmp_203_fu_434_p3;
wire   [31:0] select_ln635_18_fu_442_p3;
wire  signed [31:0] sext_ln3010_fu_430_p1;
wire   [14:0] add_ln3010_1_fu_456_p2;
wire   [0:0] icmp_ln3030_2_fu_505_p2;
wire  signed [5:0] sext_ln808_fu_524_p0;
wire  signed [5:0] tmp_204_fu_528_p1;
wire  signed [31:0] sext_ln808_fu_524_p1;
wire   [31:0] lshr_ln813_fu_542_p2;
wire   [0:0] trunc_ln813_fu_548_p1;
wire   [31:0] xor_ln813_fu_536_p2;
wire   [31:0] select_ln813_fu_552_p3;
wire   [31:0] and_ln813_fu_560_p2;
wire  signed [5:0] i_17_fu_572_p0;
wire   [11:0] shl_ln95_fu_637_p3;
wire   [14:0] zext_ln967_fu_645_p1;
wire   [14:0] add_ln967_1_fu_649_p2;
wire   [12:0] lshr_ln85_fu_654_p4;
wire   [12:0] or_ln_fu_669_p4;
wire  signed [13:0] sext_ln968_fu_679_p1;
wire   [14:0] zext_ln968_fu_683_p1;
wire   [14:0] add_ln968_fu_687_p2;
reg    ap_block_state14_on_subcall_done;
reg   [13:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
reg    ap_ST_fsm_state6_blk;
wire    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
wire    ap_ST_fsm_state9_blk;
wire    ap_ST_fsm_state10_blk;
wire    ap_ST_fsm_state11_blk;
reg    ap_ST_fsm_state12_blk;
wire    ap_ST_fsm_state13_blk;
reg    ap_ST_fsm_state14_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 14'd1;
#0 grp_make_fg_step_1_fu_234_ap_start_reg = 1'b0;
#0 grp_modp_NTT2_ext_1_fu_281_ap_start_reg = 1'b0;
end

keygen_modp_mkgm2_1_REV10_ROM_AUTO_1R #(
    .DataWidth( 10 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
REV10_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(REV10_address0),
    .ce0(REV10_ce0),
    .q0(REV10_q0)
);

keygen_make_fg_step_1 grp_make_fg_step_1_fu_234(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_make_fg_step_1_fu_234_ap_start),
    .ap_done(grp_make_fg_step_1_fu_234_ap_done),
    .ap_idle(grp_make_fg_step_1_fu_234_ap_idle),
    .ap_ready(grp_make_fg_step_1_fu_234_ap_ready),
    .vla18_address0(grp_make_fg_step_1_fu_234_vla18_address0),
    .vla18_ce0(grp_make_fg_step_1_fu_234_vla18_ce0),
    .vla18_we0(grp_make_fg_step_1_fu_234_vla18_we0),
    .vla18_d0(grp_make_fg_step_1_fu_234_vla18_d0),
    .vla18_q0(vla18_q0),
    .vla18_address1(grp_make_fg_step_1_fu_234_vla18_address1),
    .vla18_ce1(grp_make_fg_step_1_fu_234_vla18_ce1),
    .vla18_we1(grp_make_fg_step_1_fu_234_vla18_we1),
    .vla18_d1(grp_make_fg_step_1_fu_234_vla18_d1),
    .vla18_q1(vla18_q1),
    .data(data),
    .logn(sub_ln3029_reg_816),
    .depth(trunc_ln3030_reg_808),
    .in_ntt(icmp_ln3030_1_reg_821),
    .out_ntt(or_ln3030_reg_826),
    .grp_modp_montymul_fu_255_p_din1(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din1),
    .grp_modp_montymul_fu_255_p_din2(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din2),
    .grp_modp_montymul_fu_255_p_din3(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din3),
    .grp_modp_montymul_fu_255_p_din4(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din4),
    .grp_modp_montymul_fu_255_p_dout0(grp_modp_montymul_fu_255_ap_return),
    .grp_modp_montymul_fu_255_p_ready(grp_modp_montymul_fu_255_ap_ready),
    .grp_modp_montymul_fu_265_p_din1(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din1),
    .grp_modp_montymul_fu_265_p_din2(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din2),
    .grp_modp_montymul_fu_265_p_din3(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din3),
    .grp_modp_montymul_fu_265_p_din4(grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din4),
    .grp_modp_montymul_fu_265_p_dout0(grp_modp_montymul_fu_265_ap_return),
    .grp_modp_montymul_fu_265_p_ready(grp_modp_montymul_fu_265_ap_ready)
);

keygen_modp_montymul grp_modp_montymul_fu_255(
    .ap_ready(grp_modp_montymul_fu_255_ap_ready),
    .a(grp_modp_montymul_fu_255_a),
    .b(grp_modp_montymul_fu_255_b),
    .p(grp_modp_montymul_fu_255_p),
    .p0i(grp_modp_montymul_fu_255_p0i),
    .ap_return(grp_modp_montymul_fu_255_ap_return)
);

keygen_modp_montymul grp_modp_montymul_fu_265(
    .ap_ready(grp_modp_montymul_fu_265_ap_ready),
    .a(grp_modp_montymul_fu_265_a),
    .b(grp_modp_montymul_fu_265_b),
    .p(grp_modp_montymul_fu_265_p),
    .p0i(grp_modp_montymul_fu_265_p0i),
    .ap_return(grp_modp_montymul_fu_265_ap_return)
);

keygen_modp_NTT2_ext_1 grp_modp_NTT2_ext_1_fu_281(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_modp_NTT2_ext_1_fu_281_ap_start),
    .ap_done(grp_modp_NTT2_ext_1_fu_281_ap_done),
    .ap_idle(grp_modp_NTT2_ext_1_fu_281_ap_idle),
    .ap_ready(grp_modp_NTT2_ext_1_fu_281_ap_ready),
    .vla18_address0(grp_modp_NTT2_ext_1_fu_281_vla18_address0),
    .vla18_ce0(grp_modp_NTT2_ext_1_fu_281_vla18_ce0),
    .vla18_we0(grp_modp_NTT2_ext_1_fu_281_vla18_we0),
    .vla18_d0(grp_modp_NTT2_ext_1_fu_281_vla18_d0),
    .vla18_q0(vla18_q0),
    .vla18_address1(grp_modp_NTT2_ext_1_fu_281_vla18_address1),
    .vla18_ce1(grp_modp_NTT2_ext_1_fu_281_vla18_ce1),
    .vla18_we1(grp_modp_NTT2_ext_1_fu_281_vla18_we1),
    .vla18_d1(grp_modp_NTT2_ext_1_fu_281_vla18_d1),
    .vla18_q1(vla18_q1),
    .a(grp_modp_NTT2_ext_1_fu_281_a),
    .stride(8'd1),
    .gm(gm_reg_865),
    .logn(32'd10),
    .p(25'd33544193),
    .p0i(31'd2042615807)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_make_fg_step_1_fu_234_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln3030_fu_480_p2 == 1'd0))) begin
            grp_make_fg_step_1_fu_234_ap_start_reg <= 1'b1;
        end else if ((grp_make_fg_step_1_fu_234_ap_ready == 1'b1)) begin
            grp_make_fg_step_1_fu_234_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_modp_NTT2_ext_1_fu_281_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state13) | ((1'b1 == ap_CS_fsm_state9) & (icmp_ln962_fu_615_p2 == 1'd1)))) begin
            grp_modp_NTT2_ext_1_fu_281_ap_start_reg <= 1'b1;
        end else if ((grp_modp_NTT2_ext_1_fu_281_ap_ready == 1'b1)) begin
            grp_modp_NTT2_ext_1_fu_281_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == and_ln3013_fu_352_p2) & (icmp_ln3008_fu_326_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        d_10_fu_124 <= 32'd10239;
    end else if (((1'd0 == and_ln3013_fu_352_p2) & (icmp_ln3008_fu_326_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        d_10_fu_124 <= 32'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln3030_fu_480_p2 == 1'd0))) begin
        d_10_fu_124 <= d_11_fu_485_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        d_10_fu_124 <= z_128_reg_834;
    end
end

always @ (posedge ap_clk) begin
    if (((1'd1 == and_ln3013_fu_352_p2) & (icmp_ln3008_fu_326_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_fu_128 <= 6'd30;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0))) begin
        i_fu_128 <= i_17_fu_572_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        u_07_fu_120 <= 11'd0;
    end else if (((icmp_ln3008_fu_326_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        u_07_fu_120 <= u_212_fu_332_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        u_134_fu_132 <= 11'd0;
    end else if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln962_fu_615_p2 == 1'd0))) begin
        u_134_fu_132 <= u_214_fu_621_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        x1_fu_136 <= 32'd10239;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        x1_fu_136 <= grp_modp_montymul_fu_255_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        x2_fu_140 <= 32'd10239;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        x2_fu_140 <= grp_modp_montymul_fu_255_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln3008_fu_326_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        and_ln3013_reg_778 <= and_ln3013_fu_352_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        empty_reg_746 <= empty_fu_302_p1;
        gt_reg_754 <= gt_fu_306_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        gm_reg_865 <= gm_fu_583_p2;
        ig_reg_860 <= grp_modp_montymul_fu_265_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln3030_fu_480_p2 == 1'd0))) begin
        icmp_ln3030_1_reg_821 <= icmp_ln3030_1_fu_498_p2;
        or_ln3030_reg_826 <= or_ln3030_fu_510_p2;
        sub_ln3029_reg_816 <= sub_ln3029_fu_491_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        lshr_ln84_reg_803 <= {{add_ln3010_1_fu_456_p2[14:2]}};
        w_68_reg_798 <= w_68_fu_450_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        lshr_ln86_reg_879 <= {{add_ln968_fu_687_p2[14:2]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln3008_fu_326_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        trunc_ln3009_reg_768 <= trunc_ln3009_fu_338_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        trunc_ln3030_reg_808 <= trunc_ln3030_fu_475_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0))) begin
        z_128_reg_834 <= z_128_fu_566_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        REV10_address0 = zext_ln962_fu_610_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        REV10_address0 = 10'd0;
    end else begin
        REV10_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        REV10_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        REV10_ce0 = 1'b0;
    end else begin
        REV10_ce0 = 1'b0;
    end
end

assign ap_ST_fsm_state10_blk = 1'b0;

assign ap_ST_fsm_state11_blk = 1'b0;

always @ (*) begin
    if ((grp_modp_NTT2_ext_1_fu_281_ap_done == 1'b0)) begin
        ap_ST_fsm_state12_blk = 1'b1;
    end else begin
        ap_ST_fsm_state12_blk = 1'b0;
    end
end

assign ap_ST_fsm_state13_blk = 1'b0;

always @ (*) begin
    if ((1'b1 == ap_block_state14_on_subcall_done)) begin
        ap_ST_fsm_state14_blk = 1'b1;
    end else begin
        ap_ST_fsm_state14_blk = 1'b0;
    end
end

always @ (*) begin
    if ((ap_start == 1'b0)) begin
        ap_ST_fsm_state1_blk = 1'b1;
    end else begin
        ap_ST_fsm_state1_blk = 1'b0;
    end
end

assign ap_ST_fsm_state2_blk = 1'b0;

assign ap_ST_fsm_state3_blk = 1'b0;

assign ap_ST_fsm_state4_blk = 1'b0;

assign ap_ST_fsm_state5_blk = 1'b0;

always @ (*) begin
    if ((grp_make_fg_step_1_fu_234_ap_done == 1'b0)) begin
        ap_ST_fsm_state6_blk = 1'b1;
    end else begin
        ap_ST_fsm_state6_blk = 1'b0;
    end
end

assign ap_ST_fsm_state7_blk = 1'b0;

assign ap_ST_fsm_state8_blk = 1'b0;

assign ap_ST_fsm_state9_blk = 1'b0;

always @ (*) begin
    if ((((1'b0 == ap_block_state14_on_subcall_done) & (1'b1 == ap_CS_fsm_state14)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_state14_on_subcall_done) & (1'b1 == ap_CS_fsm_state14))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        f_ce0 = 1'b1;
    end else begin
        f_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        g_ce0 = 1'b1;
    end else begin
        g_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14))) begin
        grp_modp_NTT2_ext_1_fu_281_a = gt_reg_754;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_modp_NTT2_ext_1_fu_281_a = empty_reg_746;
    end else begin
        grp_modp_NTT2_ext_1_fu_281_a = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_255_a = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_modp_montymul_fu_255_a = x2_fu_140;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_modp_montymul_fu_255_a = x1_fu_136;
    end else if ((((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1)) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0)))) begin
        grp_modp_montymul_fu_255_a = d_10_fu_124;
    end else begin
        grp_modp_montymul_fu_255_a = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_255_b = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din2;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_modp_montymul_fu_255_b = ig_reg_860;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_modp_montymul_fu_255_b = 32'd1968792473;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        grp_modp_montymul_fu_255_b = 32'd1;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0))) begin
        grp_modp_montymul_fu_255_b = d_10_fu_124;
    end else begin
        grp_modp_montymul_fu_255_b = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_255_p = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din3;
    end else if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1)) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0)))) begin
        grp_modp_montymul_fu_255_p = 32'd2147473409;
    end else begin
        grp_modp_montymul_fu_255_p = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_255_p0i = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_255_p_din4;
    end else if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1)) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0)))) begin
        grp_modp_montymul_fu_255_p0i = 32'd2042615807;
    end else begin
        grp_modp_montymul_fu_255_p0i = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_265_a = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din1;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        grp_modp_montymul_fu_265_a = 32'd104837121;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0))) begin
        grp_modp_montymul_fu_265_a = grp_modp_montymul_fu_255_ap_return;
    end else begin
        grp_modp_montymul_fu_265_a = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_265_b = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din2;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
        grp_modp_montymul_fu_265_b = grp_modp_montymul_fu_255_ap_return;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0))) begin
        grp_modp_montymul_fu_265_b = 32'd1968792473;
    end else begin
        grp_modp_montymul_fu_265_b = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_265_p = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din3;
    end else if ((((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1)) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0)))) begin
        grp_modp_montymul_fu_265_p = 32'd2147473409;
    end else begin
        grp_modp_montymul_fu_265_p = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_modp_montymul_fu_265_p0i = grp_make_fg_step_1_fu_234_grp_modp_montymul_fu_265_p_din4;
    end else if ((((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1)) | ((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd0)))) begin
        grp_modp_montymul_fu_265_p0i = 32'd2042615807;
    end else begin
        grp_modp_montymul_fu_265_p0i = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        vla18_address0 = zext_ln968_3_fu_712_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_address0 = zext_ln967_3_fu_664_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        vla18_address0 = zext_ln3010_fu_471_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        vla18_address0 = zext_ln3009_1_fu_425_p1;
    end else if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_address0 = grp_modp_NTT2_ext_1_fu_281_vla18_address0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_address0 = grp_make_fg_step_1_fu_234_vla18_address0;
    end else begin
        vla18_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_address1 = grp_modp_NTT2_ext_1_fu_281_vla18_address1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_address1 = grp_make_fg_step_1_fu_234_vla18_address1;
    end else begin
        vla18_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state3))) begin
        vla18_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_ce0 = grp_modp_NTT2_ext_1_fu_281_vla18_ce0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_ce0 = grp_make_fg_step_1_fu_234_vla18_ce0;
    end else begin
        vla18_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_ce1 = grp_modp_NTT2_ext_1_fu_281_vla18_ce1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_ce1 = grp_make_fg_step_1_fu_234_vla18_ce1;
    end else begin
        vla18_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        vla18_d0 = x2_fu_140;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_d0 = x1_fu_136;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        vla18_d0 = w_68_reg_798;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        vla18_d0 = w_66_fu_392_p2;
    end else if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_d0 = grp_modp_NTT2_ext_1_fu_281_vla18_d0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_d0 = grp_make_fg_step_1_fu_234_vla18_d0;
    end else begin
        vla18_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_d1 = grp_modp_NTT2_ext_1_fu_281_vla18_d1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_d1 = grp_make_fg_step_1_fu_234_vla18_d1;
    end else begin
        vla18_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state3))) begin
        vla18_we0 = 4'd15;
    end else if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_we0 = grp_modp_NTT2_ext_1_fu_281_vla18_we0;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_we0 = grp_make_fg_step_1_fu_234_vla18_we0;
    end else begin
        vla18_we0 = 4'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((1'd1 == and_ln3013_reg_778) & (1'b1 == ap_CS_fsm_state14)))) begin
        vla18_we1 = grp_modp_NTT2_ext_1_fu_281_vla18_we1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_we1 = grp_make_fg_step_1_fu_234_vla18_we1;
    end else begin
        vla18_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'd1 == and_ln3013_fu_352_p2) & (icmp_ln3008_fu_326_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else if (((1'd0 == and_ln3013_fu_352_p2) & (icmp_ln3008_fu_326_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln3030_fu_480_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (grp_make_fg_step_1_fu_234_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (tmp_204_fu_528_p3 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state9 : begin
            if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln962_fu_615_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state12 : begin
            if (((grp_modp_NTT2_ext_1_fu_281_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            if (((1'b0 == ap_block_state14_on_subcall_done) & (1'b1 == ap_CS_fsm_state14))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln3009_fu_410_p2 = (zext_ln3009_fu_406_p1 + empty_reg_746);

assign add_ln3010_1_fu_456_p2 = (zext_ln3009_fu_406_p1 + gt_reg_754);

assign add_ln967_1_fu_649_p2 = (zext_ln967_fu_645_p1 + gm_reg_865);

assign add_ln968_fu_687_p2 = (zext_ln968_fu_683_p1 + empty_reg_746);

assign and_ln3013_fu_352_p2 = (out_ntt_offset & icmp_ln3013_fu_347_p2);

assign and_ln813_fu_560_p2 = (xor_ln813_fu_536_p2 & select_ln813_fu_552_p3);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state14_on_subcall_done = ((1'd1 == and_ln3013_reg_778) & (grp_modp_NTT2_ext_1_fu_281_ap_done == 1'b0));
end

assign d_11_fu_485_p2 = (d_10_fu_124 + 32'd1);

assign empty_fu_302_p1 = data[14:0];

assign f_address0 = zext_ln3008_fu_320_p1;

assign g_address0 = zext_ln3008_fu_320_p1;

assign gm_fu_583_p2 = (empty_reg_746 + 15'd8192);

assign grp_make_fg_step_1_fu_234_ap_start = grp_make_fg_step_1_fu_234_ap_start_reg;

assign grp_modp_NTT2_ext_1_fu_281_ap_start = grp_modp_NTT2_ext_1_fu_281_ap_start_reg;

assign gt_fu_306_p2 = (empty_fu_302_p1 + 15'd4096);

assign i_17_fu_572_p0 = i_fu_128;

assign i_17_fu_572_p2 = ($signed(i_17_fu_572_p0) + $signed(6'd63));

assign icmp_ln3008_fu_326_p2 = ((u_07_fu_120 == 11'd1024) ? 1'b1 : 1'b0);

assign icmp_ln3013_fu_347_p2 = ((depth == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln3030_1_fu_498_p2 = ((d_10_fu_124 != 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln3030_2_fu_505_p2 = ((d_11_fu_485_p2 < depth) ? 1'b1 : 1'b0);

assign icmp_ln3030_fu_480_p2 = ((d_10_fu_124 == depth) ? 1'b1 : 1'b0);

assign icmp_ln962_fu_615_p2 = ((u_134_fu_132 == 11'd1024) ? 1'b1 : 1'b0);

assign lshr_ln813_fu_542_p2 = 32'd2147473407 >> sext_ln808_fu_524_p1;

assign lshr_ln85_fu_654_p4 = {{add_ln967_1_fu_649_p2[14:2]}};

assign lshr_ln_fu_415_p4 = {{add_ln3009_fu_410_p2[14:2]}};

assign or_ln3030_fu_510_p2 = (out_ntt_offset | icmp_ln3030_2_fu_505_p2);

assign or_ln_fu_669_p4 = {{{{1'd1}, {REV10_q0}}}, {2'd0}};

assign select_ln635_18_fu_442_p3 = ((tmp_203_fu_434_p3[0:0] == 1'b1) ? 32'd2147473409 : 32'd0);

assign select_ln635_fu_384_p3 = ((tmp_fu_376_p3[0:0] == 1'b1) ? 32'd2147473409 : 32'd0);

assign select_ln813_fu_552_p3 = ((trunc_ln813_fu_548_p1[0:0] == 1'b1) ? 32'd4294967295 : 32'd0);

assign sext_ln3009_fu_372_p0 = f_q0;

assign sext_ln3009_fu_372_p1 = sext_ln3009_fu_372_p0;

assign sext_ln3010_fu_430_p0 = g_q0;

assign sext_ln3010_fu_430_p1 = sext_ln3010_fu_430_p0;

assign sext_ln808_fu_524_p0 = i_fu_128;

assign sext_ln808_fu_524_p1 = sext_ln808_fu_524_p0;

assign sext_ln968_fu_679_p1 = $signed(or_ln_fu_669_p4);

assign shl_ln95_fu_637_p3 = {{REV10_q0}, {2'd0}};

assign shl_ln_fu_399_p3 = {{trunc_ln3009_reg_768}, {2'd0}};

assign sub_ln3029_fu_491_p2 = (32'd10 - d_10_fu_124);

assign tmp_203_fu_434_p1 = g_q0;

assign tmp_203_fu_434_p3 = tmp_203_fu_434_p1[32'd7];

assign tmp_204_fu_528_p1 = i_fu_128;

assign tmp_204_fu_528_p3 = tmp_204_fu_528_p1[32'd5];

assign tmp_fu_376_p1 = f_q0;

assign tmp_fu_376_p3 = tmp_fu_376_p1[32'd7];

assign trunc_ln3009_fu_338_p1 = u_07_fu_120[9:0];

assign trunc_ln3030_fu_475_p1 = d_10_fu_124[3:0];

assign trunc_ln813_fu_548_p1 = lshr_ln813_fu_542_p2[0:0];

assign u_212_fu_332_p2 = (u_07_fu_120 + 11'd1);

assign u_214_fu_621_p2 = (u_134_fu_132 + 11'd1);

assign w_66_fu_392_p2 = ($signed(select_ln635_fu_384_p3) + $signed(sext_ln3009_fu_372_p1));

assign w_68_fu_450_p2 = ($signed(select_ln635_18_fu_442_p3) + $signed(sext_ln3010_fu_430_p1));

assign xor_ln813_fu_536_p2 = (grp_modp_montymul_fu_265_ap_return ^ grp_modp_montymul_fu_255_ap_return);

assign z_128_fu_566_p2 = (grp_modp_montymul_fu_255_ap_return ^ and_ln813_fu_560_p2);

assign zext_ln3008_fu_320_p1 = u_07_fu_120;

assign zext_ln3009_1_fu_425_p1 = lshr_ln_fu_415_p4;

assign zext_ln3009_fu_406_p1 = shl_ln_fu_399_p3;

assign zext_ln3010_fu_471_p1 = lshr_ln84_reg_803;

assign zext_ln962_fu_610_p1 = u_134_fu_132;

assign zext_ln967_3_fu_664_p1 = lshr_ln85_fu_654_p4;

assign zext_ln967_fu_645_p1 = shl_ln95_fu_637_p3;

assign zext_ln968_3_fu_712_p1 = lshr_ln86_reg_879;

assign zext_ln968_fu_683_p1 = $unsigned(sext_ln968_fu_679_p1);

endmodule //keygen_make_fg_1