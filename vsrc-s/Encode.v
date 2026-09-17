module Encode #(
    parameter DATA_LEN = 1
)(
    input [(1<<DATA_LEN)-1:0] in,
    input  en,
    output reg [DATA_LEN-1:0] out
);
    integer i;
    always @(*) begin
        if (en) begin
            out = {DATA_LEN{1'b0}};
            for(i = 0; i < (1<<DATA_LEN); i = i + 1) begin
                if(in[i] == 1'b1) 
                    out = i[DATA_LEN-1:0];
            end
        end
        else 
            out = {DATA_LEN{1'b0}};
    end

endmodule
