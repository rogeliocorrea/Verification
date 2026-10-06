`default_nettype none

module adder
#(
 parameter WIDTH = 32
)
(
    input wire [WIDTH-1:0] a,
    input wire [WIDTH-1:0] b,
    output wire [WIDTH-1:0] s
);

always_comb
begin
    s = a + b;
end


endmodule