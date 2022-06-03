----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:02:18 06/03/2022 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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

entity RAM is
    Port ( clock : in  STD_LOGIC;
           data : in  STD_LOGIC_VECTOR (3 downto 0);
           we : in  STD_LOGIC;
			  write_address:  IN   integer RANGE 0 to 3;
			  read_address:   IN   integer RANGE 0 to 3;
           q : out  STD_LOGIC_VECTOR (3 downto 0));
end RAM;

architecture rtl of RAM is
   TYPE mem IS ARRAY(0 TO 3) OF std_logic_vector(3 DOWNTO 0);
   SIGNAL ram_block : mem;
begin
	PROCESS (clock)
   BEGIN
      IF (clock'event AND clock = '1') THEN
         IF (we = '1') THEN
            ram_block(write_address) <= data;
         END IF;
         q <= ram_block(read_address);
      END IF;
   END PROCESS;

end rtl;

