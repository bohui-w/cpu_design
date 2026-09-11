module top(
    input clk,
    input rst,
    output [15:0] led_bar,
    input [7:0] io_in0,
    input io_in1
);
    wire [3:0] pc_out;
    wire [7:0] command;
    wire [1:0] wddr;
    wire [1:0] rddr1;
    wire [1:0] rddr2;
    wire [7:0] wdata;
    wire gpr_en;
    wire pc_op;
    wire [3:0] step;
    wire [7:0] Q1;
    wire [7:0] Q2;
    wire [7:0] add_data;
    wire io_en;
    wire [2:0] io_sel;
    wire [7:0] io_data;
    wire [63:0] io_in;
    wire [63:0] led_bar_full;
    assign io_in[7:0]  = io_in0;
    assign io_in[8]    = io_in1;
    assign io_in[63:9] = 55'b0;
    assign led_bar = led_bar_full[15:0];

    scommand_code u_scommand_code (
        .command   (command),
        .add_data  (add_data),
        .io_data   (io_data),
        .eq_flag   (Q1==Q2),
        .wdata     (wdata),
        .wddr      (wddr),
        .wen       (gpr_en),
        .rddr1     (rddr1),
        .rddr2     (rddr2),
        .step      (step),
        .io_sel    (io_sel),
        .pc_op     (pc_op),
        .io_en     (io_en)
    );

    io_bank u_io_bank (
        .clk     (clk),
        .rst     (rst),
        .en      (io_en),
        .sel     (io_sel),
        .dout    (io_data),
        .din     (Q1),
        .led_bar (led_bar_full),
        .io_in   (io_in)
    );

    gpr #(
        .DDR_WIDTH(2),
        .WIDTH(8)
    ) u_gpr (
        .clk   (clk),
        .rst   (rst),
        .wen   (gpr_en),
        .wddr  (wddr),
        .rddr1 (rddr1),
        .rddr2 (rddr2),
        .Data  (wdata),
        .Q1    (Q1),
        .Q2    (Q2)
    );

    pc #(
        .COUNT_WIDTH(4),
        .STEP_WIDTH(4)
    ) u_pc (
        .clk (clk),
        .rst (rst),
        .step(step),
        .op  (pc_op),
        .dout(pc_out)
    );
    
    MuxKey #(
        .NR_KEY  (16),
        .KEY_LEN (4),
        .DATA_LEN(8)
    ) u_MuxKey (
        .out (command),
        .key (pc_out),
        .lut ({
            4'd0, 8'h60, 
            4'd1, 8'h80, 
            4'd2, 8'h90, 
            4'd3, 8'hb1, 
            4'd4, 8'h03, 
            4'd5, 8'h14, 
            4'd6, 8'h48, 
            4'd7, 8'hf6, 
            4'd8, 8'h80, 
            4'd9, 8'h71, 
            4'd10, 8'hcb, 
            4'd11, 8'hfa, 
            4'd12, 8'h59, 
            4'd13, 8'hc2, 
            4'd14, 8'h00, 
            4'd15, 8'h00
        })
    );

    adder #(
        .WIDTH(8)
    ) u_adder (
        .a   (Q1),
        .b   (Q2),
        .cin (1'b0),
        .sum (add_data),
        /* verilator lint_off PINCONNECTEMPTY */
        .cout()
        /* verilator lint_on PINCONNECTEMPTY */
    );

endmodule
