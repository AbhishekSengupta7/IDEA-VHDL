----------------------------------------------------------------------------------
-- Company: TU Munich /  VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    mulop - Behavioral 
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
use IEEE.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mulop is
    Port ( I_1 : in  STD_LOGIC_VECTOR (15 downto 0);
           I_2 : in  STD_LOGIC_VECTOR (15 downto 0);
           O_1 : out  STD_LOGIC_VECTOR (15 downto 0));
end mulop;

architecture Behavioral of mulop is
signal temp1 : STD_LOGIC_VECTOR (16 downto 0); --17 bit assignment in case input is 0, so that we can set 2.16 to 1 and all to 0.
signal temp2 : STD_LOGIC_VECTOR (16 downto 0);
signal temp3 : STD_LOGIC_VECTOR (33 downto 0); --34 bit result
signal temp4 : STD_LOGIC_VECTOR (16 downto 0);
signal mod_output : STD_LOGIC_VECTOR (15 downto 0);
signal quotient : STD_LOGIC_VECTOR (16 downto 0);  


begin

	checkzero: process(I_1,I_2)
	
		begin
		
			temp1 <= '0' & I_1;  --make it 17 bits because in case of 0 input we need to set the value to 2.16
			temp2 <= '0' & I_2;
			
			if (I_1 = x"0000") then
				temp1 <= "10000000000000000";  --value set to 2.16 since original input is 0
			end if;
			
			if (I_2 = x"0000") then
				temp2 <= "10000000000000000";  --value set to 2.16 since original input is 0
			
			end if;
		end process;
			
			
			temp3 <= temp1*temp2;
			mod_output <= temp3(15 downto 0);  
			quotient <= temp3(32 downto 16);


   processout: process(mod_output,quotient)	
		begin	
			     if (mod_output >= quotient) then
				  temp4 <= ('0' & mod_output)-quotient;
				
              else			
				  temp4 <= ('0' & mod_output)-quotient+"10000000000000001";				
				  
			end if;
			
		end process;

	O_1<= temp4(15 downto 0);

end Behavioral;

