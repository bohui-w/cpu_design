module gpr (
    input clk,
    input rst,
    input w_en,
    input [4:0] waddr,
    input [4:0] raddr1,
    input [4:0] raddr2,
    input [31:0] wdata,
    output [31:0] rdata1,
    output [31:0] rdata2
);
    integer i;

    reg [31:0] reg_file [0:31];

    assign rdata1 = reg_file[raddr1];
    assign rdata2 = reg_file[raddr2];

    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < 32; i = i + 1) begin
                reg_file[i] <= 32'd0;
            end
        end
        else if (w_en) begin
            reg_file[waddr] <= wdata;
        end
        else begin
            reg_file <= reg_file;
        end
        reg_file[0] <= 32'd0;
    end

endmodule
