----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:43:18 02/23/2022 
-- Design Name: 
-- Module Name:    and4Input - Behavioral 
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

entity and4Input is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d : in  STD_LOGIC;
           out_resault : out  STD_LOGIC);
end and4Input;

architecture Behavioral of and4Input is
component and2Input is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : out  STD_LOGIC);
end component;
signal w1,w2: STD_LOGIC;
begin
instance0: and2Input port map (a=>a , b=>b , c=>w1);
instance1: and2Input port map (a=>c , b=>d , c=>w2);
instance2: and2Input port map (a=>w1 , b=>w2 , c=>out_resault);
end Behavioral;

