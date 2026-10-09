`timescale 1ns/1ps

module fifo_tb;
    localparam int WIDTH = 8;
    localparam int DEPTH = 4;

    class fifo_transaction;
        int space = DEPTH;

        rand bit write;
        rand bit [WIDTH-1:0] val;
        rand int unsigned idle; //clock cycles idle after transaction

        constraint con 
        {
            idle inside {[0:3]};
            
            write dist
            {
                'b0 := 30,
                'b1 := 70
            };
        }
    endclass

    fifo_transaction tx = new();
    logic [WIDTH-1:0] gold[$];
    logic [WIDTH-1:0] expected;


    bit clk = 0;
    always #5 clk = ~clk;

    fifo_if #(.WIDTH(WIDTH), .DEPTH(DEPTH)) fif(clk);
    fifo dut(fif);

    logic [WIDTH-1:0] received;

    //always block or else verilator wont preserve nonblocking assignment in tasks for an interface
    always begin
        fif.rst_n  = 0;
        fif.wr_en  = 0;
        fif.rd_en  = 0;
        fif.datain = 0;

        repeat (2) @(negedge clk);
        fif.rst_n <= 1;
        @(negedge clk);

        if (fif.empty !== 1'b1 || fif.full !== 1'b0)
            $fatal(1, "Incorrect flags after reset");

        // Multiple rounds exercise pointer wraparound.
        for (int round = 0; round < 3; round++) begin
            for (int i = 0; i < DEPTH; i++)
                fif.write(WIDTH'(round * DEPTH + i));

            // write() returns before its last NBA has settled.
            @(negedge clk);
            if (fif.full !== 1'b1 || fif.empty !== 1'b0)
                $fatal(1, "FIFO should be full");

            // This extra write must be ignored.
            fif.write(8'hFF);

            for (int i = 0; i < DEPTH; i++) begin
                fif.read(received);

                if (received !== WIDTH'(round * DEPTH + i))
                    $fatal(1, "round=%0d index=%0d: expected=%0h got=%0h",
                           round, i, WIDTH'(round * DEPTH + i), received);

                if (fif.full !== 1'b0)
                    $fatal(1, "Full should clear after a read");
            end

            if (fif.empty !== 1'b1)
                $fatal(1, "FIFO should be empty");
        end

        //constrained random verification
        repeat(500)
        begin
            if(tx.randomize() != 'b1) $fatal(1, "Radomize fail");

            repeat (tx.idle()) @(negedge clk);

            if(tx.write)
            begin
                fif.write(tx.val);
                gold.push_back(tx.val);
            end
        end

        $display("PASS: FIFO checks completed");
        $finish;
    end

    initial begin
        #5000;
        $fatal(1, "Test timed out");
    end
endmodule
