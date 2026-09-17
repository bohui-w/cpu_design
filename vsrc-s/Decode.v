module Decode #(
    parameter KEY_LEN  = 1
)(
    input [KEY_LEN-1:0] in,
    input en,
    output reg [(1<<KEY_LEN)-1:0] out
);

integer i;

always @(*) begin
    if(en) begin
        out = {(1<<KEY_LEN){1'b0}};
        for(i = 0; i < (1<<KEY_LEN); i = i + 1) begin
            if(in == i[KEY_LEN-1:0]) begin
                out[i] = 1'b1;
            end
        end
    end
    else begin
        out = {(1<<KEY_LEN){1'b0}};
    end
end

endmodule
