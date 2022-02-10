--------------------------------------------------------------------------------
-- Company: TU MUnich VHDL
-- Engineer: ABHISHEK SENGUPTA
--
-- Create Date:   07:36:24 11/18/2021
-- Design Name:   
-- Module Name:   /home/ise/Xil_proj/submit/direct/tb_xorop.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: xorop
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_xorop IS
END tb_xorop;
 
ARCHITECTURE behavior OF tb_xorop IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT xorop
    PORT(
         I1	 : in  std_logic_vector(15 downto 0);
         I2 : in  std_logic_vector(15 downto 0);
         O : out  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   signal I1, I2, O : std_logic_vector (15 downto 0);

   constant period : time := 10 ns;
	
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: xorop PORT MAP (
          I1 => I1,
          I2 => I2,
          O => O
        );

   processtest :process
   begin
		I1 <=  x"3567";
		I2 <=  x"2531";
		wait for period/2;
		I1 <=  x"3456";
		I2 <=  x"1256";
		wait for period/2;
		I1 <=  x"1111";
		I2 <=  x"2222";
		wait for period/2;
   	I1 <=  x"1234";
		I2 <=  x"4444";
		wait for period/2;
		I1 <=  x"5678";
		I2 <=  x"5638";
		wait for period/2;	
	end process;
	
END;
