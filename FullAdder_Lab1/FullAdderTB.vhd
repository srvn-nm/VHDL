--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:12:10 02/24/2022
-- Design Name:   
-- Module Name:   C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/FullAdder_Lab1/FullAdderTB.vhd
-- Project Name:  FullAdder_Lab1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FullAdder
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
 
ENTITY FullAdderTB IS
END FullAdderTB;
 
ARCHITECTURE behavior OF FullAdderTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FullAdder
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         sum : OUT  std_logic;
         carry : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';

 	--Outputs
   signal sum : std_logic;
   signal carry : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FullAdder PORT MAP (
          a => a,
          b => b,
          c => c,
          sum => sum,
          carry => carry
        );

--   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      --wait for <clock>_period*10;

      -- insert stimulus here 
		A <= '0';
B <= '0';
C <= '0';
wait for 10 ns;
assert ((SUM = '0') and (CARRY = '0'))
report "test Ailed for input combination 000" severity error;

A <= '0';
B <= '0';
C <= '1';
wait for 10 ns;
assert ((SUM = '1') and (CARRY = '0'))
report "test Ailed for input combination 001" severity error;

A <= '0';
B <= '1';
C <= '0';
wait for 10 ns;
assert ((SUM = '1') and (CARRY = '0'))
report "test Ailed for input combination 010" severity error;

A <= '0';
B <= '1';
C <= '1';
wait for 10 ns;
assert ((SUM = '0') and (CARRY = '1'))
report "test Ailed for input combination 011" severity error;

A <= '1';
B <= '0';
C <= '0';
wait for 10 ns;
assert ((SUM = '1') and (CARRY = '0'))
report "test Ailed for input combination 100" severity error;

A <= '1';
B <= '0';
C <= '1';
wait for 10 ns;
assert ((SUM = '0') and (CARRY = '1'))
report "test Ailed for input combination 101" severity error;

A <= '1';
B <= '1';
C <= '0';
wait for 10 ns;
assert ((SUM = '0') and (CARRY = '1'))
report "test Ailed for input combination 110" severity error;

A <= '1';
B <= '1';
C <= '1';
wait for 10 ns;
assert ((SUM = '1') and (CARRY = '1'))
report "test Ailed for input combination 111" severity error;

      wait;
   end process;

END;
