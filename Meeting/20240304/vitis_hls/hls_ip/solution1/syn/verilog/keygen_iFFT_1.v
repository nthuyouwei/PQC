// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_iFFT_1 (
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
        f,
        logn
);

parameter    ap_ST_fsm_state1 = 17'd1;
parameter    ap_ST_fsm_state2 = 17'd2;
parameter    ap_ST_fsm_state3 = 17'd4;
parameter    ap_ST_fsm_state4 = 17'd8;
parameter    ap_ST_fsm_state5 = 17'd16;
parameter    ap_ST_fsm_state6 = 17'd32;
parameter    ap_ST_fsm_state7 = 17'd64;
parameter    ap_ST_fsm_state8 = 17'd128;
parameter    ap_ST_fsm_state9 = 17'd256;
parameter    ap_ST_fsm_state10 = 17'd512;
parameter    ap_ST_fsm_state11 = 17'd1024;
parameter    ap_ST_fsm_state12 = 17'd2048;
parameter    ap_ST_fsm_state13 = 17'd4096;
parameter    ap_ST_fsm_state14 = 17'd8192;
parameter    ap_ST_fsm_state15 = 17'd16384;
parameter    ap_ST_fsm_state16 = 17'd32768;
parameter    ap_ST_fsm_state17 = 17'd65536;

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
input  [14:0] f;
input  [31:0] logn;

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

(* fsm_encoding = "none" *) reg   [16:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [10:0] fpr_gm_tab_address0;
reg    fpr_gm_tab_ce0;
wire   [63:0] fpr_gm_tab_q0;
wire   [10:0] fpr_gm_tab_address1;
reg    fpr_gm_tab_ce1;
wire   [63:0] fpr_gm_tab_q1;
wire   [3:0] fpr_p2_tab_address0;
reg    fpr_p2_tab_ce0;
wire   [63:0] fpr_p2_tab_q0;
wire   [63:0] grp_fu_288_p2;
reg   [63:0] reg_314;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state12;
wire   [63:0] zext_ln1449_fu_320_p1;
reg   [63:0] zext_ln1449_reg_967;
wire   [63:0] n_fu_324_p2;
reg   [63:0] n_reg_972;
wire   [63:0] zext_ln1452_fu_340_p1;
reg   [63:0] zext_ln1452_reg_977;
reg   [11:0] trunc_ln_reg_982;
wire   [63:0] zext_ln1457_fu_404_p1;
reg   [63:0] zext_ln1457_reg_997;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln1453_fu_385_p2;
wire   [63:0] dt_fu_408_p2;
reg   [63:0] dt_reg_1002;
reg   [9:0] trunc_ln17_reg_1009;
wire   [11:0] trunc_ln1474_fu_424_p1;
reg   [11:0] trunc_ln1474_reg_1014;
wire   [0:0] icmp_ln1489_fu_428_p2;
reg   [0:0] icmp_ln1489_reg_1019;
wire   [63:0] i1_1_fu_443_p2;
reg   [63:0] i1_1_reg_1038;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln1459_fu_438_p2;
reg   [63:0] s_re_reg_1053;
wire    ap_CS_fsm_state4;
wire   [63:0] s_im_fu_510_p1;
reg   [63:0] s_im_reg_1059;
reg   [12:0] vla18_addr_349_reg_1068;
wire    ap_CS_fsm_state5;
wire   [0:0] icmp_ln1468_fu_514_p2;
reg   [12:0] vla18_addr_350_reg_1074;
reg   [12:0] trunc_ln1473_2_reg_1079;
reg   [12:0] trunc_ln1474_1_reg_1085;
reg   [12:0] trunc_ln19_reg_1091;
wire   [63:0] j_10_fu_647_p2;
reg   [63:0] j_10_reg_1097;
wire   [63:0] j1_fu_653_p2;
wire   [63:0] add_ln1459_fu_658_p2;
reg   [31:0] vla18_load_229_reg_1112;
wire    ap_CS_fsm_state6;
reg   [31:0] vla18_load_230_reg_1117;
reg   [12:0] vla18_addr_351_reg_1122;
reg   [12:0] vla18_addr_352_reg_1128;
reg   [31:0] vla18_load_231_reg_1133;
wire    ap_CS_fsm_state7;
reg   [31:0] vla18_load_232_reg_1138;
reg   [12:0] vla18_addr_353_reg_1143;
reg   [12:0] vla18_addr_354_reg_1149;
wire   [63:0] x_re_fu_697_p1;
wire    ap_CS_fsm_state8;
wire   [63:0] y_re_fu_711_p1;
reg   [12:0] vla18_addr_355_reg_1166;
reg   [12:0] vla18_addr_356_reg_1172;
wire   [63:0] x_im_fu_737_p1;
wire   [63:0] y_im_fu_751_p1;
wire    ap_CS_fsm_state10;
wire   [63:0] grp_fu_292_p2;
wire    ap_CS_fsm_state11;
wire   [63:0] grp_fu_297_p2;
wire   [63:0] grp_fu_303_p2;
wire   [63:0] grp_fu_308_p2;
reg   [63:0] ni_reg_1215;
wire    ap_CS_fsm_state14;
reg   [12:0] vla18_addr_reg_1223;
wire    ap_CS_fsm_state15;
wire   [0:0] icmp_ln1493_fu_840_p2;
reg   [12:0] vla18_addr_348_reg_1229;
wire   [63:0] bitcast_ln1494_1_fu_907_p1;
wire    ap_CS_fsm_state16;
reg   [63:0] indvars_iv_reg_241;
reg   [63:0] i1_reg_251;
reg   [63:0] j1_6_reg_262;
reg   [63:0] j_03_reg_274;
wire    ap_CS_fsm_state13;
wire   [63:0] zext_ln1466_fu_466_p1;
wire   [63:0] zext_ln1467_fu_477_p1;
wire   [63:0] zext_ln1472_fu_547_p1;
wire   [63:0] zext_ln1472_1_fu_558_p1;
wire   [63:0] zext_ln1473_fu_663_p1;
wire   [63:0] zext_ln1473_1_fu_672_p1;
wire   [63:0] zext_ln1474_fu_677_p1;
wire   [63:0] zext_ln1474_1_fu_686_p1;
wire   [63:0] zext_ln1475_fu_717_p1;
wire   [63:0] zext_ln1475_1_fu_726_p1;
wire   [63:0] zext_ln1494_fu_878_p1;
wire   [63:0] zext_ln1494_1_fu_889_p1;
reg   [63:0] m_07_fu_86;
reg   [63:0] u_08_fu_90;
wire   [63:0] u_fu_482_p2;
reg   [63:0] t_06_fu_94;
reg   [63:0] u_11_fu_98;
wire   [63:0] u_230_fu_845_p2;
wire   [31:0] trunc_ln12_fu_761_p1;
wire   [31:0] trunc_ln13_fu_781_p1;
wire   [31:0] trunc_ln64_fu_801_p1;
wire   [31:0] trunc_ln65_fu_821_p1;
wire    ap_CS_fsm_state17;
wire   [31:0] trunc_ln1494_3_fu_916_p1;
reg   [63:0] grp_fu_284_p0;
reg   [63:0] grp_fu_284_p1;
reg   [63:0] grp_fu_288_p0;
reg   [63:0] grp_fu_288_p1;
reg   [63:0] grp_fu_292_p0;
reg   [63:0] grp_fu_292_p1;
wire   [62:0] hn_fu_330_p4;
wire   [62:0] tmp_211_fu_375_p4;
wire   [62:0] hm_fu_394_p4;
wire   [9:0] trunc_ln1466_fu_449_p1;
wire   [9:0] add_ln1466_fu_453_p2;
wire   [10:0] shl_ln_fu_458_p3;
wire   [10:0] or_ln1467_fu_471_p2;
wire   [63:0] bitcast_ln147_fu_500_p1;
wire   [63:0] xor_ln147_fu_504_p2;
wire   [11:0] trunc_ln1472_fu_520_p1;
wire   [14:0] shl_ln97_fu_524_p3;
wire   [14:0] add_ln1472_fu_532_p2;
wire   [12:0] trunc_ln18_fu_537_p4;
wire   [12:0] add_ln1472_1_fu_552_p2;
wire   [11:0] add_ln1473_fu_563_p2;
wire   [14:0] shl_ln98_fu_568_p3;
wire   [14:0] add_ln1473_1_fu_576_p2;
wire   [11:0] add_ln1474_fu_591_p2;
wire   [14:0] shl_ln99_fu_596_p3;
wire   [14:0] add_ln1474_1_fu_604_p2;
wire   [11:0] add_ln1475_fu_619_p2;
wire   [14:0] shl_ln100_fu_624_p3;
wire   [14:0] add_ln1475_1_fu_632_p2;
wire   [12:0] add_ln1473_2_fu_667_p2;
wire   [12:0] add_ln1474_2_fu_681_p2;
wire   [63:0] tmp_s_fu_691_p3;
wire   [63:0] tmp_87_fu_703_p3;
wire   [12:0] add_ln1475_2_fu_721_p2;
wire   [63:0] tmp_86_fu_731_p3;
wire   [63:0] tmp_88_fu_743_p3;
wire   [63:0] grp_fu_284_p2;
wire   [63:0] bitcast_ln12_fu_757_p1;
wire   [63:0] bitcast_ln13_fu_777_p1;
wire   [63:0] bitcast_ln64_fu_797_p1;
wire   [63:0] bitcast_ln65_fu_817_p1;
wire   [11:0] trunc_ln1494_fu_851_p1;
wire   [14:0] shl_ln96_fu_855_p3;
wire   [14:0] add_ln1494_fu_863_p2;
wire   [12:0] trunc_ln1494_2_fu_868_p4;
wire   [12:0] add_ln1494_1_fu_883_p2;
wire   [63:0] tmp_fu_899_p3;
wire   [63:0] bitcast_ln1494_fu_912_p1;
reg   [1:0] grp_fu_284_opcode;
reg   [1:0] grp_fu_288_opcode;
reg   [16:0] ap_NS_fsm;
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
wire    ap_ST_fsm_state12_blk;
wire    ap_ST_fsm_state13_blk;
wire    ap_ST_fsm_state14_blk;
wire    ap_ST_fsm_state15_blk;
wire    ap_ST_fsm_state16_blk;
wire    ap_ST_fsm_state17_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 17'd1;
end

keygen_FFT_fpr_gm_tab_ROM_AUTO_1R #(
    .DataWidth( 64 ),
    .AddressRange( 2048 ),
    .AddressWidth( 11 ))
fpr_gm_tab_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(fpr_gm_tab_address0),
    .ce0(fpr_gm_tab_ce0),
    .q0(fpr_gm_tab_q0),
    .address1(fpr_gm_tab_address1),
    .ce1(fpr_gm_tab_ce1),
    .q1(fpr_gm_tab_q1)
);

keygen_iFFT_1_fpr_p2_tab_ROM_AUTO_1R #(
    .DataWidth( 64 ),
    .AddressRange( 11 ),
    .AddressWidth( 4 ))
fpr_p2_tab_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(fpr_p2_tab_address0),
    .ce0(fpr_p2_tab_ce0),
    .q0(fpr_p2_tab_q0)
);

keygen_dadddsub_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadddsub_64ns_64ns_64_2_full_dsp_1_U223(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_284_p0),
    .din1(grp_fu_284_p1),
    .opcode(grp_fu_284_opcode),
    .ce(1'b1),
    .dout(grp_fu_284_p2)
);

keygen_dadddsub_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadddsub_64ns_64ns_64_2_full_dsp_1_U224(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_288_p0),
    .din1(grp_fu_288_p1),
    .opcode(grp_fu_288_opcode),
    .ce(1'b1),
    .dout(grp_fu_288_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U225(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_292_p0),
    .din1(grp_fu_292_p1),
    .ce(1'b1),
    .dout(grp_fu_292_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U226(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_288_p2),
    .din1(s_im_reg_1059),
    .ce(1'b1),
    .dout(grp_fu_297_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U227(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_314),
    .din1(s_im_reg_1059),
    .ce(1'b1),
    .dout(grp_fu_303_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U228(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_288_p2),
    .din1(s_re_reg_1053),
    .ce(1'b1),
    .dout(grp_fu_308_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1453_fu_385_p2 == 1'd0))) begin
        i1_reg_251 <= 64'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln1468_fu_514_p2 == 1'd0))) begin
        i1_reg_251 <= i1_1_reg_1038;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1453_fu_385_p2 == 1'd0))) begin
        indvars_iv_reg_241 <= t_06_fu_94;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln1468_fu_514_p2 == 1'd0))) begin
        indvars_iv_reg_241 <= add_ln1459_fu_658_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1453_fu_385_p2 == 1'd0))) begin
        j1_6_reg_262 <= 64'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln1468_fu_514_p2 == 1'd0))) begin
        j1_6_reg_262 <= j1_fu_653_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        j_03_reg_274 <= j_10_reg_1097;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_03_reg_274 <= j1_6_reg_262;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        m_07_fu_86 <= n_fu_324_p2;
    end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1459_fu_438_p2 == 1'd0))) begin
        m_07_fu_86 <= zext_ln1457_reg_997;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        t_06_fu_94 <= 64'd1;
    end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1459_fu_438_p2 == 1'd0))) begin
        t_06_fu_94 <= dt_reg_1002;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        u_08_fu_90 <= zext_ln1449_fu_320_p1;
    end else if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1459_fu_438_p2 == 1'd0))) begin
        u_08_fu_90 <= u_fu_482_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1489_fu_428_p2 == 1'd0) & (icmp_ln1453_fu_385_p2 == 1'd1))) begin
        u_11_fu_98 <= 64'd0;
    end else if (((icmp_ln1493_fu_840_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state15) & (icmp_ln1489_reg_1019 == 1'd0))) begin
        u_11_fu_98 <= u_230_fu_845_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1453_fu_385_p2 == 1'd0))) begin
        dt_reg_1002[63 : 1] <= dt_fu_408_p2[63 : 1];
        trunc_ln1474_reg_1014 <= trunc_ln1474_fu_424_p1;
        trunc_ln17_reg_1009 <= {{m_07_fu_86[10:1]}};
        zext_ln1457_reg_997[62 : 0] <= zext_ln1457_fu_404_p1[62 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i1_1_reg_1038 <= i1_1_fu_443_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1453_fu_385_p2 == 1'd1))) begin
        icmp_ln1489_reg_1019 <= icmp_ln1489_fu_428_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln1468_fu_514_p2 == 1'd1))) begin
        j_10_reg_1097 <= j_10_fu_647_p2;
        trunc_ln1473_2_reg_1079 <= {{add_ln1473_1_fu_576_p2[14:2]}};
        trunc_ln1474_1_reg_1085 <= {{add_ln1474_1_fu_604_p2[14:2]}};
        trunc_ln19_reg_1091 <= {{add_ln1475_1_fu_632_p2[14:2]}};
        vla18_addr_349_reg_1068 <= zext_ln1472_fu_547_p1;
        vla18_addr_350_reg_1074 <= zext_ln1472_1_fu_558_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        n_reg_972 <= n_fu_324_p2;
        trunc_ln_reg_982 <= {{n_fu_324_p2[12:1]}};
        zext_ln1449_reg_967[31 : 0] <= zext_ln1449_fu_320_p1[31 : 0];
        zext_ln1452_reg_977[62 : 0] <= zext_ln1452_fu_340_p1[62 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        ni_reg_1215 <= fpr_p2_tab_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state9))) begin
        reg_314 <= grp_fu_288_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_im_reg_1059 <= s_im_fu_510_p1;
        s_re_reg_1053 <= fpr_gm_tab_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1493_fu_840_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state15) & (icmp_ln1489_reg_1019 == 1'd0))) begin
        vla18_addr_348_reg_1229 <= zext_ln1494_1_fu_889_p1;
        vla18_addr_reg_1223 <= zext_ln1494_fu_878_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_addr_351_reg_1122 <= zext_ln1473_fu_663_p1;
        vla18_addr_352_reg_1128 <= zext_ln1473_1_fu_672_p1;
        vla18_load_229_reg_1112 <= vla18_q1;
        vla18_load_230_reg_1117 <= vla18_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_addr_353_reg_1143 <= zext_ln1474_fu_677_p1;
        vla18_addr_354_reg_1149 <= zext_ln1474_1_fu_686_p1;
        vla18_load_231_reg_1133 <= vla18_q1;
        vla18_load_232_reg_1138 <= vla18_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        vla18_addr_355_reg_1166 <= zext_ln1475_fu_717_p1;
        vla18_addr_356_reg_1172 <= zext_ln1475_1_fu_726_p1;
    end
end

assign ap_ST_fsm_state10_blk = 1'b0;

assign ap_ST_fsm_state11_blk = 1'b0;

assign ap_ST_fsm_state12_blk = 1'b0;

assign ap_ST_fsm_state13_blk = 1'b0;

assign ap_ST_fsm_state14_blk = 1'b0;

assign ap_ST_fsm_state15_blk = 1'b0;

assign ap_ST_fsm_state16_blk = 1'b0;

assign ap_ST_fsm_state17_blk = 1'b0;

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
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state15) & ((icmp_ln1493_fu_840_p2 == 1'd1) | (icmp_ln1489_reg_1019 == 1'd1))))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state15) & ((icmp_ln1493_fu_840_p2 == 1'd1) | (icmp_ln1489_reg_1019 == 1'd1)))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        fpr_gm_tab_ce0 = 1'b1;
    end else begin
        fpr_gm_tab_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        fpr_gm_tab_ce1 = 1'b1;
    end else begin
        fpr_gm_tab_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        fpr_p2_tab_ce0 = 1'b1;
    end else begin
        fpr_p2_tab_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_284_opcode = 2'd1;
    end else if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        grp_fu_284_opcode = 2'd0;
    end else begin
        grp_fu_284_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_284_p0 = grp_fu_292_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        grp_fu_284_p0 = x_im_fu_737_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_284_p0 = x_re_fu_697_p1;
    end else begin
        grp_fu_284_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_284_p1 = grp_fu_297_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        grp_fu_284_p1 = y_im_fu_751_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_284_p1 = y_re_fu_711_p1;
    end else begin
        grp_fu_284_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8))) begin
        grp_fu_288_opcode = 2'd1;
    end else if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_288_opcode = 2'd0;
    end else begin
        grp_fu_288_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_288_p0 = grp_fu_303_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        grp_fu_288_p0 = x_im_fu_737_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_288_p0 = x_re_fu_697_p1;
    end else begin
        grp_fu_288_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        grp_fu_288_p1 = grp_fu_308_p2;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        grp_fu_288_p1 = y_im_fu_751_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_288_p1 = y_re_fu_711_p1;
    end else begin
        grp_fu_288_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        grp_fu_292_p0 = bitcast_ln1494_1_fu_907_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_fu_292_p0 = reg_314;
    end else begin
        grp_fu_292_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        grp_fu_292_p1 = ni_reg_1215;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_fu_292_p1 = s_re_reg_1053;
    end else begin
        grp_fu_292_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        vla18_address0 = vla18_addr_348_reg_1229;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        vla18_address0 = zext_ln1494_1_fu_889_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        vla18_address0 = vla18_addr_356_reg_1172;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        vla18_address0 = vla18_addr_354_reg_1149;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_address0 = vla18_addr_352_reg_1128;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_address0 = vla18_addr_350_reg_1074;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        vla18_address0 = zext_ln1475_1_fu_726_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_address0 = zext_ln1474_1_fu_686_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_address0 = zext_ln1473_1_fu_672_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        vla18_address0 = zext_ln1472_1_fu_558_p1;
    end else begin
        vla18_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        vla18_address1 = vla18_addr_reg_1223;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        vla18_address1 = zext_ln1494_fu_878_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        vla18_address1 = vla18_addr_355_reg_1166;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        vla18_address1 = vla18_addr_353_reg_1143;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_address1 = vla18_addr_351_reg_1122;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_address1 = vla18_addr_349_reg_1068;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        vla18_address1 = zext_ln1475_fu_717_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_address1 = zext_ln1474_fu_677_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        vla18_address1 = zext_ln1473_fu_663_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        vla18_address1 = zext_ln1472_fu_547_p1;
    end else begin
        vla18_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        vla18_ce0 = 1'b1;
    end else begin
        vla18_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5))) begin
        vla18_ce1 = 1'b1;
    end else begin
        vla18_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        vla18_d0 = {{bitcast_ln1494_fu_912_p1[63:32]}};
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        vla18_d0 = {{bitcast_ln65_fu_817_p1[63:32]}};
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        vla18_d0 = {{bitcast_ln64_fu_797_p1[63:32]}};
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_d0 = {{bitcast_ln13_fu_777_p1[63:32]}};
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_d0 = {{bitcast_ln12_fu_757_p1[63:32]}};
    end else begin
        vla18_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        vla18_d1 = trunc_ln1494_3_fu_916_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        vla18_d1 = trunc_ln65_fu_821_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        vla18_d1 = trunc_ln64_fu_801_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        vla18_d1 = trunc_ln13_fu_781_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_d1 = trunc_ln12_fu_761_p1;
    end else begin
        vla18_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        vla18_we0 = 4'd15;
    end else begin
        vla18_we0 = 4'd0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state10))) begin
        vla18_we1 = 4'd15;
    end else begin
        vla18_we1 = 4'd0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1489_fu_428_p2 == 1'd1) & (icmp_ln1453_fu_385_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end else if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln1489_fu_428_p2 == 1'd0) & (icmp_ln1453_fu_385_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state14;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (icmp_ln1459_fu_438_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln1468_fu_514_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            if (((1'b1 == ap_CS_fsm_state15) & ((icmp_ln1493_fu_840_p2 == 1'd1) | (icmp_ln1489_reg_1019 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln1459_fu_658_p2 = (dt_reg_1002 + indvars_iv_reg_241);

assign add_ln1466_fu_453_p2 = (trunc_ln1466_fu_449_p1 + trunc_ln17_reg_1009);

assign add_ln1472_1_fu_552_p2 = (trunc_ln18_fu_537_p4 + 13'd1);

assign add_ln1472_fu_532_p2 = (shl_ln97_fu_524_p3 + f);

assign add_ln1473_1_fu_576_p2 = (shl_ln98_fu_568_p3 + f);

assign add_ln1473_2_fu_667_p2 = (trunc_ln1473_2_reg_1079 + 13'd1);

assign add_ln1473_fu_563_p2 = (trunc_ln1472_fu_520_p1 + trunc_ln_reg_982);

assign add_ln1474_1_fu_604_p2 = (shl_ln99_fu_596_p3 + f);

assign add_ln1474_2_fu_681_p2 = (trunc_ln1474_1_reg_1085 + 13'd1);

assign add_ln1474_fu_591_p2 = (trunc_ln1472_fu_520_p1 + trunc_ln1474_reg_1014);

assign add_ln1475_1_fu_632_p2 = (shl_ln100_fu_624_p3 + f);

assign add_ln1475_2_fu_721_p2 = (trunc_ln19_reg_1091 + 13'd1);

assign add_ln1475_fu_619_p2 = (add_ln1474_fu_591_p2 + trunc_ln_reg_982);

assign add_ln1494_1_fu_883_p2 = (trunc_ln1494_2_fu_868_p4 + 13'd1);

assign add_ln1494_fu_863_p2 = (shl_ln96_fu_855_p3 + f);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign bitcast_ln12_fu_757_p1 = grp_fu_284_p2;

assign bitcast_ln13_fu_777_p1 = grp_fu_284_p2;

assign bitcast_ln147_fu_500_p1 = fpr_gm_tab_q0;

assign bitcast_ln1494_1_fu_907_p1 = tmp_fu_899_p3;

assign bitcast_ln1494_fu_912_p1 = grp_fu_292_p2;

assign bitcast_ln64_fu_797_p1 = grp_fu_284_p2;

assign bitcast_ln65_fu_817_p1 = reg_314;

assign dt_fu_408_p2 = t_06_fu_94 << 64'd1;

assign fpr_gm_tab_address0 = zext_ln1467_fu_477_p1;

assign fpr_gm_tab_address1 = zext_ln1466_fu_466_p1;

assign fpr_p2_tab_address0 = zext_ln1449_reg_967;

assign hm_fu_394_p4 = {{m_07_fu_86[63:1]}};

assign hn_fu_330_p4 = {{n_fu_324_p2[63:1]}};

assign i1_1_fu_443_p2 = (i1_reg_251 + 64'd1);

assign icmp_ln1453_fu_385_p2 = ((tmp_211_fu_375_p4 == 63'd0) ? 1'b1 : 1'b0);

assign icmp_ln1459_fu_438_p2 = ((j1_6_reg_262 < zext_ln1452_reg_977) ? 1'b1 : 1'b0);

assign icmp_ln1468_fu_514_p2 = ((j_03_reg_274 < indvars_iv_reg_241) ? 1'b1 : 1'b0);

assign icmp_ln1489_fu_428_p2 = ((logn == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln1493_fu_840_p2 = ((u_11_fu_98 == n_reg_972) ? 1'b1 : 1'b0);

assign j1_fu_653_p2 = (dt_reg_1002 + j1_6_reg_262);

assign j_10_fu_647_p2 = (j_03_reg_274 + 64'd1);

assign n_fu_324_p2 = 64'd1 << zext_ln1449_fu_320_p1;

assign or_ln1467_fu_471_p2 = (shl_ln_fu_458_p3 | 11'd1);

assign s_im_fu_510_p1 = xor_ln147_fu_504_p2;

assign shl_ln100_fu_624_p3 = {{add_ln1475_fu_619_p2}, {3'd0}};

assign shl_ln96_fu_855_p3 = {{trunc_ln1494_fu_851_p1}, {3'd0}};

assign shl_ln97_fu_524_p3 = {{trunc_ln1472_fu_520_p1}, {3'd0}};

assign shl_ln98_fu_568_p3 = {{add_ln1473_fu_563_p2}, {3'd0}};

assign shl_ln99_fu_596_p3 = {{add_ln1474_fu_591_p2}, {3'd0}};

assign shl_ln_fu_458_p3 = {{add_ln1466_fu_453_p2}, {1'd0}};

assign tmp_211_fu_375_p4 = {{u_08_fu_90[63:1]}};

assign tmp_86_fu_731_p3 = {{vla18_load_232_reg_1138}, {vla18_load_231_reg_1133}};

assign tmp_87_fu_703_p3 = {{vla18_q0}, {vla18_q1}};

assign tmp_88_fu_743_p3 = {{vla18_q0}, {vla18_q1}};

assign tmp_fu_899_p3 = {{vla18_q0}, {vla18_q1}};

assign tmp_s_fu_691_p3 = {{vla18_load_230_reg_1117}, {vla18_load_229_reg_1112}};

assign trunc_ln12_fu_761_p1 = bitcast_ln12_fu_757_p1[31:0];

assign trunc_ln13_fu_781_p1 = bitcast_ln13_fu_777_p1[31:0];

assign trunc_ln1466_fu_449_p1 = i1_reg_251[9:0];

assign trunc_ln1472_fu_520_p1 = j_03_reg_274[11:0];

assign trunc_ln1474_fu_424_p1 = t_06_fu_94[11:0];

assign trunc_ln1494_2_fu_868_p4 = {{add_ln1494_fu_863_p2[14:2]}};

assign trunc_ln1494_3_fu_916_p1 = bitcast_ln1494_fu_912_p1[31:0];

assign trunc_ln1494_fu_851_p1 = u_11_fu_98[11:0];

assign trunc_ln18_fu_537_p4 = {{add_ln1472_fu_532_p2[14:2]}};

assign trunc_ln64_fu_801_p1 = bitcast_ln64_fu_797_p1[31:0];

assign trunc_ln65_fu_821_p1 = bitcast_ln65_fu_817_p1[31:0];

assign u_230_fu_845_p2 = (u_11_fu_98 + 64'd1);

assign u_fu_482_p2 = ($signed(u_08_fu_90) + $signed(64'd18446744073709551615));

assign x_im_fu_737_p1 = tmp_86_fu_731_p3;

assign x_re_fu_697_p1 = tmp_s_fu_691_p3;

assign xor_ln147_fu_504_p2 = (bitcast_ln147_fu_500_p1 ^ 64'd9223372036854775808);

assign y_im_fu_751_p1 = tmp_88_fu_743_p3;

assign y_re_fu_711_p1 = tmp_87_fu_703_p3;

assign zext_ln1449_fu_320_p1 = logn;

assign zext_ln1452_fu_340_p1 = hn_fu_330_p4;

assign zext_ln1457_fu_404_p1 = hm_fu_394_p4;

assign zext_ln1466_fu_466_p1 = shl_ln_fu_458_p3;

assign zext_ln1467_fu_477_p1 = or_ln1467_fu_471_p2;

assign zext_ln1472_1_fu_558_p1 = add_ln1472_1_fu_552_p2;

assign zext_ln1472_fu_547_p1 = trunc_ln18_fu_537_p4;

assign zext_ln1473_1_fu_672_p1 = add_ln1473_2_fu_667_p2;

assign zext_ln1473_fu_663_p1 = trunc_ln1473_2_reg_1079;

assign zext_ln1474_1_fu_686_p1 = add_ln1474_2_fu_681_p2;

assign zext_ln1474_fu_677_p1 = trunc_ln1474_1_reg_1085;

assign zext_ln1475_1_fu_726_p1 = add_ln1475_2_fu_721_p2;

assign zext_ln1475_fu_717_p1 = trunc_ln19_reg_1091;

assign zext_ln1494_1_fu_889_p1 = add_ln1494_1_fu_883_p2;

assign zext_ln1494_fu_878_p1 = trunc_ln1494_2_fu_868_p4;

always @ (posedge ap_clk) begin
    zext_ln1449_reg_967[63:32] <= 32'b00000000000000000000000000000000;
    zext_ln1452_reg_977[63] <= 1'b0;
    zext_ln1457_reg_997[63] <= 1'b0;
    dt_reg_1002[0] <= 1'b0;
end

endmodule //keygen_iFFT_1
