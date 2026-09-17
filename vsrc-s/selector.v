module selector #(
    parameter KEY_LEN = 2,
    parameter WIDTH = 8
)(
    input [((1<<KEY_LEN)*WIDTH)-1:0] D,
    input [KEY_LEN-1:0] sel,
    output reg [WIDTH-1:0] Q
);
    integer i;
    always @(*) begin
        Q = {WIDTH{1'b0}};
        for (i = 0; i < (1<<KEY_LEN); i = i+1) begin
            if (sel == i[KEY_LEN-1:0]) begin
                Q = D[WIDTH*i +: WIDTH];
            end
        end
    end
endmodule
