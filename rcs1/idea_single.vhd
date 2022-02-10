----------------------------------------------------------------------------------
-- Company: TUM MSCE VHDL
-- Engineer: Abhishek Sengupta 
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    idea_single - Structural 
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

entity idea_single is
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
end idea_single;

architecture Structural of idea_single is

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
         X1 : IN  std_logic_vector(15 downto 0);  --4 inputs
         X2 : IN  std_logic_vector(15 downto 0);
         X3 : IN  std_logic_vector(15 downto 0);
         X4 : IN  std_logic_vector(15 downto 0);
         Z1 : IN  std_logic_vector(15 downto 0);  --4 keys
         Z2 : IN  std_logic_vector(15 downto 0);
         Z3 : IN  std_logic_vector(15 downto 0);
         Z4 : IN  std_logic_vector(15 downto 0);
         Y1 : OUT  std_logic_vector(15 downto 0);  --output of last output trans.
         Y2 : OUT  std_logic_vector(15 downto 0);
         Y3 : OUT  std_logic_vector(15 downto 0);
         Y4 : OUT  std_logic_vector(15 downto 0)
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
	 
COMPONENT mux2x1
    PORT(
         D0 : IN  std_logic_vector(15 downto 0);
         D1 : IN  std_logic_vector(15 downto 0);
         S : IN  std_logic;
         O : OUT  std_logic_vector(15 downto 0)
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
	 
COMPONENT control
    PORT(
         CLK : IN  std_logic;
         START : IN  std_logic;
         ROUND : OUT  std_logic_vector(3 downto 0);
         READY : OUT  std_logic;
         EN : OUT  std_logic;
         S : OUT  std_logic
        );
    END COMPONENT;

    signal en, S: std_logic;
	 signal rinput1,rinput2, rinput3, rinput4: std_logic_vector(15 downto 0); --register input
	 signal routput1,routput2, routput3, routput4: std_logic_vector(15 downto 0); --register output
	 signal muxou1,muxou2,muxou3,muxou4: std_logic_vector(15 downto 0);--mux outputs
	 signal partial_key1, partial_key2, partial_key3, partial_key4, partial_key5, partial_key6: std_logic_vector(15 downto 0);-- partial key outputs from keygen
	 signal rnd: std_logic_vector(3 downto 0);
	 


begin



   multiplexer1: mux2x1 PORT MAP (
          D0 => X_1,
          D1 => routput1,
          S => S,
          O => muxou1
        );
		  
   multiplexer2: mux2x1 PORT MAP (
          D0 => X_2,
          D1 => routput2,
          S => S,
          O => muxou2
        );

   multiplexer3: mux2x1 PORT MAP (
          D0 => X_3,
          D1 => routput3,
          S => S,
          O => muxou3
        );

   multiplexer4: mux2x1 PORT MAP (
          D0 => X_4,
          D1 => routput4,
          S => S,
          O => muxou4
        );	

   control_unit: control PORT MAP (
          CLK => CLOCK,
          START => START,
          ROUND => rnd,
          READY => READY,
          EN => en,
          S => S
        );


   key_generator: keygenerator PORT MAP (
          KEY => KEY,
          ROUND => rnd,
          KEY1 => partial_key1,
          KEY2 => partial_key2,
          KEY3 => partial_key3,
          KEY4 => partial_key4,
          KEY5 => partial_key5,
          KEY6 => partial_key6
        );	

   round_repeat: round PORT MAP (
				 X1 => muxou1,
				 X2 => muxou2,
				 X3 => muxou3,
				 X4 => muxou4,
				 Z1 => partial_key1,
				 Z2 => partial_key2,
				 Z3 => partial_key3,
				 Z4 => partial_key4,
				 Z5 => partial_key5,
				 Z6 => partial_key6,
				 Y1 => rinput1,
				 Y2 => rinput2,
				 Y3 => rinput3,
				 Y4 => rinput4
			  );		  


   register1: register_16 PORT MAP (
          CLK => CLOCK,
          EN => en,
          D => rinput1,
          Q => routput1
        );

   register2: register_16 PORT MAP (
          CLK => CLOCK,
          EN => en,
          D => rinput2,
          Q => routput2
        );
		  
   register3: register_16 PORT MAP (
          CLK => CLOCK,
          EN => en,
          D => rinput3,
          Q => routput3
        );

   register4: register_16 PORT MAP (
          CLK => CLOCK,
          EN => en,
          D => rinput4,
          Q => routput4
        );	

   output_transformation: trafo PORT MAP (
          X1 => routput1,
          X2 => routput2,
          X3 => routput3,
          X4 => routput4,
          Z1 => partial_key1,
          Z2 => partial_key2,
          Z3 => partial_key3,
          Z4 => partial_key4,
          Y1 => Y_1,
          Y2 => Y_2,
          Y3 => Y_3,
          Y4 => Y_4
        );	
end Structural;

