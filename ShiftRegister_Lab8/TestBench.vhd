--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:38:37 05/03/2022
-- Design Name:   
-- Module Name:   C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/ShiftRegister_Lab8/TestBench.vhd
-- Project Name:  ShiftRegister_Lab8
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: shiftRegister
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
 
ENTITY TestBench IS
END TestBench;
 
ARCHITECTURE behavior OF TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shiftRegister
    PORT(
         DataIn : IN  std_logic;
         Selector : IN  std_logic;
         P_in : IN  std_logic_vector(3 downto 0);
         Clk : IN  std_logic;
         OutPut : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal DataIn : std_logic := '0';
   signal Selector : std_logic := '0';
   signal P_in : std_logic_vector(3 downto 0) := (others => '0');
   signal Clk : std_logic := '0';

 	--Outputs
   signal OutPut : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shiftRegister PORT MAP (
          DataIn => DataIn,
          Selector => Selector,
          P_in => P_in,
          Clk => Clk,
          OutPut => OutPut
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for Clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
