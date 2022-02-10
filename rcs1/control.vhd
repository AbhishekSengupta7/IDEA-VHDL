----------------------------------------------------------------------------------
-- Company: TU Munich MSCE VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    control - Behavioral 
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

entity control is
    Port ( CLK : in  STD_LOGIC;
           START : in  STD_LOGIC;
           ROUND : out  STD_LOGIC_VECTOR (3 downto 0);
           READY : out  STD_LOGIC;
           EN : out  STD_LOGIC;
           S : out  STD_LOGIC);
end control;

architecture Behavioral of control is

--STATE_TYPE defines FSM in VHDL

type STATE_TYPE is (initial, R0, R1, R2, R3, R4, R5, R6, R7, R8);

signal state_next, state_current: STATE_TYPE; --https://www.intel.com/content/www/us/en/programmable/quartu
                                              --shelp/13.0/mergedProjects/hdl/vhdl/vhdl_pro_state_machines.htm


begin

	clockstate: process(CLK, START)  --START impulse triggers the clock process
		 
		 begin
			
			if (rising_edge(CLK)) then
				 
				 state_current <= state_next;
			
			end if;
	
	end process;						  

	statelogic: process(state_current, START)
		
		begin

		case state_current is
          
			 
			 --initial state
			 when initial =>	
				ROUND <= "1000";  --as shown in the diagram
				S <= '1';
				READY <= '1';
				EN <= '0';	
				if START='1' then
					 state_next <= R0; --if signal start is 1, next state R0 comes in,
				elsif START='0' then
					 state_next <= initial;  -- if signal start is 0, the process stays in the init state
				end if;
				
				
          --next lines based on manual graph			
			 when R0 =>	
				ROUND <= "0000";  --diagram
				S <= '0';
				READY <= '0';  
				EN <= '1';
				state_next <= R1;
			
			when R1 =>	
				ROUND <= "0001";
				S <= '1';
				READY <= '0';
				EN <= '1';				
				state_next <= R2;

			when R2 =>	
				ROUND <= "0010";
				S <= '1';
				READY <= '0';
				EN <= '1';
				state_next <= R3;

			when R3 =>	
				ROUND <= "0011";
				S <= '1';
				READY <= '0';
				EN <= '1';
				state_next <= R4;

			when R4 =>	
				ROUND <= "0100";
				S <= '1';
				READY <= '0';
				EN <= '1';
				state_next <= R5;
				
			when R5 =>	
				ROUND <= "0101";
				S <= '1';
				READY <= '0';
				EN <= '1';
				state_next <= R6;
				
			when R6 =>	
				ROUND <= "0110";
				S <= '1';
				READY <= '0';
				EN <= '1';
				state_next <= R7;
		
			when R7 =>	
				ROUND <= "0111";
				S <= '1';
				READY <= '0';
				EN <= '1';
				state_next <= R8;

			when R8 =>	
				ROUND <= "1000";
				S <= '1';
				READY <= '1';
				EN <= '0';				
				state_next <= initial;  --repeats 1000 twice in tb
				 
		
		end case;
	end process;
end Behavioral;

