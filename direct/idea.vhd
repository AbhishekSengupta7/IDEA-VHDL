----------------------------------------------------------------------------------
-- Company: TUM VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    idea - Structural 
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

entity idea is
    Port ( KEY : in  STD_LOGIC_VECTOR (127 downto 0);
           X_1 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_2 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_3 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Y_1 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_2 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_3 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_4 : out  STD_LOGIC_VECTOR (15 downto 0));
end idea;

architecture Structural of idea is

COMPONENT round
    PORT(
         X1 : IN  std_logic_vector(15 downto 0);  --4 inputs
         X2 : IN  std_logic_vector(15 downto 0);
         X3 : IN  std_logic_vector(15 downto 0);
         X4 : IN  std_logic_vector(15 downto 0);
         Z1 : IN  std_logic_vector(15 downto 0);  --6 keys
         Z2 : IN  std_logic_vector(15 downto 0);
         Z3 : IN  std_logic_vector(15 downto 0);
         Z4 : IN  std_logic_vector(15 downto 0);
         Z5 : IN  std_logic_vector(15 downto 0);
         Z6 : IN  std_logic_vector(15 downto 0);
         Y1 : OUT  std_logic_vector(15 downto 0); -- output of 8th round module
         Y2 : OUT  std_logic_vector(15 downto 0);
         Y3 : OUT  std_logic_vector(15 downto 0);
         Y4 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
	 
COMPONENT trafo
    PORT(
         X1 : IN  std_logic_vector(15 downto 0);
         X2 : IN  std_logic_vector(15 downto 0);
         X3 : IN  std_logic_vector(15 downto 0);
         X4 : IN  std_logic_vector(15 downto 0);
         Z1 : IN  std_logic_vector(15 downto 0);
         Z2 : IN  std_logic_vector(15 downto 0);
         Z3 : IN  std_logic_vector(15 downto 0);
         Z4 : IN  std_logic_vector(15 downto 0);
         Y1 : OUT  std_logic_vector(15 downto 0);
         Y2 : OUT  std_logic_vector(15 downto 0);
         Y3 : OUT  std_logic_vector(15 downto 0);
         Y4 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;

type arrayofkeys is array(51 downto 0) of std_logic_vector(15 downto 0);
signal keyarray : arrayofkeys; --arraz of 52 partial keys that we generate

--initialiye 4 signals for each round module. 8 round modules x 4 , so 32 signals.
signal out_1_1, out_1_2, out_1_3, out_1_4, out_2_1, out_2_2, out_2_3, out_2_4, out_3_1, out_3_2, out_3_3, out_3_4, out_4_1, out_4_2, out_4_3, out_4_4, out_5_1, out_5_2, out_5_3, out_5_4, out_6_1, out_6_2, out_6_3, out_6_4, out_7_1, out_7_2, out_7_3, out_7_4, out_8_1, out_8_2, out_8_3, out_8_4: std_logic_vector(15 downto 0);  


begin
	
keygeneration : process(KEY)

variable input_key : std_logic_vector(127 downto 0) ;
variable index: integer range 0 to 51;

begin


index :=0;
input_key := KEY;

key_generation_byrotation: for a in 0 to 5 loop   --6 rounds of generating 8 keys
	keygencycle: for b in 0 to 7 loop   --generating 8 keys
	--in last 2 lines 8x6, total 48 kezs generated for 8 rounds*6 kezs each round*
			keyarray(index) <= input_key(127-(b*16) downto 127-((b+1)*16-1));
			index := index + 1;
		end loop keygencycle;
		input_key := input_key(102 downto 0) & input_key(127 downto 103);   --rotation
	end loop key_generation_byrotation;
	
	
trafogencycle : for a in 0 to 3 loop
	keyarray(index) <= input_key(127-(a*16) downto 127-((a+1)*16-1));
	index := index + 1;   --index starts from 48
	end loop trafogencycle;
end process;

	round1: round PORT MAP (
          X1 => X_1,--initial inputs
			 X2 => X_2,
			 X3 => X_3,
			 X4 => X_4,
			 Y1 => out_1_1,
			 Y2 => out_1_2,
			 Y3 => out_1_3,
			 Y4 => out_1_4,
			 Z1 => keyarray(0),
			 Z2 => keyarray(1),
			 Z3 => keyarray(2),
			 Z4 => keyarray(3),
			 Z5 => keyarray(4),
			 Z6 => keyarray(5)
			 
        );
		  
	 round2: round PORT MAP (
          X1 => out_1_1,
			 X2 => out_1_2,
			 X3 => out_1_3,
			 X4 => out_1_4,
			 Y1 => out_2_1,
			 Y2 => out_2_2,
			 Y3 => out_2_3,
			 Y4 => out_2_4,
			 Z1 => keyarray(6),
			 Z2 => keyarray(7),
			 Z3 => keyarray(8),
			 Z4 => keyarray(9),
			 Z5 => keyarray(10),
			 Z6 => keyarray(11)
			 
        );
		  
	round3: round PORT MAP (
          X1 => out_2_1,
			 X2 => out_2_2,
			 X3 => out_2_3,
			 X4 => out_2_4,
			 Y1 => out_3_1,
			 Y2 => out_3_2,
			 Y3 => out_3_3,
			 Y4 => out_3_4,
			 Z1 => keyarray(12),
			 Z2 => keyarray(13),
			 Z3 => keyarray(14),
			 Z4 => keyarray(15),
			 Z5 => keyarray(16),
			 Z6 => keyarray(17)
			 
        );
		  
	round4: round PORT MAP (
          X1 => out_3_1,
			 X2 => out_3_2,
			 X3 => out_3_3,
			 X4 => out_3_4,
			 Y1 => out_4_1,
			 Y2 => out_4_2,
			 Y3 => out_4_3,
			 Y4 => out_4_4,
			 Z1 => keyarray(18),
			 Z2 => keyarray(19),
			 Z3 => keyarray(20),
			 Z4 => keyarray(21),
			 Z5 => keyarray(22),
			 Z6 => keyarray(23)
			 
        );
		  
	round5: round PORT MAP (
          X1 => out_4_1,
			 X2 => out_4_2,
			 X3 => out_4_3,
			 X4 => out_4_4,
			 Y1 => out_5_1,
			 Y2 => out_5_2,
			 Y3 => out_5_3,
			 Y4 => out_5_4,
			 Z1 => keyarray(24),
			 Z2 => keyarray(25),
			 Z3 => keyarray(26),
			 Z4 => keyarray(27),
			 Z5 => keyarray(28),
			 Z6 => keyarray(29)
			 
        );
		  
		  
	round6: round PORT MAP (
          X1 => out_5_1,
			 X2 => out_5_2,
			 X3 => out_5_3,
			 X4 => out_5_4,
			 Y1 => out_6_1,
			 Y2 => out_6_2,
			 Y3 => out_6_3,
			 Y4 => out_6_4,
			 Z1 => keyarray(30),
			 Z2 => keyarray(31),
			 Z3 => keyarray(32),
			 Z4 => keyarray(33),
			 Z5 => keyarray(34),
			 Z6 => keyarray(35)
			 
        );
		  
		  
	round7: round PORT MAP (
          X1 => out_6_1,
			 X2 => out_6_2,
			 X3 => out_6_3,
			 X4 => out_6_4,
			 Y1 => out_7_1,
			 Y2 => out_7_2,
			 Y3 => out_7_3,
			 Y4 => out_7_4,
			 Z1 => keyarray(36),
			 Z2 => keyarray(37),
			 Z3 => keyarray(38),
			 Z4 => keyarray(39),
			 Z5 => keyarray(40),
			 Z6 => keyarray(41)
			 
        );
		  
		  
	round8: round PORT MAP (
          X1 => out_7_1,
			 X2 => out_7_2,
			 X3 => out_7_3,
			 X4 => out_7_4,
			 Y1 => out_8_1,
			 Y2 => out_8_2,
			 Y3 => out_8_3,
			 Y4 => out_8_4,
			 Z1 => keyarray(42),
			 Z2 => keyarray(43),
			 Z3 => keyarray(44),
			 Z4 => keyarray(45),
			 Z5 => keyarray(46),
			 Z6 => keyarray(47)
			 
        );
		  
		  
	outputtransformation: trafo PORT MAP (
          X1 => out_8_1,
			 X2 => out_8_2,
			 X3 => out_8_3,
			 X4 => out_8_4,
			 Y1 => Y_1,
			 Y2 => Y_2,
			 Y3 => Y_3,
			 Y4 => Y_4,
			 Z1 => keyarray(48),
			 Z2 => keyarray(49),
			 Z3 => keyarray(50),
			 Z4 => keyarray(51)		 
			 
        );
	  

end Structural;

