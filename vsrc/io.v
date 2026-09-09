module io (
    input clk,
    input rst,
    input [7:0] iow_in,
    input [7:0] ior_in,
    output [7:0] iow_out,
    output [7:0] ior_out,
    input io_en,
    input io_sel
);
    assign ior_out = ior_in;
    always @(posedge clk or posedge rst) begin
        if (rst)
            iow_out <= 8'd0;
        else if (io_en & io_sel)
            iow_out <= iow_in;
        else
            iow_out <= iow_out;
    end
endmodule
