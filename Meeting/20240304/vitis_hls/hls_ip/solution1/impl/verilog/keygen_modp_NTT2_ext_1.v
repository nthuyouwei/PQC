// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_modp_NTT2_ext_1 (
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
        gm,
        logn,
        p,
        p0i
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

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
input  [7:0] stride;
input  [14:0] gm;
input  [31:0] logn;
input  [24:0] p;
input  [30:0] p0i;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[12:0] vla18_address0;
reg vla18_ce0;
reg[3:0] vla18_we0;
reg[12:0] vla18_address1;
reg vla18_ce1;
reg[3:0] vla18_we1;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [63:0] stride_cast2_fu_212_p1;
reg   [63:0] stride_cast2_reg_571;
wire   [31:0] p0i_cast_fu_216_p1;
reg   [31:0] p0i_cast_reg_576;
wire   [31:0] p_cast_cast_cast_cast_fu_224_p1;
reg   [31:0] p_cast_cast_cast_cast_reg_581;
wire   [12:0] stride_cast_fu_228_p1;
reg   [12:0] stride_cast_reg_587;
wire   [0:0] icmp_ln1226_fu_232_p2;
reg   [0:0] icmp_ln1226_reg_593;
wire   [63:0] n_fu_242_p2;
reg   [63:0] n_reg_611;
wire   [62:0] ht_fu_266_p4;
reg   [62:0] ht_reg_622;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln1231_fu_261_p2;
wire   [63:0] zext_ln1235_fu_276_p1;
reg   [63:0] zext_ln1235_reg_627;
reg   [12:0] trunc_ln1233_1_reg_632;
wire   [12:0] trunc_ln1241_fu_290_p1;
reg   [12:0] trunc_ln1241_reg_637;
wire   [63:0] u_fu_299_p2;
reg   [63:0] u_reg_645;
wire    ap_CS_fsm_state3;
reg   [12:0] lshr_ln_reg_650;
wire   [0:0] icmp_ln1236_fu_294_p2;
wire  signed [12:0] trunc_ln1236_fu_337_p1;
wire    ap_CS_fsm_state5;
reg   [31:0] s_reg_670;
wire    ap_CS_fsm_state6;
wire  signed [12:0] grp_fu_544_p2;
reg  signed [12:0] mul_ln1242_reg_675;
wire  signed [12:0] grp_fu_549_p2;
reg  signed [12:0] mul_ln1243_reg_680;
wire   [62:0] v_fu_369_p2;
reg   [62:0] v_reg_688;
wire    ap_CS_fsm_state7;
reg   [12:0] vla18_addr_318_reg_693;
wire   [0:0] icmp_ln1244_fu_364_p2;
reg   [12:0] vla18_addr_319_reg_699;
wire   [63:0] add_ln1244_1_fu_445_p2;
reg   [63:0] add_ln1244_1_reg_704;
wire   [63:0] v1_3_fu_450_p2;
wire   [31:0] add_ln697_fu_538_p2;
reg   [31:0] add_ln697_reg_714;
wire    ap_CS_fsm_state8;
wire    y_modp_montymul_fu_200_ap_ready;
wire   [31:0] y_modp_montymul_fu_200_ap_return;
reg   [63:0] v1_reg_155;
reg   [63:0] u_07_reg_167;
reg   [62:0] v_03_reg_178;
wire    ap_CS_fsm_state9;
reg   [63:0] idx_reg_189;
wire   [63:0] zext_ln1241_fu_360_p1;
wire   [63:0] zext_ln1247_fu_425_p1;
wire   [63:0] zext_ln1248_fu_440_p1;
reg   [63:0] t_fu_78;
reg   [63:0] m_fu_82;
wire   [63:0] m_12_fu_346_p2;
wire  signed [24:0] p_cast_cast_cast_fu_220_p0;
wire  signed [30:0] p_cast_cast_cast_fu_220_p1;
wire   [63:0] zext_ln1229_fu_238_p1;
wire   [12:0] trunc_ln1241_1_fu_305_p1;
wire   [12:0] add_ln1241_fu_309_p2;
wire   [14:0] shl_ln_fu_314_p3;
wire   [14:0] add_ln1241_1_fu_322_p2;
wire   [12:0] trunc_ln1244_fu_375_p1;
(* use_dsp48 = "no" *) wire   [12:0] add_ln1238_fu_379_p2;
wire   [14:0] shl_ln68_fu_384_p3;
(* use_dsp48 = "no" *) wire   [12:0] add_ln1238_2_fu_397_p2;
wire   [14:0] shl_ln1238_1_fu_402_p3;
wire   [14:0] r1_fu_392_p2;
wire   [12:0] lshr_ln66_fu_415_p4;
wire   [14:0] r2_fu_410_p2;
wire   [12:0] lshr_ln67_fu_430_p4;
wire   [31:0] sub_ln685_fu_456_p2;
wire   [31:0] add_ln685_fu_461_p2;
wire   [0:0] tmp_fu_467_p3;
wire   [24:0] select_ln685_fu_475_p3;
wire  signed [24:0] and_ln685_fu_483_p1;
wire   [24:0] and_ln685_fu_483_p2;
wire  signed [30:0] sext_ln685_fu_488_p1;
wire   [31:0] zext_ln685_fu_492_p1;
wire   [31:0] sub_ln697_fu_503_p2;
wire   [0:0] tmp_194_fu_509_p3;
wire   [24:0] select_ln697_fu_517_p3;
wire  signed [24:0] and_ln697_fu_525_p1;
wire   [24:0] and_ln697_fu_525_p2;
wire  signed [30:0] sext_ln697_fu_530_p1;
wire   [31:0] zext_ln697_fu_534_p1;
wire   [7:0] grp_fu_544_p1;
wire  signed [12:0] grp_fu_549_p0;
wire   [7:0] grp_fu_549_p1;
reg   [8:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ST_fsm_state3_blk;
wire    ap_ST_fsm_state4_blk;
wire    ap_ST_fsm_state5_blk;
wire    ap_ST_fsm_state6_blk;
wire    ap_ST_fsm_state7_blk;
wire    ap_ST_fsm_state8_blk;
wire    ap_ST_fsm_state9_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

keygen_modp_montymul y_modp_montymul_fu_200(
    .ap_ready(y_modp_montymul_fu_200_ap_ready),
    .a(vla18_q0),
    .b(s_reg_670),
    .p(p_cast_cast_cast_cast_reg_581),
    .p0i(p0i_cast_reg_576),
    .ap_return(y_modp_montymul_fu_200_ap_return)
);

keygen_mul_mul_13s_8ns_13_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 13 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 13 ))
mul_mul_13s_8ns_13_4_1_U187(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(trunc_ln1236_fu_337_p1),
    .din1(grp_fu_544_p1),
    .ce(1'b1),
    .dout(grp_fu_544_p2)
);

keygen_mul_mul_13s_8ns_13_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 13 ),
    .din1_WIDTH( 8 ),
    .dout_WIDTH( 13 ))
mul_mul_13s_8ns_13_4_1_U188(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_549_p0),
    .din1(grp_fu_549_p1),
    .ce(1'b1),
    .dout(grp_fu_549_p2)
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
        idx_reg_189 <= add_ln1244_1_reg_704;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        idx_reg_189 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1226_fu_232_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        m_fu_82 <= 64'd1;
    end else if (((icmp_ln1236_fu_294_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        m_fu_82 <= m_12_fu_346_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1226_fu_232_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        t_fu_78 <= n_fu_242_p2;
    end else if (((icmp_ln1236_fu_294_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        t_fu_78 <= zext_ln1235_reg_627;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1244_fu_364_p2 == 1'd1))) begin
        u_07_reg_167 <= u_reg_645;
    end else if (((icmp_ln1231_fu_261_p2 == 1'd1) & (icmp_ln1226_reg_593 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        u_07_reg_167 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1244_fu_364_p2 == 1'd1))) begin
        v1_reg_155 <= v1_3_fu_450_p2;
    end else if (((icmp_ln1231_fu_261_p2 == 1'd1) & (icmp_ln1226_reg_593 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        v1_reg_155 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        v_03_reg_178 <= v_reg_688;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        v_03_reg_178 <= 63'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1244_fu_364_p2 == 1'd0))) begin
        add_ln1244_1_reg_704 <= add_ln1244_1_fu_445_p2;
        vla18_addr_318_reg_693 <= zext_ln1247_fu_425_p1;
        vla18_addr_319_reg_699 <= zext_ln1248_fu_440_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        add_ln697_reg_714 <= add_ln697_fu_538_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1231_fu_261_p2 == 1'd1) & (icmp_ln1226_reg_593 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        ht_reg_622 <= {{t_fu_78[63:1]}};
        trunc_ln1233_1_reg_632 <= {{t_fu_78[13:1]}};
        trunc_ln1241_reg_637 <= trunc_ln1241_fu_290_p1;
        zext_ln1235_reg_627[62 : 0] <= zext_ln1235_fu_276_p1[62 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state1)) begin
        icmp_ln1226_reg_593 <= icmp_ln1226_fu_232_p2;
        p0i_cast_reg_576[30 : 0] <= p0i_cast_fu_216_p1[30 : 0];
        p_cast_cast_cast_cast_reg_581[30 : 0] <= p_cast_cast_cast_cast_fu_224_p1[30 : 0];
        stride_cast2_reg_571[7 : 0] <= stride_cast2_fu_212_p1[7 : 0];
        stride_cast_reg_587[7 : 0] <= stride_cast_fu_228_p1[7 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1236_fu_294_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        lshr_ln_reg_650 <= {{add_ln1241_1_fu_322_p2[14:2]}};
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        mul_ln1242_reg_675 <= grp_fu_544_p2;
        mul_ln1243_reg_680 <= grp_fu_549_p2;
        s_reg_670 <= vla18_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln1226_fu_232_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        n_reg_611 <= n_fu_242_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        u_reg_645 <= u_fu_299_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        v_reg_688 <= v_fu_369_p2;
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

assign ap_ST_fsm_state6_blk = 1'b0;

assign ap_ST_fsm_state7_blk = 1'b0;

assign ap_ST_fsm_state8_blk = 1'b0;

assign ap_ST_fsm_state9_blk = 1'b0;

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state2) & ((icmp_ln1231_fu_261_p2 == 1'd0) | (icmp_ln1226_reg_593 == 1'd1))) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)))) begin
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
    if (((1'b1 == ap_CS_fsm_state2) & ((icmp_ln1231_fu_261_p2 == 1'd0) | (icmp_ln1226_reg_593 == 1'd1)))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        vla18_address0 = vla18_addr_319_reg_699;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_address0 = zext_ln1248_fu_440_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        vla18_address0 = zext_ln1241_fu_360_p1;
    end else begin
        vla18_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        vla18_address1 = vla18_addr_318_reg_693;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        vla18_address1 = zext_ln1247_fu_425_p1;
    end else begin
        vla18_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state5))) begin
        vla18_ce0 = 1'b1;
    end else begin
        vla18_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        vla18_ce1 = 1'b1;
    end else begin
        vla18_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
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
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & ((icmp_ln1231_fu_261_p2 == 1'd0) | (icmp_ln1226_reg_593 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln1236_fu_294_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
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
            if (((1'b1 == ap_CS_fsm_state7) & (icmp_ln1244_fu_364_p2 == 1'd1))) begin
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
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln1238_2_fu_397_p2 = ($signed(trunc_ln1244_fu_375_p1) + $signed(mul_ln1243_reg_680));

assign add_ln1238_fu_379_p2 = ($signed(trunc_ln1244_fu_375_p1) + $signed(mul_ln1242_reg_675));

assign add_ln1241_1_fu_322_p2 = (shl_ln_fu_314_p3 + gm);

assign add_ln1241_fu_309_p2 = (trunc_ln1241_1_fu_305_p1 + trunc_ln1241_reg_637);

assign add_ln1244_1_fu_445_p2 = (idx_reg_189 + stride_cast2_reg_571);

assign add_ln685_fu_461_p2 = (y_modp_montymul_fu_200_ap_return + sub_ln685_fu_456_p2);

assign add_ln697_fu_538_p2 = (zext_ln697_fu_534_p1 + sub_ln697_fu_503_p2);

assign and_ln685_fu_483_p1 = p;

assign and_ln685_fu_483_p2 = (select_ln685_fu_475_p3 & and_ln685_fu_483_p1);

assign and_ln697_fu_525_p1 = p;

assign and_ln697_fu_525_p2 = (select_ln697_fu_517_p3 & and_ln697_fu_525_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign grp_fu_544_p1 = stride_cast_reg_587;

assign grp_fu_549_p0 = ($signed(trunc_ln1236_fu_337_p1) + $signed(trunc_ln1233_1_reg_632));

assign grp_fu_549_p1 = stride_cast_reg_587;

assign ht_fu_266_p4 = {{t_fu_78[63:1]}};

assign icmp_ln1226_fu_232_p2 = ((logn == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln1231_fu_261_p2 = ((m_fu_82 < n_reg_611) ? 1'b1 : 1'b0);

assign icmp_ln1236_fu_294_p2 = ((u_07_reg_167 == m_fu_82) ? 1'b1 : 1'b0);

assign icmp_ln1244_fu_364_p2 = ((v_03_reg_178 == ht_reg_622) ? 1'b1 : 1'b0);

assign lshr_ln66_fu_415_p4 = {{r1_fu_392_p2[14:2]}};

assign lshr_ln67_fu_430_p4 = {{r2_fu_410_p2[14:2]}};

assign m_12_fu_346_p2 = m_fu_82 << 64'd1;

assign n_fu_242_p2 = 64'd1 << zext_ln1229_fu_238_p1;

assign p0i_cast_fu_216_p1 = p0i;

assign p_cast_cast_cast_cast_fu_224_p1 = $unsigned(p_cast_cast_cast_fu_220_p1);

assign p_cast_cast_cast_fu_220_p0 = p;

assign p_cast_cast_cast_fu_220_p1 = p_cast_cast_cast_fu_220_p0;

assign r1_fu_392_p2 = (shl_ln68_fu_384_p3 + a);

assign r2_fu_410_p2 = (shl_ln1238_1_fu_402_p3 + a);

assign select_ln685_fu_475_p3 = ((tmp_fu_467_p3[0:0] == 1'b1) ? 25'd33554431 : 25'd0);

assign select_ln697_fu_517_p3 = ((tmp_194_fu_509_p3[0:0] == 1'b1) ? 25'd33554431 : 25'd0);

assign sext_ln685_fu_488_p1 = $signed(and_ln685_fu_483_p2);

assign sext_ln697_fu_530_p1 = $signed(and_ln697_fu_525_p2);

assign shl_ln1238_1_fu_402_p3 = {{add_ln1238_2_fu_397_p2}, {2'd0}};

assign shl_ln68_fu_384_p3 = {{add_ln1238_fu_379_p2}, {2'd0}};

assign shl_ln_fu_314_p3 = {{add_ln1241_fu_309_p2}, {2'd0}};

assign stride_cast2_fu_212_p1 = stride;

assign stride_cast_fu_228_p1 = stride;

assign sub_ln685_fu_456_p2 = (vla18_q1 - p_cast_cast_cast_cast_reg_581);

assign sub_ln697_fu_503_p2 = (vla18_q1 - y_modp_montymul_fu_200_ap_return);

assign tmp_194_fu_509_p3 = sub_ln697_fu_503_p2[32'd31];

assign tmp_fu_467_p3 = add_ln685_fu_461_p2[32'd31];

assign trunc_ln1236_fu_337_p1 = v1_reg_155[12:0];

assign trunc_ln1241_1_fu_305_p1 = u_07_reg_167[12:0];

assign trunc_ln1241_fu_290_p1 = m_fu_82[12:0];

assign trunc_ln1244_fu_375_p1 = idx_reg_189[12:0];

assign u_fu_299_p2 = (u_07_reg_167 + 64'd1);

assign v1_3_fu_450_p2 = (t_fu_78 + v1_reg_155);

assign v_fu_369_p2 = (v_03_reg_178 + 63'd1);

assign vla18_d0 = add_ln697_reg_714;

assign vla18_d1 = (zext_ln685_fu_492_p1 + add_ln685_fu_461_p2);

assign zext_ln1229_fu_238_p1 = logn;

assign zext_ln1235_fu_276_p1 = ht_fu_266_p4;

assign zext_ln1241_fu_360_p1 = lshr_ln_reg_650;

assign zext_ln1247_fu_425_p1 = lshr_ln66_fu_415_p4;

assign zext_ln1248_fu_440_p1 = lshr_ln67_fu_430_p4;

assign zext_ln685_fu_492_p1 = $unsigned(sext_ln685_fu_488_p1);

assign zext_ln697_fu_534_p1 = $unsigned(sext_ln697_fu_530_p1);

always @ (posedge ap_clk) begin
    stride_cast2_reg_571[63:8] <= 56'b00000000000000000000000000000000000000000000000000000000;
    p0i_cast_reg_576[31] <= 1'b0;
    p_cast_cast_cast_cast_reg_581[31] <= 1'b0;
    stride_cast_reg_587[12:8] <= 5'b00000;
    zext_ln1235_reg_627[63] <= 1'b0;
end

endmodule //keygen_modp_NTT2_ext_1