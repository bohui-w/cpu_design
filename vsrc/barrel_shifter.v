module barrel_shifter #(
    parameter SEL_WIDTH = 3
)(
    input [SEL_WIDTH-1:0] shamt,
    input [(1<<SEL_WIDTH)-1:0] din,
    input L_R,
    input A_L,
    output [(1<<SEL_WIDTH)-1:0] dout
);
    localparam DATA_WIDTH = 1 << SEL_WIDTH;

    wire [DATA_WIDTH-1:0] stage [SEL_WIDTH:0];
    assign stage[0] = din;

    genvar i;
    generate
        for (i = 0; i < SEL_WIDTH; i = i + 1) begin : shifter
            localparam integer SHIFT_AMT = 1 << i;
            wire fill_bit;
            wire [DATA_WIDTH-1:0] left_result;
            wire [DATA_WIDTH-1:0] right_result;
            assign fill_bit = (A_L && !L_R) ? stage[i][DATA_WIDTH-1] : 1'b0;
            assign left_result = {stage[i][DATA_WIDTH-1-SHIFT_AMT : 0], {SHIFT_AMT{fill_bit}}};
            assign right_result = {{SHIFT_AMT{fill_bit}}, stage[i][DATA_WIDTH-1 : SHIFT_AMT]};
            assign stage[i+1] = shamt[i] ? (L_R ? left_result : right_result) : stage[i];
        end
    endgenerate
    assign dout = stage[SEL_WIDTH];
endmodule
