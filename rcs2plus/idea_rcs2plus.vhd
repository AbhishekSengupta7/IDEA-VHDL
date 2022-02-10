----------------------------------------------------------------------------------
-- Company: TUM MSCE VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:    17:37:04 02/05/2022 
-- Design Name: 
-- Module Name:    idea_rcs2plus - Behavioral 
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

entity idea_rcs2plus is
    Port ( CLOCK : in  STD_LOGIC;
           START : in  STD_LOGIC;
           KEY : in  STD_LOGIC_VECTOR (127 downto 0);
           X_1 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_2 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_3 : in  STD_LOGIC_VECTOR (15 downto 0);
           X_4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Y_1 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_2 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_3 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y_4 : out  STD_LOGIC_VECTOR (15 downto 0);
           READY : out  STD_LOGIC);
end idea_rcs2plus;

architecture Structural of idea_rcs2plus is


COMPONENT mux2x1
    PORT(
         D0 : IN  std_logic_vector(15 downto 0);
         D1 : IN  std_logic_vector(15 downto 0);
         S : IN  std_logic;
         O : OUT  std_logic_vector(15 downto 0)
        );
END COMPONENT;


COMPONENT register_16
    PORT(
         CLK : IN  std_logic;
         EN : IN  std_logic;
         D : IN  std_logic_vector(15 downto 0);
         Q : OUT  std_logic_vector(15 downto 0)
        );
END COMPONENT;


COMPONENT keygenerator
    PORT(
         KEY : IN  std_logic_vector(127 downto 0);
         ROUND : IN  std_logic_vector(3 downto 0);
         KEY1 : OUT  std_logic_vector(15 downto 0);
         KEY2 : OUT  std_logic_vector(15 downto 0);
         KEY3 : OUT  std_logic_vector(15 downto 0);
         KEY4 : OUT  std_logic_vector(15 downto 0);
         KEY5 : OUT  std_logic_vector(15 downto 0);
         KEY6 : OUT  std_logic_vector(15 downto 0)
        );
END COMPONENT;



COMPONENT clockedround
    PORT(
         CLK : IN  std_logic;
         INIT : IN  std_logic;
         TRAFO : IN  std_logic;
         X1 : IN  std_logic_vector(15 downto 0);
         X2 : IN  std_logic_vector(15 downto 0);
         X3 : IN  std_logic_vector(15 downto 0);
         X4 : IN  std_logic_vector(15 downto 0);
         Z1 : IN  std_logic_vector(15 downto 0);
         Z2 : IN  std_logic_vector(15 downto 0);
         Z3 : IN  std_logic_vector(15 downto 0);
         Z4 : IN  std_logic_vector(15 downto 0);
         Z5 : IN  std_logic_vector(15 downto 0);
         Z6 : IN  std_logic_vector(15 downto 0);
         Y1 : OUT  std_logic_vector(15 downto 0);
         Y2 : OUT  std_logic_vector(15 downto 0);
         Y3 : OUT  std_logic_vector(15 downto 0);
         Y4 : OUT  std_logic_vector(15 downto 0);
         RESULT : OUT  std_logic;
         Y1_TRAFO : OUT  std_logic_vector(15 downto 0);
         Y2_TRAFO : OUT  std_logic_vector(15 downto 0);
         Y3_TRAFO : OUT  std_logic_vector(15 downto 0);
         Y4_TRAFO : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
	 
COMPONENT roundcounter
    PORT(
         CLK : IN  std_logic;
         START : IN  std_logic;
         RESULT : IN  std_logic;
         READY : OUT  std_logic;
         S_i : OUT  std_logic;
         INIT : OUT  std_logic;
         TRAFO : OUT  std_logic;
         ROUND : OUT  std_logic_vector(3 downto 0)
        );
END COMPONENT;



Signal out_mux1 : STD_LOGIC_VECTOR (15 downto 0);
Signal out_mux2 : STD_LOGIC_VECTOR (15 downto 0);
Signal out_mux3 : STD_LOGIC_VECTOR (15 downto 0);
Signal out_mux4 : STD_LOGIC_VECTOR (15 downto 0);



Signal Register_output1 : STD_LOGIC_VECTOR (15 downto 0);
Signal Register_output2 : STD_LOGIC_VECTOR (15 downto 0);
Signal Register_output3 : STD_LOGIC_VECTOR (15 downto 0);
Signal Register_output4 : STD_LOGIC_VECTOR (15 downto 0);


Signal signalRound : STD_LOGIC_VECTOR (3 downto 0);
Signal signalSi : STD_LOGIC;
Signal signalTrafo : STD_LOGIC;
Signal signalInit : STD_LOGIC;
Signal signalResult : STD_LOGIC;


Signal signalZ1 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalZ2 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalZ3 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalZ4 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalZ5 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalZ6 : STD_LOGIC_VECTOR (15 downto 0);



--intermediate signals
Signal signalregY1 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalregY2 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalregY3 : STD_LOGIC_VECTOR (15 downto 0);
Signal signalregY4 : STD_LOGIC_VECTOR (15 downto 0);



begin



mux1: mux2x1 PORT MAP (
          D0 => Register_output1,
          D1 => X_1,
	       S => signalSi,
	       O => out_mux1
        );

mux2: mux2x1 PORT MAP (
          D0 => Register_output2,
          D1 => X_2,
	       S => signalSi,
	       O => out_mux2
        );
		  
		  
mux3: mux2x1 PORT MAP (
          D0 => Register_output3,
          D1 => X_3,
	       S => signalSi,
	       O => out_mux3
        );
		  
mux4: mux2x1 PORT MAP (
          D0 => Register_output4,
          D1 => X_4,
	       S => signalSi,
	       O => out_mux4
        );
		  
		  
Reg1: register_16 PORT MAP (
          CLK => CLOCK,
          EN => signalResult,
          D => signalregY1,
	       Q => Register_output1
        );
		  
		  
Reg2: register_16 PORT MAP (
          CLK => CLOCK,
          EN => signalResult,
          D => signalregY2,
	       Q => Register_output2
        );
		  
		  
Reg3: register_16 PORT MAP (
          CLK => CLOCK,
          EN => signalResult,
          D => signalregY3,
	       Q => Register_output3
        );


Reg4: register_16 PORT MAP (
          CLK => CLOCK,
          EN => signalResult,
          D => signalregY4,
	       Q => Register_output4
        );


Key_generator_module: keygenerator PORT MAP (
          ROUND=>signalRound,
			 KEY=>KEY,
			 KEY1=>signalZ1,
			 KEY2=>signalZ2,
			 KEY3=>signalZ3,
			 KEY4=>signalZ4,
			 KEY5=>signalZ5,
			 KEY6=>signalZ6
		 );
		 
		 
Clocked_round: clockedround PORT MAP (
          CLK=>CLOCK,
			 TRAFO => signalTrafo, 
			 INIT => signalInit, 
			 X1=>out_mux1, 
			 X2=>out_mux2, 
			 X3=>out_mux3,
			 X4=>out_mux4,
			 Z1=>signalZ1, 
			 Z2=>signalZ2, 
			 Z3=>signalZ3, 
			 Z4=>signalZ4, 
			 Z5=>signalZ5, 
			 Z6=>signalZ6,	
			 Y1=>signalregY1, 
			 Y2=>signalregY2, 
			 Y3=>signalregY3, 
			 Y4=>signalregY4,
			 RESULT=>signalResult,
			 Y1_TRAFO=>Y_1,
			 Y2_TRAFO=>Y_2,
			 Y3_TRAFO=>Y_3,
			 Y4_TRAFO=>Y_4
	    );
		 
		 
RndCounter: roundcounter PORT MAP (
          CLK =>CLOCK, 
			 START=> START, 
			 RESULT=>signalResult,
			 READY=>READY,
			 S_i=>signalSi, 
			 INIT => signalInit, 
			 TRAFO=>signalTrafo, 
			 ROUND=>signalRound
			 
		);





end Structural;

