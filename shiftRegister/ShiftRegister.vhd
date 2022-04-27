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
component DFLipFlop is
    Port ( d : in  STD_LOGIC;
           clock : in  STD_LOGIC;
			  reset : in STD_LOGIC;
           q : out  STD_LOGIC);
end component DFLipFlop;
component Mux is
    Port ( w0 : in  STD_LOGIC;
           w1 : in  STD_LOGIC;
           sel : in  STD_LOGIC;
           o : out  STD_LOGIC);
end component Mux;
signal DffIn : STD_LOGIC_VECTOR (3 downto 0);
begin
if clk='1' and clock'event then
mux1 : Mux port map(w0 => Data_in, w1 => P_in(0), sel => Sel, o => DffIn);

end Behavioral;

