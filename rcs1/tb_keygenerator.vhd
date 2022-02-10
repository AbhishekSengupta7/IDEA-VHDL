--------------------------------------------------------------------------------
-- Company: TU MUNICH VHDL
-- Engineer: Abhishek Sengupta
--
-- Create Date:   00:28:53 01/03/2022
-- Design Name:   
-- Module Name:   /home/ise/Xil_proj/submit/rcs1/tb_keygenerator.vhd
-- Project Name:  idea_rcs1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: keygenerator
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
 
ENTITY tb_keygenerator IS
END tb_keygenerator;
 
ARCHITECTURE behavior OF tb_keygenerator IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
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
    

   --Inputs
   signal KEY : std_logic_vector(127 downto 0) := x"00010002000300040005000600070008";
   signal ROUND : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal KEY1 : std_logic_vector(15 downto 0);
   signal KEY2 : std_logic_vector(15 downto 0);
   signal KEY3 : std_logic_vector(15 downto 0);
   signal KEY4 : std_logic_vector(15 downto 0);
   signal KEY5 : std_logic_vector(15 downto 0);
   signal KEY6 : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: keygenerator PORT MAP (
          KEY => KEY,
          ROUND => ROUND,
          KEY1 => KEY1,
          KEY2 => KEY2,
          KEY3 => KEY3,
          KEY4 => KEY4,
          KEY5 => KEY5,
          KEY6 => KEY6
        );

   -- Stimulus process
   stim_proc: process
   
   begin		
      -- hold reset state for 100 ns.
		
	--	wait for 100 ns;
		ROUND <= "0000";	
		wait for 100 ns;			
			
		ROUND <= "0001";   --round 2
      wait for 100 ns;	
		
		ROUND <= "0010"; --round 3
      wait for 100 ns;	
		
		ROUND <= "0011";  --round 4
      wait for 100 ns;	

		ROUND <= "0100";  --round 5
      wait for 100 ns;			
		
		ROUND <= "0101"; --round 6
      wait for 100 ns;
		
		ROUND <= "0110";  -- round 7
      wait for 100 ns;
		
		
		ROUND <= "0111";  --round 8
      wait for 100 ns;

		ROUND <= "1000";  -- output transformation
      wait for 100 ns;

   end process;

END;
