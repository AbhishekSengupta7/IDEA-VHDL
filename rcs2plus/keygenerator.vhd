----------------------------------------------------------------------------------
-- Company: TU Munich MSCE VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:    23:56:02 01/02/2022 
-- Design Name: 
-- Module Name:    keygenerator - Behavioral 
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

entity keygenerator is
    Port ( KEY : in  STD_LOGIC_VECTOR (127 downto 0);
           ROUND : in  STD_LOGIC_VECTOR (3 downto 0);
           KEY1 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY2 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY3 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY4 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY5 : out  STD_LOGIC_VECTOR (15 downto 0);
           KEY6 : out  STD_LOGIC_VECTOR (15 downto 0));
end keygenerator;

architecture Behavioral of keygenerator is

signal FULL_KEY_ALL6P: std_logic_vector (95 downto 0);  --6 partial keys of 16 bits each

begin
	process (ROUND)
	begin
		case ROUND is   --page 12 of the lab manual
			when "0000" => FULL_KEY_ALL6P <= KEY(127 downto 32);
			when "0001" => FULL_KEY_ALL6P <= KEY(31 downto 0) & KEY(102 downto 39);
			when "0010" => FULL_KEY_ALL6P <= KEY(38 downto 0) & KEY(127 downto 103) & KEY(77 downto 46);
			when "0011" => FULL_KEY_ALL6P <= KEY(45 downto 0) & KEY(127 downto 78);
			when "0100" => FULL_KEY_ALL6P <= KEY(52 downto 0) & KEY(127 downto 85);
			when "0101" => FULL_KEY_ALL6P <= KEY(84 downto 53) & KEY(27 downto 0) & KEY(127 downto 92);	
			when "0110" => FULL_KEY_ALL6P <= KEY(91 downto 28) & KEY(2 downto 0) & KEY(127 downto 99);
			when "0111" => FULL_KEY_ALL6P <= KEY(98 downto 3);
			when "1000" => FULL_KEY_ALL6P <= KEY(105 downto 42) & x"00000000";  --output transformation
			when others => FULL_KEY_ALL6P <= x"000000000000000000000000";
		end case;
	end process;
	
	--dividing the key into the 6 partial keys
	KEY1 <= FULL_KEY_ALL6P(95 downto 80); 
	KEY2 <= FULL_KEY_ALL6P(79 downto 64);
	KEY3 <= FULL_KEY_ALL6P(63 downto 48);
	KEY4 <= FULL_KEY_ALL6P(47 downto 32);
	KEY5 <= FULL_KEY_ALL6P(31 downto 16);
	KEY6 <= FULL_KEY_ALL6P(15 downto 0);
 
end Behavioral;
