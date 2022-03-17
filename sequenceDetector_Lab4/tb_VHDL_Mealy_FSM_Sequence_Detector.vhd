--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:31:47 03/18/2022
-- Design Name:   
-- Module Name:   C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/sequenceDetector_Lab4/tb_VHDL_Mealy_FSM_Sequence_Detector.vhd
-- Project Name:  sequenceDetector_Lab4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: VHDL_MEALY_FSM_Sequence_Detector
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_VHDL_Mealy_FSM_Sequence_Detector IS
END tb_VHDL_Mealy_FSM_Sequence_Detector;
 
ARCHITECTURE behavior OF tb_VHDL_Mealy_FSM_Sequence_Detector IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT VHDL_MEALY_FSM_Sequence_Detector
    PORT(
         clk : IN  std_logic;
         x : IN  std_logic;
         z : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal x : std_logic := '0';

 	--Outputs
   signal z : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: VHDL_MEALY_FSM_Sequence_Detector PORT MAP (
          clk => clk,
          x => x,
          z => z
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
  x <= '0';
  -- Wait 100 ns for global reset to finish
  wait for 40 ns;
  x <= '1';
  wait for 10 ns;
  x <= '0';
  wait for 10 ns;
  x <= '1'; 
  wait for 20 ns;
  x <= '1'; 
  wait for 20 ns;
  x <= '1'; 
  wait for 20 ns;
  x <= '0'; 
      -- insert stimulus here 

      wait;
   end process;

END;
