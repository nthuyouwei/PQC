// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_modp_iNTT2_ext_1 (
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
        a,
        stride,
        igm,
        logn,
        p,
        p0i
);

parameter    ap_ST_fsm_state1 = 11'd1;
parameter    ap_ST_fsm_state2 = 11'd2;
parameter    ap_ST_fsm_state3 = 11'd4;
parameter    ap_ST_fsm_state4 = 11'd8;
parameter    ap_ST_fsm_state5 = 11'd16;
parameter    ap_ST_fsm_state6 = 11'd32;
parameter    ap_ST_fsm_state7 = 11'd64;
parameter    ap_ST_fsm_state8 = 11'd128;
parameter    ap_ST_fsm_state9 = 11'd256;
parameter    ap_ST_fsm_state10 = 11'd512;
parameter    ap_ST_fsm_state11 = 11'd1024;

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
input  [14:0] a;
input  [8:0] stride;
input  [14:0] igm;
input  [31:0] logn;
input  [24:0] p;
input  [30:0] p0i;

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

(* fsm_encoding = "none" *) reg   [10:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] p_cast2_cast_cast_cast_fu_231_p1;
reg   [31:0] p_cast2_cast_cast_cast_reg_880;
wire   [63:0] stride_cast1_fu_235_p1;
reg   [63:0] stride_cast1_reg_887;
wire   [12:0] stride_cast_fu_239_p1;
reg   [12:0] stride_cast_reg_893;
wire   [0:0] icmp_ln1334_fu_243_p2;
reg   [0:0] icmp_ln1334_reg_899;
wire   [63:0] n_fu_253_p2;
reg   [63:0] n_reg_917;
wire   [61:0] zext_ln1339_fu_259_p1;
reg   [61:0] zext_ln1339_reg_922;
wire   [62:0] hm_fu_292_p4;
reg   [62:0] hm_reg_931;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln1339_fu_286_p2;
wire   [63:0] zext_ln1343_fu_302_p1;
reg   [63:0] zext_ln1343_reg_936;
wire   [63:0] dt_fu_306_p2;
reg   [63:0] dt_reg_941;
reg   [12:0] trunc_ln_reg_947;
wire   [62:0] zext_ln1373_fu_333_p1;
reg   [62:0] zext_ln1373_reg_966;
wire   [62:0] u_fu_352_p2;
reg   [62:0] u_reg_974;
wire    ap_CS_fsm_state3;
reg   [12:0] lshr_ln_reg_979;
wire   [0:0] icmp_ln1345_fu_347_p2;
wire  signed [12:0] trunc_ln1345_fu_390_p1;
wire    ap_CS_fsm_state5;
wire  signed [12:0] grp_fu_839_p2;
reg  signed [12:0] mul_ln1352_reg_999;
wire    ap_CS_fsm_state6;
wire  signed [12:0] grp_fu_844_p2;
reg  signed [12:0] mul_ln1353_reg_1004;
wire   [62:0] zext_ln1354_fu_416_p1;
reg   [62:0] zext_ln1354_reg_1009;
wire   [63:0] v_fu_426_p2;
reg   [63:0] v_reg_1017;
wire    ap_CS_fsm_state7;
reg   [12:0] vla18_addr_316_reg_1022;
wire   [0:0] icmp_ln1354_fu_420_p2;
reg   [12:0] vla18_addr_317_reg_1028;
wire   [63:0] add_ln1354_2_fu_502_p2;
reg   [63:0] add_ln1354_2_reg_1033;
wire   [63:0] v1_2_fu_507_p2;
wire   [31:0] d_9_fu_681_p2;
reg   [31:0] d_9_reg_1043;
wire    ap_CS_fsm_state8;
reg   [12:0] vla18_addr_315_reg_1051;
wire    ap_CS_fsm_state10;
wire   [0:0] icmp_ln1373_fu_690_p2;
reg   [63:0] v1_reg_179;
reg   [62:0] u_09_reg_191;
reg   [63:0] v_05_reg_202;
wire    ap_CS_fsm_state9;
reg   [63:0] idx18_reg_213;
wire   [63:0] zext_ln1351_fu_412_p1;
wire   [63:0] zext_ln1358_fu_482_p1;
wire   [63:0] zext_ln1359_fu_497_p1;
wire   [63:0] zext_ln1374_fu_731_p1;
reg   [63:0] t_fu_86;
reg   [63:0] m_6_fu_90;
reg   [63:0] idx_fu_94;
wire   [63:0] add_ln1373_2_fu_736_p2;
reg   [63:0] k_02_fu_98;
wire   [63:0] k_16_fu_695_p2;
wire    ap_CS_fsm_state11;
wire   [31:0] d_7_fu_832_p2;
wire  signed [24:0] p_cast2_cast_cast_fu_227_p0;
wire  signed [30:0] p_cast2_cast_cast_fu_227_p1;
wire   [63:0] zext_ln1337_fu_249_p1;
wire   [62:0] tmp_fu_276_p4;
wire   [31:0] sub_ln1372_fu_322_p2;
wire   [31:0] ni_fu_327_p2;
wire   [12:0] trunc_ln1351_fu_358_p1;
wire   [12:0] add_ln1351_fu_362_p2;
wire   [14:0] shl_ln_fu_367_p3;
wire   [14:0] add_ln1351_3_fu_375_p2;
wire   [12:0] trunc_ln1329_2_fu_394_p1;
wire   [12:0] trunc_ln1354_fu_432_p1;
(* use_dsp48 = "no" *) wire   [12:0] add_ln1348_fu_436_p2;
wire   [14:0] shl_ln67_fu_441_p3;
(* use_dsp48 = "no" *) wire   [12:0] add_ln1348_7_fu_454_p2;
wire   [14:0] shl_ln1348_2_fu_459_p3;
wire   [14:0] r1_fu_449_p2;
wire   [12:0] lshr_ln64_fu_472_p4;
wire   [14:0] r2_fu_467_p2;
wire   [12:0] lshr_ln65_fu_487_p4;
wire   [31:0] sub_ln685_fu_512_p2;
wire   [31:0] add_ln685_fu_517_p2;
wire   [0:0] tmp_191_fu_523_p3;
wire   [24:0] select_ln685_fu_531_p3;
wire  signed [24:0] and_ln685_fu_539_p1;
wire   [24:0] and_ln685_fu_539_p2;
wire  signed [30:0] sext_ln685_fu_544_p1;
wire   [31:0] zext_ln685_fu_548_p1;
wire   [31:0] sub_ln697_fu_559_p2;
wire   [0:0] tmp_192_fu_565_p3;
wire   [24:0] select_ln697_fu_573_p3;
wire  signed [24:0] and_ln697_fu_581_p1;
wire   [24:0] and_ln697_fu_581_p2;
wire  signed [30:0] sext_ln697_fu_586_p1;
wire   [31:0] zext_ln697_fu_590_p1;
wire   [31:0] add_ln697_fu_594_p2;
wire   [31:0] z_100_fu_604_p0;
wire   [31:0] z_100_fu_604_p1;
wire   [62:0] z_100_fu_604_p2;
wire  signed [30:0] mul_ln722_4_fu_613_p0;
wire   [30:0] mul_ln722_4_fu_613_p2;
wire   [30:0] w_60_fu_622_p0;
wire   [30:0] w_60_fu_622_p1;
wire   [61:0] w_60_fu_622_p2;
wire   [62:0] zext_ln718_1_fu_627_p1;
wire   [62:0] add_ln723_1_fu_631_p2;
wire   [31:0] trunc_ln723_1_fu_637_p4;
wire   [31:0] d_8_fu_647_p2;
wire   [0:0] tmp_193_fu_652_p3;
wire   [24:0] select_ln724_1_fu_660_p3;
wire  signed [24:0] and_ln724_1_fu_668_p1;
wire   [24:0] and_ln724_1_fu_668_p2;
wire  signed [30:0] sext_ln724_1_fu_673_p1;
wire   [31:0] zext_ln724_1_fu_677_p1;
wire   [12:0] trunc_ln1329_fu_704_p1;
wire   [14:0] shl_ln66_fu_708_p3;
wire   [14:0] r_fu_716_p2;
wire   [12:0] lshr_ln63_fu_721_p4;
wire   [31:0] z_fu_755_p0;
wire   [31:0] z_fu_755_p1;
wire   [62:0] z_fu_755_p2;
wire  signed [30:0] mul_ln722_fu_764_p0;
wire   [30:0] mul_ln722_fu_764_p2;
wire   [30:0] w_fu_773_p0;
wire   [30:0] w_fu_773_p1;
wire   [61:0] w_fu_773_p2;
wire   [62:0] zext_ln718_fu_778_p1;
wire   [62:0] add_ln723_fu_782_p2;
wire   [31:0] trunc_ln15_fu_788_p4;
wire   [31:0] d_fu_798_p2;
wire   [0:0] tmp_190_fu_803_p3;
wire   [24:0] select_ln724_fu_811_p3;
wire  signed [24:0] and_ln724_fu_819_p1;
wire   [24:0] and_ln724_fu_819_p2;
wire  signed [30:0] sext_ln724_fu_824_p1;
wire   [31:0] zext_ln724_fu_828_p1;
wire   [8:0] grp_fu_839_p1;
wire  signed [12:0] grp_fu_844_p0;
wire   [8:0] grp_fu_844_p1;
reg   [10:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
wire    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
wire    ap_ST_fsm_state9_blk;
wire    ap_ST_fsm_state10_blk;
wire    ap_ST_fsm_state11_blk;
wire   [61:0] w_60_fu_622_p00;
wire   [61:0] w_fu_773_p00;
wire   [62:0] z_100_fu_604_p10;
wire   [62:0] z_fu_755_p10;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 11'd1;
end

keygen_mul_32ns_32ns_63_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 63 ))
mul_32ns_32ns_63_1_1_U197(
    .din0(z_100_fu_604_p0),
    .din1(z_100_fu_604_p1),
    .dout(z_100_fu_604_p2)
);

keygen_mul_31s_31s_31_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 31 ),
    .din1_WIDTH( 31 ),
    .dout_WIDTH( 31 ))
mul_31s_31s_31_1_1_U198(
    .din0(mul_ln722_4_fu_613_p0),
    .din1(p0i),
    .dout(mul_ln722_4_fu_613_p2)
);

keygen_mul_31ns_31ns_62_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 31 ),
    .din1_WIDTH( 31 ),
    .dout_WIDTH( 62 ))
mul_31ns_31ns_62_1_1_U199(
    .din0(w_60_fu_622_p0),
    .din1(w_60_fu_622_p1),
    .dout(w_60_fu_622_p2)
);

keygen_mul_32ns_32ns_63_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 63 ))
mul_32ns_32ns_63_1_1_U200(
    .din0(z_fu_755_p0),
    .din1(z_fu_755_p1),
    .dout(z_fu_755_p2)
);

keygen_mul_31s_31s_31_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 31 ),
    .din1_WIDTH( 31 ),
    .dout_WIDTH( 31 ))
mul_31s_31s_31_1_1_U201(
    .din0(mul_ln722_fu_764_p0),
    .din1(p0i),
    .dout(mul_ln722_fu_764_p2)
);

keygen_mul_31ns_31ns_62_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 31 ),
    .din1_WIDTH( 31 ),
    .dout_WIDTH( 62 ))
mul_31ns_31ns_62_1_1_U202(
    .din0(w_fu_773_p0),
    .din1(w_fu_773_p1),
    .dout(w_fu_773_p2)
);

keygen_mul_mul_13s_9ns_13_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 13 ),
    .din1_WIDTH( 9 ),
    .dout_WIDTH( 13 ))
mul_mul_13s_9ns_13_4_1_U203(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(trunc_ln1345_fu_390_p1),
    .din1(grp_fu_839_p1),
    .ce(1'b1),
    .dout(grp_fu_839_p2)
);

keygen_mul_mul_13s_9ns_13_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 13 ),
    .din1_WIDTH( 9 ),
    .dout_WIDTH( 13 ))
mul_mul_13s_9ns_13_4_1_U204(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_844_p0),
    .din1(grp_fu_844_p1),
    .ce(1'b1),
    .dout(grp_fu_844_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        idx18_reg_213 <= add_ln1354_2_reg_1033;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        idx18_reg_213 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1339_fu_286_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        idx_fu_94 <= 64'd0;
    end else if (((icmp_ln1334_reg_899 == 1'd0) & (1'b1 == ap_CS_fsm_state10) & (icmp_ln1373_fu_690_p2 == 1'd0))) begin
        idx_fu_94 <= add_ln1373_2_fu_736_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1339_fu_286_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        k_02_fu_98 <= 64'd0;
    end else if (((icmp_ln1334_reg_899 == 1'd0) & (1'b1 == ap_CS_fsm_state10) & (icmp_ln1373_fu_690_p2 == 1'd0))) begin
        k_02_fu_98 <= k_16_fu_695_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1334_fu_243_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        m_6_fu_90 <= n_fu_253_p2;
    end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1345_fu_347_p2 == 1'd1))) begin
        m_6_fu_90 <= zext_ln1343_reg_936;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1334_fu_243_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        t_fu_86 <= 64'd1;
    end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1345_fu_347_p2 == 1'd1))) begin
        t_fu_86 <= dt_reg_941;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1354_fu_420_p2 == 1'd1))) begin
        u_09_reg_191 <= u_reg_974;
    end else if (((icmp_ln1339_fu_286_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        u_09_reg_191 <= 63'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1354_fu_420_p2 == 1'd1))) begin
        v1_reg_179 <= v1_2_fu_507_p2;
    end else if (((icmp_ln1339_fu_286_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        v1_reg_179 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        v_05_reg_202 <= v_reg_1017;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        v_05_reg_202 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1354_fu_420_p2 == 1'd0))) begin
        add_ln1354_2_reg_1033 <= add_ln1354_2_fu_502_p2;
        vla18_addr_316_reg_1022 <= zext_ln1358_fu_482_p1;
        vla18_addr_317_reg_1028 <= zext_ln1359_fu_497_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        d_9_reg_1043 <= d_9_fu_681_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1339_fu_286_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        dt_reg_941[63 : 1] <= dt_fu_306_p2[63 : 1];
        hm_reg_931 <= {{m_6_fu_90[63:1]}};
        trunc_ln_reg_947 <= {{m_6_fu_90[13:1]}};
        zext_ln1343_reg_936[62 : 0] <= zext_ln1343_fu_302_p1[62 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        icmp_ln1334_reg_899 <= icmp_ln1334_fu_243_p2;
        p_cast2_cast_cast_cast_reg_880[30 : 0] <= p_cast2_cast_cast_cast_fu_231_p1[30 : 0];
        stride_cast1_reg_887[8 : 0] <= stride_cast1_fu_235_p1[8 : 0];
        stride_cast_reg_893[8 : 0] <= stride_cast_fu_239_p1[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1345_fu_347_p2 == 1'd0))) begin
        lshr_ln_reg_979 <= {{add_ln1351_3_fu_375_p2[14:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        mul_ln1352_reg_999 <= grp_fu_839_p2;
        mul_ln1353_reg_1004 <= grp_fu_844_p2;
        zext_ln1354_reg_1009[31 : 0] <= zext_ln1354_fu_416_p1[31 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1334_fu_243_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        n_reg_917 <= n_fu_253_p2;
        zext_ln1339_reg_922[30 : 0] <= zext_ln1339_fu_259_p1[30 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        u_reg_974 <= u_fu_352_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        v_reg_1017 <= v_fu_426_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1334_reg_899 == 1'd0) & (1'b1 == ap_CS_fsm_state10) & (icmp_ln1373_fu_690_p2 == 1'd0))) begin
        vla18_addr_315_reg_1051 <= zext_ln1374_fu_731_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1339_fu_286_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln1373_reg_966[31 : 0] <= zext_ln1373_fu_333_p1[31 : 0];
    end
end

assign ap_ST_fsm_state10_blk = 1'b0;

assign ap_ST_fsm_state11_blk = 1'b0;

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

assign ap_ST_fsm_state6_blk = 1'b0;

assign ap_ST_fsm_state7_blk = 1'b0;

assign ap_ST_fsm_state8_blk = 1'b0;

assign ap_ST_fsm_state9_blk = 1'b0;

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)) | ((1'b1 == ap_CS_fsm_state10) & ((icmp_ln1334_reg_899 == 1'd1) | (icmp_ln1373_fu_690_p2 == 1'd1))))) begin
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
    if (((1'b1 == ap_CS_fsm_state10) & ((icmp_ln1334_reg_899 == 1'd1) | (icmp_ln1373_fu_690_p2 == 1'd1)))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        vla18_address0 = vla18_addr_315_reg_1051;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_address0 = vla18_addr_317_reg_1028;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_address0 = zext_ln1359_fu_497_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        vla18_address0 = zext_ln1351_fu_412_p1;
    end else begin
        vla18_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_address1 = zext_ln1374_fu_731_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        vla18_address1 = vla18_addr_316_reg_1022;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_address1 = zext_ln1358_fu_482_p1;
    end else begin
        vla18_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state5))) begin
        vla18_ce0 = 1'b1;
    end else begin
        vla18_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        vla18_ce1 = 1'b1;
    end else begin
        vla18_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        vla18_d0 = d_7_fu_832_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_d0 = d_9_reg_1043;
    end else begin
        vla18_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state9))) begin
        vla18_we0 = 4'd15;
    end else begin
        vla18_we0 = 4'd0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        vla18_we1 = 4'd15;
    end else begin
        vla18_we1 = 4'd0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((icmp_ln1334_fu_243_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else if (((icmp_ln1334_fu_243_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln1339_fu_286_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1345_fu_347_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1354_fu_420_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state10 : begin
            if (((1'b1 == ap_CS_fsm_state10) & ((icmp_ln1334_reg_899 == 1'd1) | (icmp_ln1373_fu_690_p2 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln1348_7_fu_454_p2 = ($signed(trunc_ln1354_fu_432_p1) + $signed(mul_ln1353_reg_1004));

assign add_ln1348_fu_436_p2 = ($signed(trunc_ln1354_fu_432_p1) + $signed(mul_ln1352_reg_999));

assign add_ln1351_3_fu_375_p2 = (shl_ln_fu_367_p3 + igm);

assign add_ln1351_fu_362_p2 = (trunc_ln1351_fu_358_p1 + trunc_ln_reg_947);

assign add_ln1354_2_fu_502_p2 = (idx18_reg_213 + stride_cast1_reg_887);

assign add_ln1373_2_fu_736_p2 = (idx_fu_94 + stride_cast1_reg_887);

assign add_ln685_fu_517_p2 = (vla18_q0 + sub_ln685_fu_512_p2);

assign add_ln697_fu_594_p2 = (zext_ln697_fu_590_p1 + sub_ln697_fu_559_p2);

assign add_ln723_1_fu_631_p2 = (zext_ln718_1_fu_627_p1 + z_100_fu_604_p2);

assign add_ln723_fu_782_p2 = (zext_ln718_fu_778_p1 + z_fu_755_p2);

assign and_ln685_fu_539_p1 = p;

assign and_ln685_fu_539_p2 = (select_ln685_fu_531_p3 & and_ln685_fu_539_p1);

assign and_ln697_fu_581_p1 = p;

assign and_ln697_fu_581_p2 = (select_ln697_fu_573_p3 & and_ln697_fu_581_p1);

assign and_ln724_1_fu_668_p1 = p;

assign and_ln724_1_fu_668_p2 = (select_ln724_1_fu_660_p3 & and_ln724_1_fu_668_p1);

assign and_ln724_fu_819_p1 = p;

assign and_ln724_fu_819_p2 = (select_ln724_fu_811_p3 & and_ln724_fu_819_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign d_7_fu_832_p2 = (zext_ln724_fu_828_p1 + d_fu_798_p2);

assign d_8_fu_647_p2 = (trunc_ln723_1_fu_637_p4 - p_cast2_cast_cast_cast_reg_880);

assign d_9_fu_681_p2 = (zext_ln724_1_fu_677_p1 + d_8_fu_647_p2);

assign d_fu_798_p2 = (trunc_ln15_fu_788_p4 - p_cast2_cast_cast_cast_reg_880);

assign dt_fu_306_p2 = t_fu_86 << 64'd1;

assign grp_fu_839_p1 = stride_cast_reg_893;

assign grp_fu_844_p0 = ($signed(trunc_ln1345_fu_390_p1) + $signed(trunc_ln1329_2_fu_394_p1));

assign grp_fu_844_p1 = stride_cast_reg_893;

assign hm_fu_292_p4 = {{m_6_fu_90[63:1]}};

assign icmp_ln1334_fu_243_p2 = ((logn == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln1339_fu_286_p2 = ((tmp_fu_276_p4 == 63'd0) ? 1'b1 : 1'b0);

assign icmp_ln1345_fu_347_p2 = ((u_09_reg_191 == hm_reg_931) ? 1'b1 : 1'b0);

assign icmp_ln1354_fu_420_p2 = ((v_05_reg_202 == t_fu_86) ? 1'b1 : 1'b0);

assign icmp_ln1373_fu_690_p2 = ((k_02_fu_98 == n_reg_917) ? 1'b1 : 1'b0);

assign k_16_fu_695_p2 = (k_02_fu_98 + 64'd1);

assign lshr_ln63_fu_721_p4 = {{r_fu_716_p2[14:2]}};

assign lshr_ln64_fu_472_p4 = {{r1_fu_449_p2[14:2]}};

assign lshr_ln65_fu_487_p4 = {{r2_fu_467_p2[14:2]}};

assign mul_ln722_4_fu_613_p0 = z_100_fu_604_p2[30:0];

assign mul_ln722_fu_764_p0 = z_fu_755_p2[30:0];

assign n_fu_253_p2 = 64'd1 << zext_ln1337_fu_249_p1;

assign ni_fu_327_p2 = 32'd1 << sub_ln1372_fu_322_p2;

assign p_cast2_cast_cast_cast_fu_231_p1 = $unsigned(p_cast2_cast_cast_fu_227_p1);

assign p_cast2_cast_cast_fu_227_p0 = p;

assign p_cast2_cast_cast_fu_227_p1 = p_cast2_cast_cast_fu_227_p0;

assign r1_fu_449_p2 = (shl_ln67_fu_441_p3 + a);

assign r2_fu_467_p2 = (shl_ln1348_2_fu_459_p3 + a);

assign r_fu_716_p2 = (shl_ln66_fu_708_p3 + a);

assign select_ln685_fu_531_p3 = ((tmp_191_fu_523_p3[0:0] == 1'b1) ? 25'd33554431 : 25'd0);

assign select_ln697_fu_573_p3 = ((tmp_192_fu_565_p3[0:0] == 1'b1) ? 25'd33554431 : 25'd0);

assign select_ln724_1_fu_660_p3 = ((tmp_193_fu_652_p3[0:0] == 1'b1) ? 25'd33554431 : 25'd0);

assign select_ln724_fu_811_p3 = ((tmp_190_fu_803_p3[0:0] == 1'b1) ? 25'd33554431 : 25'd0);

assign sext_ln685_fu_544_p1 = $signed(and_ln685_fu_539_p2);

assign sext_ln697_fu_586_p1 = $signed(and_ln697_fu_581_p2);

assign sext_ln724_1_fu_673_p1 = $signed(and_ln724_1_fu_668_p2);

assign sext_ln724_fu_824_p1 = $signed(and_ln724_fu_819_p2);

assign shl_ln1348_2_fu_459_p3 = {{add_ln1348_7_fu_454_p2}, {2'd0}};

assign shl_ln66_fu_708_p3 = {{trunc_ln1329_fu_704_p1}, {2'd0}};

assign shl_ln67_fu_441_p3 = {{add_ln1348_fu_436_p2}, {2'd0}};

assign shl_ln_fu_367_p3 = {{add_ln1351_fu_362_p2}, {2'd0}};

assign stride_cast1_fu_235_p1 = stride;

assign stride_cast_fu_239_p1 = stride;

assign sub_ln1372_fu_322_p2 = (32'd31 - logn);

assign sub_ln685_fu_512_p2 = (vla18_q1 - p_cast2_cast_cast_cast_reg_880);

assign sub_ln697_fu_559_p2 = (vla18_q1 - vla18_q0);

assign tmp_190_fu_803_p3 = d_fu_798_p2[32'd31];

assign tmp_191_fu_523_p3 = add_ln685_fu_517_p2[32'd31];

assign tmp_192_fu_565_p3 = sub_ln697_fu_559_p2[32'd31];

assign tmp_193_fu_652_p3 = d_8_fu_647_p2[32'd31];

assign tmp_fu_276_p4 = {{m_6_fu_90[63:1]}};

assign trunc_ln1329_2_fu_394_p1 = t_fu_86[12:0];

assign trunc_ln1329_fu_704_p1 = idx_fu_94[12:0];

assign trunc_ln1345_fu_390_p1 = v1_reg_179[12:0];

assign trunc_ln1351_fu_358_p1 = u_09_reg_191[12:0];

assign trunc_ln1354_fu_432_p1 = idx18_reg_213[12:0];

assign trunc_ln15_fu_788_p4 = {{add_ln723_fu_782_p2[62:31]}};

assign trunc_ln723_1_fu_637_p4 = {{add_ln723_1_fu_631_p2[62:31]}};

assign u_fu_352_p2 = (u_09_reg_191 + 63'd1);

assign v1_2_fu_507_p2 = (dt_reg_941 + v1_reg_179);

assign v_fu_426_p2 = (v_05_reg_202 + 64'd1);

assign vla18_d1 = (zext_ln685_fu_548_p1 + add_ln685_fu_517_p2);

assign w_60_fu_622_p0 = w_60_fu_622_p00;

assign w_60_fu_622_p00 = mul_ln722_4_fu_613_p2;

assign w_60_fu_622_p1 = zext_ln1339_reg_922;

assign w_fu_773_p0 = w_fu_773_p00;

assign w_fu_773_p00 = mul_ln722_fu_764_p2;

assign w_fu_773_p1 = zext_ln1339_reg_922;

assign z_100_fu_604_p0 = zext_ln1354_reg_1009;

assign z_100_fu_604_p1 = z_100_fu_604_p10;

assign z_100_fu_604_p10 = add_ln697_fu_594_p2;

assign z_fu_755_p0 = zext_ln1373_reg_966;

assign z_fu_755_p1 = z_fu_755_p10;

assign z_fu_755_p10 = vla18_q1;

assign zext_ln1337_fu_249_p1 = logn;

assign zext_ln1339_fu_259_p1 = $unsigned(p_cast2_cast_cast_fu_227_p1);

assign zext_ln1343_fu_302_p1 = hm_fu_292_p4;

assign zext_ln1351_fu_412_p1 = lshr_ln_reg_979;

assign zext_ln1354_fu_416_p1 = vla18_q0;

assign zext_ln1358_fu_482_p1 = lshr_ln64_fu_472_p4;

assign zext_ln1359_fu_497_p1 = lshr_ln65_fu_487_p4;

assign zext_ln1373_fu_333_p1 = ni_fu_327_p2;

assign zext_ln1374_fu_731_p1 = lshr_ln63_fu_721_p4;

assign zext_ln685_fu_548_p1 = $unsigned(sext_ln685_fu_544_p1);

assign zext_ln697_fu_590_p1 = $unsigned(sext_ln697_fu_586_p1);

assign zext_ln718_1_fu_627_p1 = w_60_fu_622_p2;

assign zext_ln718_fu_778_p1 = w_fu_773_p2;

assign zext_ln724_1_fu_677_p1 = $unsigned(sext_ln724_1_fu_673_p1);

assign zext_ln724_fu_828_p1 = $unsigned(sext_ln724_fu_824_p1);

always @ (posedge ap_clk) begin
    p_cast2_cast_cast_cast_reg_880[31] <= 1'b0;
    stride_cast1_reg_887[63:9] <= 55'b0000000000000000000000000000000000000000000000000000000;
    stride_cast_reg_893[12:9] <= 4'b0000;
    zext_ln1339_reg_922[61:31] <= 31'b0000000000000000000000000000000;
    zext_ln1343_reg_936[63] <= 1'b0;
    dt_reg_941[0] <= 1'b0;
    zext_ln1373_reg_966[62:32] <= 31'b0000000000000000000000000000000;
    zext_ln1354_reg_1009[62:32] <= 31'b0000000000000000000000000000000;
end

endmodule //keygen_modp_iNTT2_ext_1
