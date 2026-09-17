module image_control (
    input clk,
    input rst,
    output reg [9:0] x_addr,
    output reg [9:0] y_addr
);
    parameter COUNT = 1000000;
    reg [25:0] cnt;
    reg x_sped;
    reg y_sped;

    always @(posedge clk) begin
        if (rst)
            cnt <= 26'd0;
        else if (cnt < (COUNT - 1))
            cnt <= cnt + 1;
        else
            cnt <= 26'd0;
    end

    always @(posedge clk) begin
        if (rst) begin
            x_addr <= 10'd0;
            y_addr <= 10'd0;
        end
        else if (cnt == (COUNT - 1)) begin
            if (x_sped == 1)
                x_addr <= x_addr + 10'd1;
            else
                x_addr <= x_addr - 10'd1;
            if (y_sped == 1)
                y_addr <= y_addr + 10'd1;
            else
                y_addr <= y_addr - 10'd1;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            x_sped <= 1'b1;
            y_sped <= 1'b1;
        end

        if (x_addr <= 10'd1)
            x_sped <= 1'b1;
        else if (x_addr >= 10'd538)
            x_sped <= 1'b0;
        else 
            x_sped <= x_sped;

        if (y_addr <= 10'd1)
            y_sped <= 1'b1;
        else if (y_addr >= 10'd378)
            y_sped <= 1'b0;
        else 
            y_sped <= y_sped;
    end


endmodule