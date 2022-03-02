----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:47:22 03/02/2022 
-- Design Name: 
-- Module Name:    DFLipFlop - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity DFLipFlop is
    Port ( d : in  STD_LOGIC;
           clock : in  STD_LOGIC;
			  reset : in STD_LOGIC;
           q : out  STD_LOGIC);
end DFLipFlop;

architecture Behavioral of DFLipFlop is

begin
process(clock,reset)

end Behavioral;

