// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.1 (64-bit)
// Version: 2022.1
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module keygen_fpr_rint (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x,
        ap_return
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [63:0] x;
output  [63:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[63:0] ap_return;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [63:0] grp_fu_64_p2;
wire    ap_CS_fsm_state2;
wire   [63:0] data_V_fu_82_p1;
wire   [51:0] p_Result_1_fu_104_p1;
wire   [53:0] mantissa_fu_108_p4;
wire   [10:0] xs_exp_V_fu_94_p4;
wire   [11:0] zext_ln515_fu_122_p1;
wire   [11:0] add_ln515_fu_126_p2;
wire   [10:0] sub_ln1512_fu_140_p2;
wire   [0:0] isNeg_fu_132_p3;
wire  signed [11:0] sext_ln1512_fu_146_p1;
wire   [11:0] ush_fu_150_p3;
wire  signed [31:0] sext_ln1488_fu_158_p1;
wire   [168:0] zext_ln15_fu_118_p1;
wire   [168:0] zext_ln1488_fu_162_p1;
wire   [168:0] r_V_fu_166_p2;
wire   [0:0] tmp_fu_178_p3;
wire   [168:0] r_V_1_fu_172_p2;
wire   [63:0] zext_ln818_fu_186_p1;
wire   [63:0] tmp_s_fu_190_p4;
wire   [63:0] val_fu_200_p3;
wire   [63:0] data_V_1_fu_214_p1;
wire   [51:0] p_Result_3_fu_235_p1;
wire   [53:0] mantissa_1_fu_239_p4;
wire   [10:0] xs_exp_V_1_fu_225_p4;
wire   [11:0] zext_ln515_4_fu_253_p1;
wire   [11:0] add_ln515_6_fu_257_p2;
wire   [10:0] sub_ln1512_1_fu_271_p2;
wire   [0:0] isNeg_1_fu_263_p3;
wire  signed [11:0] sext_ln1512_1_fu_277_p1;
wire   [11:0] ush_1_fu_281_p3;
wire  signed [31:0] sext_ln1488_1_fu_289_p1;
wire   [168:0] zext_ln15_1_fu_249_p1;
wire   [168:0] zext_ln1488_1_fu_293_p1;
wire   [168:0] r_V_2_fu_297_p2;
wire   [0:0] tmp_216_fu_309_p3;
wire   [168:0] r_V_3_fu_303_p2;
wire   [63:0] zext_ln818_1_fu_317_p1;
wire   [63:0] tmp_174_fu_321_p4;
wire   [63:0] val_1_fu_331_p3;
wire   [0:0] p_Result_2_fu_217_p3;
wire   [63:0] result_V_4_fu_339_p2;
wire   [63:0] grp_fu_70_p2;
wire   [63:0] data_V_2_fu_353_p1;
wire   [51:0] p_Result_5_fu_375_p1;
wire   [53:0] mantissa_2_fu_379_p4;
wire   [10:0] xs_exp_V_2_fu_365_p4;
wire   [11:0] zext_ln515_5_fu_393_p1;
wire   [11:0] add_ln515_7_fu_397_p2;
wire   [10:0] sub_ln1512_2_fu_411_p2;
wire   [0:0] isNeg_2_fu_403_p3;
wire  signed [11:0] sext_ln1512_2_fu_417_p1;
wire   [11:0] ush_2_fu_421_p3;
wire  signed [31:0] sext_ln1488_2_fu_429_p1;
wire   [168:0] zext_ln15_2_fu_389_p1;
wire   [168:0] zext_ln1488_2_fu_433_p1;
wire   [168:0] r_V_4_fu_437_p2;
wire   [0:0] tmp_220_fu_449_p3;
wire   [168:0] r_V_5_fu_443_p2;
wire   [63:0] zext_ln818_2_fu_457_p1;
wire   [63:0] tmp_175_fu_461_p4;
wire   [63:0] val_2_fu_471_p3;
wire   [0:0] p_Result_4_fu_357_p3;
wire   [63:0] result_V_9_fu_479_p2;
wire   [63:0] result_V_13_fu_485_p3;
wire   [63:0] grp_fu_76_p2;
wire   [63:0] data_V_3_fu_499_p1;
wire   [51:0] p_Result_7_fu_521_p1;
wire   [53:0] mantissa_3_fu_525_p4;
wire   [10:0] xs_exp_V_3_fu_511_p4;
wire   [11:0] zext_ln515_6_fu_539_p1;
wire   [11:0] add_ln515_8_fu_543_p2;
wire   [10:0] sub_ln1512_3_fu_557_p2;
wire   [0:0] isNeg_3_fu_549_p3;
wire  signed [11:0] sext_ln1512_3_fu_563_p1;
wire   [11:0] ush_3_fu_567_p3;
wire  signed [31:0] sext_ln1488_3_fu_575_p1;
wire   [168:0] zext_ln15_3_fu_535_p1;
wire   [168:0] zext_ln1488_3_fu_579_p1;
wire   [168:0] r_V_6_fu_583_p2;
wire   [0:0] tmp_224_fu_595_p3;
wire   [168:0] r_V_7_fu_589_p2;
wire   [63:0] zext_ln818_3_fu_603_p1;
wire   [63:0] tmp_176_fu_607_p4;
wire   [63:0] val_3_fu_617_p3;
wire   [0:0] p_Result_6_fu_503_p3;
wire   [63:0] result_V_10_fu_625_p2;
wire   [63:0] result_V_fu_631_p3;
wire   [63:0] result_V_2_fu_208_p2;
wire   [0:0] p_Result_s_fu_86_p3;
wire   [0:0] tmp_225_fu_645_p3;
wire   [0:0] tmp_226_fu_653_p3;
wire   [63:0] result_V_12_fu_345_p3;
wire   [11:0] ub_fu_669_p4;
wire   [11:0] add_ln99_fu_679_p2;
wire   [12:0] zext_ln99_fu_685_p1;
wire   [12:0] add_ln99_1_fu_689_p2;
wire   [0:0] m_fu_661_p3;
wire   [63:0] rn_fu_639_p2;
wire   [63:0] rp_fu_493_p2;
wire   [0:0] m_14_fu_695_p3;
wire   [63:0] select_ln108_fu_703_p3;
wire   [63:0] select_ln108_1_fu_711_p3;
reg   [63:0] ap_return_preg;
reg   [1:0] ap_NS_fsm;
reg    ap_ST_fsm_state1_blk;
wire    ap_ST_fsm_state2_blk;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
#0 ap_return_preg = 64'd0;
end

keygen_dadd_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadd_64ns_64ns_64_2_full_dsp_1_U233(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(x),
    .din1(64'd13830554455654793216),
    .ce(1'b1),
    .dout(grp_fu_64_p2)
);

keygen_dadd_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadd_64ns_64ns_64_2_full_dsp_1_U234(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(x),
    .din1(64'd4841369599423283200),
    .ce(1'b1),
    .dout(grp_fu_70_p2)
);

keygen_dadd_64ns_64ns_64_2_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dadd_64ns_64ns_64_2_full_dsp_1_U235(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(x),
    .din1(64'd14064741636278059008),
    .ce(1'b1),
    .dout(grp_fu_76_p2)
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
        ap_return_preg <= 64'd0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state2)) begin
            ap_return_preg <= select_ln108_1_fu_711_p3;
        end
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

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_return = select_ln108_1_fu_711_p3;
    end else begin
        ap_return = ap_return_preg;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln515_6_fu_257_p2 = ($signed(zext_ln515_4_fu_253_p1) + $signed(12'd3073));

assign add_ln515_7_fu_397_p2 = ($signed(zext_ln515_5_fu_393_p1) + $signed(12'd3073));

assign add_ln515_8_fu_543_p2 = ($signed(zext_ln515_6_fu_539_p1) + $signed(12'd3073));

assign add_ln515_fu_126_p2 = ($signed(zext_ln515_fu_122_p1) + $signed(12'd3073));

assign add_ln99_1_fu_689_p2 = ($signed(zext_ln99_fu_685_p1) + $signed(13'd8190));

assign add_ln99_fu_679_p2 = (ub_fu_669_p4 + 12'd1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign data_V_1_fu_214_p1 = x;

assign data_V_2_fu_353_p1 = grp_fu_70_p2;

assign data_V_3_fu_499_p1 = grp_fu_76_p2;

assign data_V_fu_82_p1 = grp_fu_64_p2;

assign isNeg_1_fu_263_p3 = add_ln515_6_fu_257_p2[32'd11];

assign isNeg_2_fu_403_p3 = add_ln515_7_fu_397_p2[32'd11];

assign isNeg_3_fu_549_p3 = add_ln515_8_fu_543_p2[32'd11];

assign isNeg_fu_132_p3 = add_ln515_fu_126_p2[32'd11];

assign m_14_fu_695_p3 = add_ln99_1_fu_689_p2[32'd12];

assign m_fu_661_p3 = ((p_Result_s_fu_86_p3[0:0] == 1'b1) ? tmp_225_fu_645_p3 : tmp_226_fu_653_p3);

assign mantissa_1_fu_239_p4 = {{{{1'd1}, {p_Result_3_fu_235_p1}}}, {1'd0}};

assign mantissa_2_fu_379_p4 = {{{{1'd1}, {p_Result_5_fu_375_p1}}}, {1'd0}};

assign mantissa_3_fu_525_p4 = {{{{1'd1}, {p_Result_7_fu_521_p1}}}, {1'd0}};

assign mantissa_fu_108_p4 = {{{{1'd1}, {p_Result_1_fu_104_p1}}}, {1'd0}};

assign p_Result_1_fu_104_p1 = data_V_fu_82_p1[51:0];

assign p_Result_2_fu_217_p3 = data_V_1_fu_214_p1[32'd63];

assign p_Result_3_fu_235_p1 = data_V_1_fu_214_p1[51:0];

assign p_Result_4_fu_357_p3 = data_V_2_fu_353_p1[32'd63];

assign p_Result_5_fu_375_p1 = data_V_2_fu_353_p1[51:0];

assign p_Result_6_fu_503_p3 = data_V_3_fu_499_p1[32'd63];

assign p_Result_7_fu_521_p1 = data_V_3_fu_499_p1[51:0];

assign p_Result_s_fu_86_p3 = data_V_fu_82_p1[32'd63];

assign r_V_1_fu_172_p2 = zext_ln15_fu_118_p1 << zext_ln1488_fu_162_p1;

assign r_V_2_fu_297_p2 = zext_ln15_1_fu_249_p1 >> zext_ln1488_1_fu_293_p1;

assign r_V_3_fu_303_p2 = zext_ln15_1_fu_249_p1 << zext_ln1488_1_fu_293_p1;

assign r_V_4_fu_437_p2 = zext_ln15_2_fu_389_p1 >> zext_ln1488_2_fu_433_p1;

assign r_V_5_fu_443_p2 = zext_ln15_2_fu_389_p1 << zext_ln1488_2_fu_433_p1;

assign r_V_6_fu_583_p2 = zext_ln15_3_fu_535_p1 >> zext_ln1488_3_fu_579_p1;

assign r_V_7_fu_589_p2 = zext_ln15_3_fu_535_p1 << zext_ln1488_3_fu_579_p1;

assign r_V_fu_166_p2 = zext_ln15_fu_118_p1 >> zext_ln1488_fu_162_p1;

assign result_V_10_fu_625_p2 = (64'd0 - val_3_fu_617_p3);

assign result_V_12_fu_345_p3 = ((p_Result_2_fu_217_p3[0:0] == 1'b1) ? result_V_4_fu_339_p2 : val_1_fu_331_p3);

assign result_V_13_fu_485_p3 = ((p_Result_4_fu_357_p3[0:0] == 1'b1) ? result_V_9_fu_479_p2 : val_2_fu_471_p3);

assign result_V_2_fu_208_p2 = (64'd0 - val_fu_200_p3);

assign result_V_4_fu_339_p2 = (64'd0 - val_1_fu_331_p3);

assign result_V_9_fu_479_p2 = (64'd0 - val_2_fu_471_p3);

assign result_V_fu_631_p3 = ((p_Result_6_fu_503_p3[0:0] == 1'b1) ? result_V_10_fu_625_p2 : val_3_fu_617_p3);

assign rn_fu_639_p2 = (result_V_fu_631_p3 + 64'd4503599627370496);

assign rp_fu_493_p2 = ($signed(result_V_13_fu_485_p3) + $signed(64'd18442240474082181120));

assign select_ln108_1_fu_711_p3 = ((m_14_fu_695_p3[0:0] == 1'b1) ? select_ln108_fu_703_p3 : result_V_12_fu_345_p3);

assign select_ln108_fu_703_p3 = ((m_fu_661_p3[0:0] == 1'b1) ? rn_fu_639_p2 : rp_fu_493_p2);

assign sext_ln1488_1_fu_289_p1 = $signed(ush_1_fu_281_p3);

assign sext_ln1488_2_fu_429_p1 = $signed(ush_2_fu_421_p3);

assign sext_ln1488_3_fu_575_p1 = $signed(ush_3_fu_567_p3);

assign sext_ln1488_fu_158_p1 = $signed(ush_fu_150_p3);

assign sext_ln1512_1_fu_277_p1 = $signed(sub_ln1512_1_fu_271_p2);

assign sext_ln1512_2_fu_417_p1 = $signed(sub_ln1512_2_fu_411_p2);

assign sext_ln1512_3_fu_563_p1 = $signed(sub_ln1512_3_fu_557_p2);

assign sext_ln1512_fu_146_p1 = $signed(sub_ln1512_fu_140_p2);

assign sub_ln1512_1_fu_271_p2 = (11'd1023 - xs_exp_V_1_fu_225_p4);

assign sub_ln1512_2_fu_411_p2 = (11'd1023 - xs_exp_V_2_fu_365_p4);

assign sub_ln1512_3_fu_557_p2 = (11'd1023 - xs_exp_V_3_fu_511_p4);

assign sub_ln1512_fu_140_p2 = (11'd1023 - xs_exp_V_fu_94_p4);

assign tmp_174_fu_321_p4 = {{r_V_3_fu_303_p2[116:53]}};

assign tmp_175_fu_461_p4 = {{r_V_5_fu_443_p2[116:53]}};

assign tmp_176_fu_607_p4 = {{r_V_7_fu_589_p2[116:53]}};

assign tmp_216_fu_309_p3 = r_V_2_fu_297_p2[32'd53];

assign tmp_220_fu_449_p3 = r_V_4_fu_437_p2[32'd53];

assign tmp_224_fu_595_p3 = r_V_6_fu_583_p2[32'd53];

assign tmp_225_fu_645_p3 = result_V_2_fu_208_p2[32'd63];

assign tmp_226_fu_653_p3 = val_fu_200_p3[32'd63];

assign tmp_fu_178_p3 = r_V_fu_166_p2[32'd53];

assign tmp_s_fu_190_p4 = {{r_V_1_fu_172_p2[116:53]}};

assign ub_fu_669_p4 = {{result_V_12_fu_345_p3[63:52]}};

assign ush_1_fu_281_p3 = ((isNeg_1_fu_263_p3[0:0] == 1'b1) ? sext_ln1512_1_fu_277_p1 : add_ln515_6_fu_257_p2);

assign ush_2_fu_421_p3 = ((isNeg_2_fu_403_p3[0:0] == 1'b1) ? sext_ln1512_2_fu_417_p1 : add_ln515_7_fu_397_p2);

assign ush_3_fu_567_p3 = ((isNeg_3_fu_549_p3[0:0] == 1'b1) ? sext_ln1512_3_fu_563_p1 : add_ln515_8_fu_543_p2);

assign ush_fu_150_p3 = ((isNeg_fu_132_p3[0:0] == 1'b1) ? sext_ln1512_fu_146_p1 : add_ln515_fu_126_p2);

assign val_1_fu_331_p3 = ((isNeg_1_fu_263_p3[0:0] == 1'b1) ? zext_ln818_1_fu_317_p1 : tmp_174_fu_321_p4);

assign val_2_fu_471_p3 = ((isNeg_2_fu_403_p3[0:0] == 1'b1) ? zext_ln818_2_fu_457_p1 : tmp_175_fu_461_p4);

assign val_3_fu_617_p3 = ((isNeg_3_fu_549_p3[0:0] == 1'b1) ? zext_ln818_3_fu_603_p1 : tmp_176_fu_607_p4);

assign val_fu_200_p3 = ((isNeg_fu_132_p3[0:0] == 1'b1) ? zext_ln818_fu_186_p1 : tmp_s_fu_190_p4);

assign xs_exp_V_1_fu_225_p4 = {{data_V_1_fu_214_p1[62:52]}};

assign xs_exp_V_2_fu_365_p4 = {{data_V_2_fu_353_p1[62:52]}};

assign xs_exp_V_3_fu_511_p4 = {{data_V_3_fu_499_p1[62:52]}};

assign xs_exp_V_fu_94_p4 = {{data_V_fu_82_p1[62:52]}};

assign zext_ln1488_1_fu_293_p1 = $unsigned(sext_ln1488_1_fu_289_p1);

assign zext_ln1488_2_fu_433_p1 = $unsigned(sext_ln1488_2_fu_429_p1);

assign zext_ln1488_3_fu_579_p1 = $unsigned(sext_ln1488_3_fu_575_p1);

assign zext_ln1488_fu_162_p1 = $unsigned(sext_ln1488_fu_158_p1);

assign zext_ln15_1_fu_249_p1 = mantissa_1_fu_239_p4;

assign zext_ln15_2_fu_389_p1 = mantissa_2_fu_379_p4;

assign zext_ln15_3_fu_535_p1 = mantissa_3_fu_525_p4;

assign zext_ln15_fu_118_p1 = mantissa_fu_108_p4;

assign zext_ln515_4_fu_253_p1 = xs_exp_V_1_fu_225_p4;

assign zext_ln515_5_fu_393_p1 = xs_exp_V_2_fu_365_p4;

assign zext_ln515_6_fu_539_p1 = xs_exp_V_3_fu_511_p4;

assign zext_ln515_fu_122_p1 = xs_exp_V_fu_94_p4;

assign zext_ln818_1_fu_317_p1 = tmp_216_fu_309_p3;

assign zext_ln818_2_fu_457_p1 = tmp_220_fu_449_p3;

assign zext_ln818_3_fu_603_p1 = tmp_224_fu_595_p3;

assign zext_ln818_fu_186_p1 = tmp_fu_178_p3;

assign zext_ln99_fu_685_p1 = add_ln99_fu_679_p2;

endmodule //keygen_fpr_rint