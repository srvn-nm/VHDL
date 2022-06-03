----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:45:05 06/03/2022 
-- Design Name: 
-- Module Name:    simple_CPU - Behavioral 
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

entity simple_CPU is
    Port ( clock : in  STD_LOGIC;
           ROM_adder : in  STD_LOGIC_VECTOR (3 downto 0);
           RAM_adder : in  STD_LOGIC_VECTOR (3 downto 0);
           ALU_sel : in  STD_LOGIC;
           reg_2_input : in  STD_LOGIC_VECTOR (3 downto 0);
           reset : in  STD_LOGIC;
           REG_out : in  STD_LOGIC_VECTOR (3 downto 0));
end simple_CPU;

architecture Behavioral of simple_CPU is

begin


end Behavioral;

