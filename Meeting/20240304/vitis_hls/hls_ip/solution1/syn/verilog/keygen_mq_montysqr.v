// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_mq_montysqr (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x,
        ap_return
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
input  [16:0] x;
output  [16:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[16:0] ap_return;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire  signed [31:0] sext_ln430_fu_28_p1;
wire  signed [31:0] grp_fu_79_p2;
reg  signed [31:0] z_reg_107;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state7;
wire  signed [15:0] zext_ln406_fu_35_p0;
wire   [15:0] grp_fu_86_p2;
wire  signed [31:0] trunc_ln_fu_38_p1;
wire   [31:0] grp_fu_93_p3;
wire    ap_CS_fsm_state10;
wire   [15:0] trunc_ln_fu_38_p4;
wire   [16:0] zext_ln396_1_fu_47_p1;
wire   [16:0] z_85_fu_51_p2;
wire   [0:0] tmp_fu_57_p3;
wire   [16:0] select_ln422_fu_65_p3;
wire  signed [16:0] grp_fu_79_p0;
wire  signed [16:0] grp_fu_79_p1;
wire  signed [15:0] grp_fu_86_p0;
wire   [13:0] grp_fu_86_p1;
wire   [15:0] grp_fu_93_p0;
wire   [13:0] grp_fu_93_p1;
wire    ap_CS_fsm_state9;
wire   [16:0] z_86_fu_73_p2;
reg   [16:0] ap_return_preg;
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
wire   [29:0] grp_fu_93_p00;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 ap_return_preg = 17'd0;
end

keygen_mul_mul_17s_17s_32_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 17 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 32 ))
mul_mul_17s_17s_32_4_1_U122(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_79_p0),
    .din1(grp_fu_79_p1),
    .ce(1'b1),
    .dout(grp_fu_79_p2)
);

keygen_mul_mul_16s_14ns_16_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 14 ),
    .dout_WIDTH( 16 ))
mul_mul_16s_14ns_16_4_1_U123(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_86_p0),
    .din1(grp_fu_86_p1),
    .ce(1'b1),
    .dout(grp_fu_86_p2)
);

keygen_mac_muladd_16ns_14ns_32s_32_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 14 ),
    .din2_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mac_muladd_16ns_14ns_32s_32_4_1_U124(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_93_p0),
    .din1(grp_fu_93_p1),
    .din2(z_reg_107),
    .ce(1'b1),
    .dout(grp_fu_93_p3)
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
        ap_return_preg <= 17'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state10)) begin
            ap_return_preg <= z_86_fu_73_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        z_reg_107 <= grp_fu_79_p2;
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
    if (((1'b1 == ap_CS_fsm_state10) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b0)))) begin
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
    if ((1'b1 == ap_CS_fsm_state10)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        ap_return = z_86_fu_73_p2;
    end else begin
        ap_return = ap_return_preg;
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
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
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign grp_fu_79_p0 = sext_ln430_fu_28_p1;

assign grp_fu_79_p1 = sext_ln430_fu_28_p1;

assign grp_fu_86_p0 = grp_fu_79_p2[15:0];

assign grp_fu_86_p1 = 16'd12287;

assign grp_fu_93_p0 = grp_fu_93_p00;

assign grp_fu_93_p00 = $unsigned(zext_ln406_fu_35_p0);

assign grp_fu_93_p1 = 30'd12289;

assign select_ln422_fu_65_p3 = ((tmp_fu_57_p3[0:0] == 1'b1) ? 17'd12289 : 17'd0);

assign sext_ln430_fu_28_p1 = $signed(x);

assign tmp_fu_57_p3 = z_85_fu_51_p2[32'd16];

assign trunc_ln_fu_38_p1 = grp_fu_93_p3;

assign trunc_ln_fu_38_p4 = {{trunc_ln_fu_38_p1[31:16]}};

assign z_85_fu_51_p2 = ($signed(zext_ln396_1_fu_47_p1) + $signed(17'd118783));

assign z_86_fu_73_p2 = (select_ln422_fu_65_p3 + z_85_fu_51_p2);

assign zext_ln396_1_fu_47_p1 = trunc_ln_fu_38_p4;

assign zext_ln406_fu_35_p0 = grp_fu_86_p2;

endmodule //keygen_mq_montysqr