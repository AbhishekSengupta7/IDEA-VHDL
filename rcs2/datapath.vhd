----------------------------------------------------------------------------------
-- Company: TUM MSCE VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:    19:37:54 01/26/2022 
-- Design Name: 
-- Module Name:    datapath - Behavioral 
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

entity datapath is

    Port ( CLK : in  STD_LOGIC;
           X1 : in  STD_LOGIC_VECTOR (15 downto 0);
           X2 : in  STD_LOGIC_VECTOR (15 downto 0);
           X3 : in  STD_LOGIC_VECTOR (15 downto 0);
           X4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z1 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z2 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z3 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z4 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z5 : in  STD_LOGIC_VECTOR (15 downto 0);
           Z6 : in  STD_LOGIC_VECTOR (15 downto 0);
           EN125 : in  STD_LOGIC;
           EN346 : in  STD_LOGIC;
           EN78 : in  STD_LOGIC;
           S : in  STD_LOGIC_VECTOR (1 downto 0);
	        S_T : in  STD_LOGIC_VECTOR (1 downto 0);
           Y1 : out  STD_LOGIC_VECTOR (15 downto 0);		  
           Y2 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y3 : out  STD_LOGIC_VECTOR (15 downto 0);
           Y4 : out  STD_LOGIC_VECTOR (15 downto 0);
	        Y1_trafo : out  STD_LOGIC_VECTOR (15 downto 0);
           Y2_trafo : out  STD_LOGIC_VECTOR (15 downto 0);
           Y3_trafo : out  STD_LOGIC_VECTOR (15 downto 0);
           Y4_trafo : out  STD_LOGIC_VECTOR (15 downto 0));


end datapath;

architecture Behavioral of datapath is

COMPONENT mulop
    PORT(
         I_1 : IN  std_logic_vector(15 downto 0);
         I_2 : IN  std_logic_vector(15 downto 0);
         O_1 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
COMPONENT addop
    PORT(
         I1 : IN  std_logic_vector(15 downto 0);
         I2 : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
	 
COMPONENT xorop
    PORT(
         I1	 : in  std_logic_vector(15 downto 0);
         I2 : in  std_logic_vector(15 downto 0);
         O : out  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
	 
	 
COMPONENT mux4x1
    PORT(
         D0 : IN  std_logic_vector(15 downto 0);
         D1 : IN  std_logic_vector(15 downto 0);
         D2 : IN  std_logic_vector(15 downto 0);
         D3 : IN  std_logic_vector(15 downto 0);
         S : IN  std_logic_vector(1 downto 0);
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
	 

	 
--initialize intermediatery signals	 
Signal out_mulop : STD_LOGIC_VECTOR (15 downto 0); --modulo multiplier output signal
Signal out_addop : STD_LOGIC_VECTOR (15 downto 0);  -- addop output signal
Signal out_xor : STD_LOGIC_VECTOR (15 downto 0);	  -- xor output signal
Signal out_mux1 : STD_LOGIC_VECTOR (15 downto 0);  --4 muxes output signal
Signal out_mux2 : STD_LOGIC_VECTOR (15 downto 0);
Signal out_mux3 : STD_LOGIC_VECTOR (15 downto 0);
Signal out_mux4 : STD_LOGIC_VECTOR (15 downto 0);
Signal register1 : STD_LOGIC_VECTOR (15 downto 0);  -- 8 regs output signal
Signal register2 : STD_LOGIC_VECTOR (15 downto 0);
Signal register3 : STD_LOGIC_VECTOR (15 downto 0);
Signal register4 : STD_LOGIC_VECTOR (15 downto 0);
Signal register5 : STD_LOGIC_VECTOR (15 downto 0);
Signal register6 : STD_LOGIC_VECTOR (15 downto 0);
Signal register7 : STD_LOGIC_VECTOR (15 downto 0);
Signal register8 : STD_LOGIC_VECTOR (15 downto 0);

begin

   --1 multiplier
	mul: mulop PORT MAP (
          I_1 => out_mux1,
          I_2 => out_mux2,
          O_1 => out_mulop
        );
	--1 adder	  
	add: addop PORT MAP (
          I1 => out_mux3,
          I2 => out_mux4,
          O => out_addop
        );
   --upper  right
	xor_1: xorop PORT MAP (  
          I1 => out_mulop,
          I2 => out_addop,
          O => out_xor
        );
	--lower left	  
	xor_2: xorop PORT MAP (
          I1 => register3,
          I2 => out_addop,
          O => Y3
        );
		  
		  
	xor_3: xorop PORT MAP (
          I1 => register2,
          I2 => out_mulop,
          O => Y2
        );
		  
	xor_4: xorop PORT MAP (
          I1 => register4,
          I2 => out_addop,
          O => Y4
        );
		  
	--lower right	  
	xor_5: xorop PORT MAP (
          I1 => register1,
          I2 => out_mulop,
          O => Y1
        );
		  
	--upper left	  
	mux1: mux4x1 PORT MAP (
          D0 => X1,
          D1 => X4,
          D2 => Z5,
	       D3 => Z6,
	       S => S,
	       O => out_mux1
        );
	--upper right	  
   mux2: mux4x1 PORT MAP (
          D0 => Z1,
          D1 => Z4,
          D2 => register5,
	       D3 => register8,
	       S => S,
	       O => out_mux2
        );		  
	--lower left
   mux3: mux4x1 PORT MAP (
          D0 => X3,
          D1 => X2,
          D2 => register6,
	       D3 => register7,
	       S => S,
	       O => out_mux3
        );
   --lower right
   mux4: mux4x1 PORT MAP (
          D0 => Z3,
          D1 => Z2,
          D2 => out_mulop,
	       D3 => out_mulop,
	       S => S_T,
	       O => out_mux4
        );	
   --named as on diagram
	Reg1: register_16 PORT MAP (
          CLK => CLK,
          EN => EN125,
          D => out_mulop,
	       Q => register1
        );
		  
	Reg2: register_16 PORT MAP (
          CLK => CLK,
          EN => EN125,
          D => out_addop,
	       Q => register2
        );
		  
	Reg3: register_16 PORT MAP (
          CLK => CLK,
          EN => EN346,
          D => out_addop,
	       Q => register3
        );
		  
		  
	Reg4: register_16 PORT MAP (
          CLK => CLK,
          EN => EN346,
          D => out_mulop,
	       Q => register4
        );
		  
		  
	Reg5: register_16 PORT MAP (
          CLK => CLK,
          EN => EN125,
          D => out_xor,
	       Q => register5
        );
		  
		  
	Reg6: register_16 PORT MAP (
          CLK => CLK,
          EN => EN346,
          D => out_xor,
	       Q => register6
        );
		  
		  
	Reg7: register_16 PORT MAP (
          CLK => CLK,
          EN => EN78,
          D => out_mulop,
	       Q => register7
        );
		  
		  
		  
	Reg8: register_16 PORT MAP (
          CLK => CLK,
          EN => EN78,
          D => out_addop,
	       Q => register8
        );
		  
   Y1_trafo<=register1;
	Y2_trafo<=register2;
	Y3_trafo<=register3;
	Y4_trafo<=register4;	  


end Behavioral;

