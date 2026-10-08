`default_nettype none

interface fifo_if #(parameter int WIDTH = 8; parameter int DEPTH = 8) (input bit clk)
    logic rst_n;
    logic [WIDTH-1:0] datain;
    logic [WIDTH-1:0] dataout;
    logic full;
    logic empty;
    logic wr_en;
    logic rd_en;

    modport DUT (
        input clk,
        input wr_en,
        input rd_en,
        input rst_n,
        input datain,
        output dataout,
        output full,
        output empty
    );

    modport TB (
        input clk,
        input rst_n,
        output wr_en,
        output rd_en,
        output datain,
        input dataout,
        input full,
        input empty
    );


    task write (input logic [WIDTH-1:0] data);
        @(posedge clk);
        wr_en <= 'b1;
        datain <= data;

        @(posedge clk);
        wr_en <= '0;

    endtask

    task read (output logic [WIDTH-1:0] data);
        @(posedge clk);
        rd_en <= 'b1;

        @(posedge clk);
        data <= dataout;
        rd_en <= 'b0;

    endtask

endinterface


module fifo
(
    fifo_if fif;
);
    localparam int addrWidth = (fif.DEPTH <= 1 ? 1: $clog2(fif.DEPTH));

    logic [addrWidth:0] rd_pointer;
    logic [addrWidth:0] wr_pointer; 

    always_ff @(posedge clk, negedge fif.rst_n)
    begin
        if(!rst_n)
        begin
            rd_pointer <= 'b0;
            wr_pointer <= 'b0;

        end

    end


endmodule