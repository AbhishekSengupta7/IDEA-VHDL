----------------------------------------------------------------------------------
-- Company: TU Munich VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:    17:10:33 11/19/2021 
-- Design Name: 
-- Module Name:    round - Behavioral 
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

entity round is
    Port ( X1 : in  STD_LOGIC_VECTOR (15 downto 0);
           X2 : in  STD_LOGIC_VECTOR (15 downto 0);
           X3 : in  STD_LOGIC_VECTOR (15 downto 0);
           X4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z1 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z2 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z3 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z5 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z6 : in  STD_LOGIC_VECTOR (15 downto 0);
           Y1 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y2 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y3 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y4 : out  STD_LOGIC_VECTOR (15 downto 0));
end round;

architecture Behavioral of round is

COMPONENT mulop
    PORT(
         I_1 : IN  std_logic_vector(15 downto 0);
         I_2 : IN  std_logic_vector(15 downto 0);
         O_1 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;

COMPONENT xorop
    PORT(
         I1	 : in  std_logic_vector(15 downto 0);
         I2 : in  std_logic_vector(15 downto 0);
         O : out  std_logic_vector(15 downto 0)
        );
    END COMPONENT;

COMPONENT addop
    PORT(
         I1 : IN  std_logic_vector(15 downto 0);
         I2 : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT; 

signal T1, T2, T3, T4, T5, T6, T7, T8, T9, T10 : std_logic_vector(15 downto 0);

begin

   mul1: mulop PORT MAP (    --MULTIPLIER ON TOP LEFT
          I_1 => X1,
          I_2 => Z1,
          O_1 => T1
        ); 
		  
	mul2: mulop PORT MAP (     --MULTIPLIER ON TOP RIGHT
          I_1 => X4,
          I_2 => Z4,
          O_1 => T4
        );
		  
	mul3: mulop PORT MAP (     --MULTIPLIER ON middle left
          I_1 => T5,
          I_2 => Z5,
          O_1 => T7
        );
		  
		  
   mul4: mulop PORT MAP (      --MULTIPLIER ON middle right
          I_1 => T8,
          I_2 => Z6,
          O_1 => T9
        );
		  
	adder1: addop PORT MAP (  --ADDER ON TOP LEFT
          I1 => X2,
          I2 => Z2,
          O => T2
        );
		  
		  
	adder2: addop PORT MAP (    --ADDER ON TOP RIGHT
          I1 => X3,
          I2 => Z3,
          O => T3
        );


	adder3: addop PORT MAP (    --ADDER ON middle RIGHT
          I1 => T6,
          I2 => T7,
          O => T8
        );
		  
	adder4: addop PORT MAP (    --ADDER ON middle left
          I1 => T7,
          I2 => T9,
          O => T10
        );
		  
	
	
	
	xor1: xorop PORT MAP (   --upper middle xor
          I1 => T1,
          I2 => T3,
          O => T5
        );
		  
	xor2: xorop PORT MAP (   --2nd line xor
          I1 => T2,
          I2 => T4,
          O => T6
        );
		  
	xor3: xorop PORT MAP (   --3rd line left xor
          I1 => T1,
          I2 => T9,
          O => Y1
        );

	xor4: xorop PORT MAP (   --3rd line right xor
          I1 => T3,
          I2 => T9,
          O => Y2
        );

	xor5: xorop PORT MAP (   --4th line left xor
          I1 => T2,
          I2 => T10,
          O => Y3
        );

	xor6: xorop PORT MAP (   --4th line right xor
          I1 => T4,
          I2 => T10,
          O => Y4
        );		  



end Behavioral;

