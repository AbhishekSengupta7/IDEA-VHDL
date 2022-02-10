--------------------------------------------------------------------------------
-- Company: TU Munich VHDL
-- Engineer: Abhishek Sengupta
--
-- Create Date:   18:17:00 11/19/2021
-- Design Name:   
-- Module Name:   /home/ise/Xil_proj/submit/direct/tb_round.vhd
-- Project Name:  idea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: round
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
 
ENTITY tb_round IS
END tb_round;
 
ARCHITECTURE behavior OF tb_round IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT round
    PORT(
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
         Y4 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal X1 : std_logic_vector(15 downto 0) := (others => '0');
   signal X2 : std_logic_vector(15 downto 0) := (others => '0');
   signal X3 : std_logic_vector(15 downto 0) := (others => '0');
   signal X4 : std_logic_vector(15 downto 0) := (others => '0');
   signal Z1 : std_logic_vector(15 downto 0) := (others => '0');
   signal Z2 : std_logic_vector(15 downto 0) := (others => '0');
   signal Z3 : std_logic_vector(15 downto 0) := (others => '0');
   signal Z4 : std_logic_vector(15 downto 0) := (others => '0');
   signal Z5 : std_logic_vector(15 downto 0) := (others => '0');
   signal Z6 : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal Y1 : std_logic_vector(15 downto 0);
   signal Y2 : std_logic_vector(15 downto 0);
   signal Y3 : std_logic_vector(15 downto 0);
   signal Y4 : std_logic_vector(15 downto 0);

 
   constant period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: round PORT MAP (
          X1 => X1,
          X2 => X2,
          X3 => X3,
          X4 => X4,
          Z1 => Z1,
          Z2 => Z2,
          Z3 => Z3,
          Z4 => Z4,
          Z5 => Z5,
          Z6 => Z6,
          Y1 => Y1,
          Y2 => Y2,
          Y3 => Y3,
          Y4 => Y4
        );


   processtest: process
   begin		
 
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"5055";
		X4 <= x"2422";		
		Z1 <= x"1111";
		Z2 <= x"0003";
		Z3 <= x"0002";
		Z4 <= x"0000";
		Z5 <= x"0000";
		Z6 <= x"0000";
		wait for period/2; 
		
		X1 <= x"abcd";
		X2 <= x"0000";
		X3 <= x"0001";
		X4 <= x"0002";	
		Z1 <= x"0003";
		Z2 <= x"0004";
		Z3 <= x"0005";
		Z4 <= x"0006";
		Z5 <= x"0010";
		Z6 <= x"0100";
		wait for period/2;
		
		X1 <= x"ffff";
		X2 <= x"cccc";
		X3 <= x"b100";
		X4 <= x"0001";	
		Z1 <= x"0011";
		Z2 <= x"0100";
		Z3 <= x"0101";
		Z4 <= x"0110";
		Z5 <= x"5cb2";
		Z6 <= x"0000";
		wait for period/2;
		
		X1 <= x"ffff";
		X2 <= x"aaaa";
		X3 <= x"1000";
		X4 <= x"1001";		
		Z1 <= x"2d11";
		Z2 <= x"0011";
		Z3 <= x"4bcd";
		Z4 <= x"4aaa";
		Z5 <= x"0010";
		Z6 <= x"0000";
		wait for period/2;
		
		
		X1 <= x"ffff";
		X2 <= x"cccc";
		X3 <= x"b100";
		X4 <= x"0001";	
		Z1 <= x"0011";
		Z2 <= x"0011";
		Z3 <= x"4bcd";
		Z4 <= x"4aaa";
		Z5 <= x"0010";
		Z6 <= x"0000";
		wait for period/2;

		X1 <= x"ffff";
		X2 <= x"cccc";
		X3 <= x"b100";
		X4 <= x"0001";	
		Z1 <= x"0011";
		Z2 <= x"0011";
		Z3 <= x"0005";
		Z4 <= x"0006";
		Z5 <= x"0010";
		Z6 <= x"0100";
		wait for period/2;
		
   end process;

END;
