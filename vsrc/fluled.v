module fluled (
    input clk,
    input rst,
    output reg [15:0] led
);

reg [31:0] count;

always @(posedge clk or posedge rst) begin
    if (rst)
        led <= 16'd1;
    else if (count == 5000000)
        led <= {led[14:0], led[15]};
    else
        led <= led;
end

always @(posedge clk or posedge rst) begin
    if (rst)
        count <= 32'd0;
    else if (count < 5000000)
        count <= count + 1;
    else
        count <= 0;
end

endmodule
