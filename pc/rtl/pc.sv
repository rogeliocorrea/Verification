`default_nettype 

module pc 
#(
    parameter WIDTH = 8
)
(
    input wire clk,
    input wire en,
    input wire rst_n,
    input logic [WIDTH -1 : 0]next_pc,
    output logic [WIDTH - 1: 0]current_pc
);

always_ff @(posedge clk, negedge rst_n)
begin
    current_pc <= 'b0;
    if( rst_n ) current_pc <= 'b0;
    else current_pc <= next_pc;
end

endmodule