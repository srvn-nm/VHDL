----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:51:54 06/03/2022 
-- Design Name: 
-- Module Name:    ROM - Behavioral 
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
use IEEE.STD_LOGIC_arith.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ROM is
    Port ( clock : in STD_LOGIC;
			  rom_enable : in  STD_LOGIC;
           address : in  STD_LOGIC_VECTOR (1 downto 0);
           data_output : out  STD_LOGIC_VECTOR (3 downto 0));
end ROM;

architecture arch of ROM is

begin
	process(clock) is
		begin
			if(rising_edge(clock) and rom_enable ='1') then
				if(address="00") then
					data_output <="1001";
				elsif(address="01") then
					data_output <="0110";
				elsif(address="10") then
					data_output <="0000";
				elsif(address="11") then
					data_output <="1111";
				end if;
			end if;
	end process;
end arch;

