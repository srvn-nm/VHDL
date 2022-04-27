----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:46:32 04/27/2022 
-- Design Name: 
-- Module Name:    multiplexer2to1 - Behavioral 
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

entity multiplexer2to1 is
    Port ( Data_in : in  STD_LOGIC;
           sel : in  STD_LOGIC;
           P_in : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (3 downto 0));
end multiplexer2to1;

architecture Behavioral of multiplexer2to1 is

begin


end Behavioral;

