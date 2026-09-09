module top(
    input clk,
    input rst,
    input [7:0] D,
    input sel,
    output [3:0] Q,
    output [((1<<3)*8)-1:0] led_bar,
    input [((1<<3)*8)-1:0] io_in
);
    wire [7:0] pc_out;
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
        .led_bar (led_bar),
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
        .COUNT_WIDTH(8),
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
            4'b0000, 8'h00, 
            4'b0001, 8'h01, 
            4'b0010, 8'h02, 
            4'b0011, 8'h03, 
            4'b0100, 8'h04, 
            4'b0101, 8'h05, 
            4'b0110, 8'h06, 
            4'b0111, 8'h07, 
            4'b1000, 8'h08, 
            4'b1001, 8'h09, 
            4'b1010, 8'h0A, 
            4'b1011, 8'h0B, 
            4'b1100, 8'h0C, 
            4'b1101, 8'h0D, 
            4'b1110, 8'h0E, 
            4'b1111, 8'h0F
        })
    );

    adder #(
        .WIDTH(8)
    ) u_adder (
        .a   (Q1),
        .b   (Q2),
        .cin (1'b0),
        .sum (add_data),
        .cout()
    );

endmodule
