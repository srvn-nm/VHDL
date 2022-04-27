----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:48:04 04/27/2022 
-- Design Name: 
-- Module Name:    ShiftRegister - Behavioral 
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

entity ShiftRegister is
    Port ( Data_in : in  STD_LOGIC;
           Sel : in  STD_LOGIC;
           P_in : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
           Output : out  STD_LOGIC);
end ShiftRegister;

architecture Behavioral of ShiftRegister is

begin


end Behavioral;

