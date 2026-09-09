module alu #(
    parameter WIDTH = 8
)(
    input [WIDTH-1:0] a,
    input [WIDTH-1:0] b,
    input [2:0] op,
    output reg [WIDTH-1:0] D,
    output reg cout
);
    wire [WIDTH-1:0] D_out;
    wire [WIDTH-1:0] not_out = ~a;
    wire [WIDTH-1:0] and_out = a & b;
    wire [WIDTH-1:0] or_out = a | b;
    wire [WIDTH-1:0] xor_out = a ^ b;
    wire neq_out = (a < b);
    wire eq_out = (a == b);
    wire cout_out;

    adder #(
        .WIDTH(WIDTH)
    ) u_adder (
        .a(a),
        .b(b^{WIDTH{op[0]}}),
        .cin(op[0]),
        .sum(D_out),
        .cout(cout_out)
    );

    always @(*) begin
        case (op)
            3'b000, 3'b001: begin
                D = D_out;
                cout = cout_out ^ op[0];
            end
            3'b010: begin
                D = not_out;
                cout = 1'b0;
            end
            3'b011: begin
                D = and_out;
                cout = 1'b0;
            end
            3'b100: begin
                D = or_out;
                cout = 1'b0;
            end
            3'b101: begin
                D = xor_out;
                cout = 1'b0;
            end
            3'b110: begin
                D = {WIDTH{1'b0}};
                cout = neq_out;
            end
            3'b111: begin
                D = {WIDTH{1'b0}};
                cout = eq_out;
            end
            default begin
                D = {WIDTH{1'b0}};
                cout = 1'b0;
            end
        endcase
    end
endmodule
