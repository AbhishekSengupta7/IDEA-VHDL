--------------------------------------------------------------------------------
-- Company: TU Munich VHDL
-- Engineer: Abhishek Sengupta
--
-- Create Date:   18:46:43 11/18/2021
-- Design Name:   
-- Module Name:   /home/ise/Xil_proj/submit/direct/tb_addop.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: addop
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
use IEEE.std_logic_unsigned.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_addop IS
END tb_addop;
 
ARCHITECTURE behavior OF tb_addop IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT addop
    PORT(
         I1 : IN  std_logic_vector(15 downto 0);
         I2 : IN  std_logic_vector(15 downto 0);
         O : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs

   signal I1 : std_logic_vector(15 downto 0) := (others => '0');

   signal I2 : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs

   signal O : std_logic_vector(15 downto 0);
   
	
	constant period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
	-- Instantiate the Unit Under Test (UUT)
   uut: addop PORT MAP (
          I1 => I1,
          I2 => I2,
          O => O
        );

   -- Clock process definitions
   process2 :process
   begin
	
		I1 <= x"5cf1";
		I2 <= x"5ac4";
		wait for period/2;
		I1 <= x"5ac4";
		I2 <= x"0101";
		wait for period/2;
		I1 <= x"2cb4";
		I2 <= x"5cb3";
		wait for period/2;
		I1 <= x"2cb2";
		I2 <= x"5cf1";
		wait for period/2;
		I1 <= x"6245";
		I2 <= x"2333";
		wait for period/2;
		
   end process;
 

END;





