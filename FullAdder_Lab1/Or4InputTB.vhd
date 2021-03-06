--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:38:31 02/24/2022
-- Design Name:   
-- Module Name:   C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/FullAdder_Lab1/Or4InputTB.vhd
-- Project Name:  FullAdder_Lab1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Or4Input
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
 
ENTITY Or4InputTB IS
END Or4InputTB;
 
ARCHITECTURE behavior OF Or4InputTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Or4Input
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         d : IN  std_logic;
         output : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';
   signal d : std_logic := '0';

 	--Outputs
   signal output : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Or4Input PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
          output => output
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
	 a <= '0';
    b <= '0';
	 c <= '0';
	 d <= '0';
    wait for 1 ns;
    assert(output='0') report "Fail 0/0" severity error;
  
    a <= '0';
    b <= '1';
	 c <= '0';
	 d <= '1';
    wait for 1 ns;
    assert(output='1') report "Fail 0/1" severity error;

    a <= '1';
    b <= 'X';
	 c <= '1';
	 d <= '0';
    wait for 1 ns;
    assert(output='1') report "Fail 1/X" severity error;

    a <= '1';
    b <= '1';
	 c <= '1';
	 d <= '1';
    wait for 1 ns;
    assert(output='1') report "Fail 1/1" severity error;
    
    -- Clear inputs
    a <= '0';
    b <= '0';
	 c <= '0';
	 d <= '0';
    assert false report "Test done." severity note;
      wait;
   end process;

END;
