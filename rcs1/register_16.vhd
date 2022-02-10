----------------------------------------------------------------------------------
-- Company: TUM MSCE VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:    17:16:43 01/02/2022 
-- Design Name: 
-- Module Name:    register_16 - Behavioral 
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

entity register_16 is
    Port ( CLK : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (15 downto 0);
           Q : out  STD_LOGIC_VECTOR (15 downto 0));
end register_16;

architecture Behavioral of register_16 is

begin
process (CLK)
begin
if (CLK='1' and CLK'EVENT ) then  --RISING CLOCK EDGE
	if (EN='1') then         --enable signal to control signal propagation
		Q <= D;
	end if;
end if;
end process;

end Behavioral;

