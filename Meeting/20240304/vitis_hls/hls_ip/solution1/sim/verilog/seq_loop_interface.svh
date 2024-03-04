`ifndef SEQ_LOOP_INTF__SV
    `define SEQ_LOOP_INTF__SV
    `timescale 1ns/1ps
    interface seq_loop_intf#(parameter FSM_WIDTH = 2)(input clock, input reset);
        logic [FSM_WIDTH-1:0] cur_state;
        logic [1:0] pre_states_valid;
        logic [FSM_WIDTH-1:0] pre_loop_state0;
        logic [FSM_WIDTH-1:0] pre_loop_state1;
        logic [3:0] post_states_valid;
        logic [FSM_WIDTH-1:0] post_loop_state0;
        logic [FSM_WIDTH-1:0] post_loop_state1;
        logic [FSM_WIDTH-1:0] post_loop_state2;
        logic [FSM_WIDTH-1:0] post_loop_state3;
        logic [1:0] quit_states_valid;
        logic [FSM_WIDTH-1:0] quit_loop_state0;
        logic [FSM_WIDTH-1:0] quit_loop_state1;
        logic [FSM_WIDTH-1:0] loop_quit_state;
        logic [FSM_WIDTH-1:0] iter_start_state;
        logic [1:0] iter_end_states_valid;
        logic [FSM_WIDTH-1:0] iter_end_state0;
        logic [FSM_WIDTH-1:0] iter_end_state1;
        logic  one_state_loop;
        logic  one_state_block;
        logic  finish;
    endinterface
`endif
