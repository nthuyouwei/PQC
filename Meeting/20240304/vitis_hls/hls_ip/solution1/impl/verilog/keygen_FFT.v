// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_FFT (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        f_address0,
        f_ce0,
        f_we0,
        f_d0,
        f_q0,
        f_address1,
        f_ce1,
        f_we1,
        f_d1,
        f_q1
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] f_address0;
output   f_ce0;
output   f_we0;
output  [63:0] f_d0;
input  [63:0] f_q0;
output  [9:0] f_address1;
output   f_ce1;
output   f_we1;
output  [63:0] f_d1;
input  [63:0] f_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] f_address0;
reg f_ce0;
reg f_we0;
reg[63:0] f_d0;
reg[9:0] f_address1;
reg f_ce1;
reg f_we1;
reg[63:0] f_d1;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [10:0] fpr_gm_tab_address0;
reg    fpr_gm_tab_ce0;
wire   [63:0] fpr_gm_tab_q0;
wire   [10:0] fpr_gm_tab_address1;
reg    fpr_gm_tab_ce1;
wire   [63:0] fpr_gm_tab_q1;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state8;
wire   [9:0] zext_ln957_fu_279_p1;
reg   [9:0] zext_ln957_reg_460;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln953_fu_263_p2;
wire   [63:0] zext_ln955_fu_283_p1;
reg   [62:0] trunc_ln_reg_471;
wire   [9:0] trunc_ln965_fu_297_p1;
reg   [9:0] trunc_ln965_reg_476;
wire   [62:0] i1_4_fu_306_p2;
reg   [62:0] i1_4_reg_484;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln959_fu_301_p2;
reg   [63:0] s_re_reg_499;
wire    ap_CS_fsm_state4;
reg   [63:0] s_im_reg_505;
reg   [9:0] f_addr_reg_514;
wire    ap_CS_fsm_state5;
wire   [0:0] icmp_ln968_fu_370_p2;
wire   [9:0] trunc_ln968_fu_376_p1;
reg   [9:0] trunc_ln968_reg_519;
reg   [9:0] f_addr_12_reg_524;
reg   [9:0] f_addr_13_reg_529;
wire   [63:0] j_14_fu_401_p2;
reg   [63:0] j_14_reg_534;
wire   [63:0] j1_fu_411_p2;
wire   [63:0] add_ln959_fu_417_p2;
reg   [9:0] f_addr_11_reg_549;
wire    ap_CS_fsm_state7;
wire   [63:0] grp_fu_199_p2;
wire   [63:0] grp_fu_205_p2;
wire   [63:0] grp_fu_211_p2;
wire   [63:0] grp_fu_217_p2;
wire   [63:0] grp_fu_173_p2;
wire   [63:0] grp_fu_177_p2;
wire   [63:0] grp_fu_187_p2;
reg   [63:0] fpct_re_6_reg_586;
wire    ap_CS_fsm_state9;
wire   [63:0] grp_fu_193_p2;
reg   [63:0] fpct_im_6_reg_591;
reg   [63:0] indvars_iv_reg_129;
reg   [63:0] j1_13_reg_139;
reg   [62:0] i1_reg_151;
reg   [63:0] j_02_reg_162;
wire    ap_CS_fsm_state10;
wire   [63:0] zext_ln965_fu_329_p1;
wire   [63:0] zext_ln966_fu_340_p1;
wire   [63:0] zext_ln974_fu_385_p1;
wire   [63:0] zext_ln975_fu_396_p1;
wire   [63:0] zext_ln973_fu_428_p1;
reg   [63:0] m_08_fu_52;
wire   [63:0] m_fu_350_p2;
reg   [9:0] t_fu_56;
reg   [3:0] u_010_fu_60;
wire   [3:0] u_fu_345_p2;
reg   [63:0] grp_fu_173_p0;
reg   [63:0] grp_fu_173_p1;
reg   [63:0] grp_fu_177_p0;
reg   [63:0] grp_fu_177_p1;
wire   [8:0] ht_fu_269_p4;
wire   [9:0] trunc_ln965_2_fu_312_p1;
wire   [9:0] add_ln965_fu_316_p2;
wire   [10:0] shl_ln_fu_321_p3;
wire   [10:0] or_ln966_fu_334_p2;
wire   [9:0] add_ln974_fu_380_p2;
wire   [9:0] xor_ln975_fu_390_p2;
wire   [63:0] zext_ln953_fu_407_p1;
wire   [9:0] xor_ln973_fu_423_p2;
reg   [1:0] grp_fu_173_opcode;
reg   [9:0] ap_NS_fsm;
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
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
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

keygen_dadddsub_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadddsub_64ns_64ns_64_2_full_dsp_1_U87(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_173_p0),
    .din1(grp_fu_173_p1),
    .opcode(grp_fu_173_opcode),
    .ce(1'b1),
    .dout(grp_fu_173_p2)
);

keygen_dadd_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadd_64ns_64ns_64_2_full_dsp_1_U88(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_177_p0),
    .din1(grp_fu_177_p1),
    .ce(1'b1),
    .dout(grp_fu_177_p2)
);

keygen_dsub_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dsub_64ns_64ns_64_2_full_dsp_1_U89(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(f_q1),
    .din1(grp_fu_173_p2),
    .ce(1'b1),
    .dout(grp_fu_187_p2)
);

keygen_dsub_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dsub_64ns_64ns_64_2_full_dsp_1_U90(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(f_q0),
    .din1(grp_fu_177_p2),
    .ce(1'b1),
    .dout(grp_fu_193_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U91(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(f_q1),
    .din1(s_re_reg_499),
    .ce(1'b1),
    .dout(grp_fu_199_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U92(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(f_q0),
    .din1(s_im_reg_505),
    .ce(1'b1),
    .dout(grp_fu_205_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U93(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(f_q1),
    .din1(s_im_reg_505),
    .ce(1'b1),
    .dout(grp_fu_211_p2)
);

keygen_dmul_64ns_64ns_64_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dmul_64ns_64ns_64_2_max_dsp_1_U94(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(f_q0),
    .din1(s_re_reg_499),
    .ce(1'b1),
    .dout(grp_fu_217_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln953_fu_263_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i1_reg_151 <= 63'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln968_fu_370_p2 == 1'd0))) begin
        i1_reg_151 <= i1_4_reg_484;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln953_fu_263_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        indvars_iv_reg_129 <= zext_ln955_fu_283_p1;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln968_fu_370_p2 == 1'd0))) begin
        indvars_iv_reg_129 <= add_ln959_fu_417_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln953_fu_263_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j1_13_reg_139 <= 64'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln968_fu_370_p2 == 1'd0))) begin
        j1_13_reg_139 <= j1_fu_411_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        j_02_reg_162 <= j_14_reg_534;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_02_reg_162 <= j1_13_reg_139;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                m_08_fu_52[1] <= 1'b1;
        m_08_fu_52[2] <= 1'b0;
        m_08_fu_52[3] <= 1'b0;
        m_08_fu_52[4] <= 1'b0;
        m_08_fu_52[5] <= 1'b0;
        m_08_fu_52[6] <= 1'b0;
        m_08_fu_52[7] <= 1'b0;
        m_08_fu_52[8] <= 1'b0;
        m_08_fu_52[9] <= 1'b0;
        m_08_fu_52[10] <= 1'b0;
        m_08_fu_52[11] <= 1'b0;
        m_08_fu_52[12] <= 1'b0;
        m_08_fu_52[13] <= 1'b0;
        m_08_fu_52[14] <= 1'b0;
        m_08_fu_52[15] <= 1'b0;
        m_08_fu_52[16] <= 1'b0;
        m_08_fu_52[17] <= 1'b0;
        m_08_fu_52[18] <= 1'b0;
        m_08_fu_52[19] <= 1'b0;
        m_08_fu_52[20] <= 1'b0;
        m_08_fu_52[21] <= 1'b0;
        m_08_fu_52[22] <= 1'b0;
        m_08_fu_52[23] <= 1'b0;
        m_08_fu_52[24] <= 1'b0;
        m_08_fu_52[25] <= 1'b0;
        m_08_fu_52[26] <= 1'b0;
        m_08_fu_52[27] <= 1'b0;
        m_08_fu_52[28] <= 1'b0;
        m_08_fu_52[29] <= 1'b0;
        m_08_fu_52[30] <= 1'b0;
        m_08_fu_52[31] <= 1'b0;
        m_08_fu_52[32] <= 1'b0;
        m_08_fu_52[33] <= 1'b0;
        m_08_fu_52[34] <= 1'b0;
        m_08_fu_52[35] <= 1'b0;
        m_08_fu_52[36] <= 1'b0;
        m_08_fu_52[37] <= 1'b0;
        m_08_fu_52[38] <= 1'b0;
        m_08_fu_52[39] <= 1'b0;
        m_08_fu_52[40] <= 1'b0;
        m_08_fu_52[41] <= 1'b0;
        m_08_fu_52[42] <= 1'b0;
        m_08_fu_52[43] <= 1'b0;
        m_08_fu_52[44] <= 1'b0;
        m_08_fu_52[45] <= 1'b0;
        m_08_fu_52[46] <= 1'b0;
        m_08_fu_52[47] <= 1'b0;
        m_08_fu_52[48] <= 1'b0;
        m_08_fu_52[49] <= 1'b0;
        m_08_fu_52[50] <= 1'b0;
        m_08_fu_52[51] <= 1'b0;
        m_08_fu_52[52] <= 1'b0;
        m_08_fu_52[53] <= 1'b0;
        m_08_fu_52[54] <= 1'b0;
        m_08_fu_52[55] <= 1'b0;
        m_08_fu_52[56] <= 1'b0;
        m_08_fu_52[57] <= 1'b0;
        m_08_fu_52[58] <= 1'b0;
        m_08_fu_52[59] <= 1'b0;
        m_08_fu_52[60] <= 1'b0;
        m_08_fu_52[61] <= 1'b0;
        m_08_fu_52[62] <= 1'b0;
        m_08_fu_52[63] <= 1'b0;
    end else if (((icmp_ln959_fu_301_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                m_08_fu_52[63 : 1] <= m_fu_350_p2[63 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        t_fu_56 <= 10'd512;
    end else if (((icmp_ln959_fu_301_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        t_fu_56 <= zext_ln957_reg_460;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        u_010_fu_60 <= 4'd1;
    end else if (((icmp_ln959_fu_301_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        u_010_fu_60 <= u_fu_345_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        f_addr_11_reg_549 <= zext_ln973_fu_428_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln968_fu_370_p2 == 1'd1))) begin
        f_addr_12_reg_524 <= zext_ln974_fu_385_p1;
        f_addr_13_reg_529 <= zext_ln975_fu_396_p1;
        f_addr_reg_514 <= j_02_reg_162;
        j_14_reg_534 <= j_14_fu_401_p2;
        trunc_ln968_reg_519 <= trunc_ln968_fu_376_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        fpct_im_6_reg_591 <= grp_fu_193_p2;
        fpct_re_6_reg_586 <= grp_fu_187_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i1_4_reg_484 <= i1_4_fu_306_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        s_im_reg_505 <= fpr_gm_tab_q0;
        s_re_reg_499 <= fpr_gm_tab_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln953_fu_263_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        trunc_ln965_reg_476[9 : 1] <= trunc_ln965_fu_297_p1[9 : 1];
        trunc_ln_reg_471 <= {{m_08_fu_52[63:1]}};
        zext_ln957_reg_460[8 : 0] <= zext_ln957_fu_279_p1[8 : 0];
    end
end

assign ap_ST_fsm_state10_blk = 1'b0;

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
    if ((((icmp_ln953_fu_263_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)))) begin
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
    if (((icmp_ln953_fu_263_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        f_address0 = f_addr_13_reg_529;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        f_address0 = f_addr_11_reg_549;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        f_address0 = zext_ln973_fu_428_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        f_address0 = zext_ln975_fu_396_p1;
    end else begin
        f_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        f_address1 = f_addr_12_reg_524;
    end else if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7))) begin
        f_address1 = f_addr_reg_514;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        f_address1 = zext_ln974_fu_385_p1;
    end else begin
        f_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state5))) begin
        f_ce0 = 1'b1;
    end else begin
        f_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state5))) begin
        f_ce1 = 1'b1;
    end else begin
        f_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        f_d0 = fpct_im_6_reg_591;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        f_d0 = grp_fu_177_p2;
    end else begin
        f_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        f_d1 = fpct_re_6_reg_586;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        f_d1 = grp_fu_173_p2;
    end else begin
        f_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        f_we0 = 1'b1;
    end else begin
        f_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state9))) begin
        f_we1 = 1'b1;
    end else begin
        f_we1 = 1'b0;
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
    if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_173_opcode = 2'd1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_173_opcode = 2'd0;
    end else begin
        grp_fu_173_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_173_p0 = f_q1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_173_p0 = grp_fu_199_p2;
    end else begin
        grp_fu_173_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_173_p1 = grp_fu_173_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_173_p1 = grp_fu_205_p2;
    end else begin
        grp_fu_173_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_177_p0 = f_q0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_177_p0 = grp_fu_211_p2;
    end else begin
        grp_fu_177_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_177_p1 = grp_fu_177_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_177_p1 = grp_fu_217_p2;
    end else begin
        grp_fu_177_p1 = 'bx;
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
            if (((icmp_ln953_fu_263_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln959_fu_301_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (icmp_ln968_fu_370_p2 == 1'd0))) begin
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
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln959_fu_417_p2 = (zext_ln953_fu_407_p1 + indvars_iv_reg_129);

assign add_ln965_fu_316_p2 = (trunc_ln965_2_fu_312_p1 + trunc_ln965_reg_476);

assign add_ln974_fu_380_p2 = (trunc_ln968_fu_376_p1 + zext_ln957_reg_460);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign fpr_gm_tab_address0 = zext_ln966_fu_340_p1;

assign fpr_gm_tab_address1 = zext_ln965_fu_329_p1;

assign ht_fu_269_p4 = {{t_fu_56[9:1]}};

assign i1_4_fu_306_p2 = (i1_reg_151 + 63'd1);

assign icmp_ln953_fu_263_p2 = ((u_010_fu_60 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln959_fu_301_p2 = ((i1_reg_151 == trunc_ln_reg_471) ? 1'b1 : 1'b0);

assign icmp_ln968_fu_370_p2 = ((j_02_reg_162 < indvars_iv_reg_129) ? 1'b1 : 1'b0);

assign j1_fu_411_p2 = (zext_ln953_fu_407_p1 + j1_13_reg_139);

assign j_14_fu_401_p2 = (j_02_reg_162 + 64'd1);

assign m_fu_350_p2 = m_08_fu_52 << 64'd1;

assign or_ln966_fu_334_p2 = (shl_ln_fu_321_p3 | 11'd1);

assign shl_ln_fu_321_p3 = {{add_ln965_fu_316_p2}, {1'd0}};

assign trunc_ln965_2_fu_312_p1 = i1_reg_151[9:0];

assign trunc_ln965_fu_297_p1 = m_08_fu_52[9:0];

assign trunc_ln968_fu_376_p1 = j_02_reg_162[9:0];

assign u_fu_345_p2 = (u_010_fu_60 + 4'd1);

assign xor_ln973_fu_423_p2 = (trunc_ln968_reg_519 ^ 10'd512);

assign xor_ln975_fu_390_p2 = (10'd512 ^ add_ln974_fu_380_p2);

assign zext_ln953_fu_407_p1 = t_fu_56;

assign zext_ln955_fu_283_p1 = ht_fu_269_p4;

assign zext_ln957_fu_279_p1 = ht_fu_269_p4;

assign zext_ln965_fu_329_p1 = shl_ln_fu_321_p3;

assign zext_ln966_fu_340_p1 = or_ln966_fu_334_p2;

assign zext_ln973_fu_428_p1 = xor_ln973_fu_423_p2;

assign zext_ln974_fu_385_p1 = add_ln974_fu_380_p2;

assign zext_ln975_fu_396_p1 = xor_ln975_fu_390_p2;

always @ (posedge ap_clk) begin
    zext_ln957_reg_460[9] <= 1'b0;
    trunc_ln965_reg_476[0] <= 1'b0;
    m_08_fu_52[0] <= 1'b0;
end

endmodule //keygen_FFT