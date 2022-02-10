----------------------------------------------------------------------------------
-- Company: TUM MSCE VHDL
-- Engineer: Abhishek Sengupta
-- 
-- Create Date:     
-- Design Name: 
-- Module Name:    roundcounter - Behavioral 
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

use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity roundcounter is
    Port ( CLK : in  STD_LOGIC;
           START : in  STD_LOGIC;
           RESULT : in  STD_LOGIC;
           READY : out  STD_LOGIC;
           S_i : out  STD_LOGIC;
           INIT : out  STD_LOGIC;
           TRAFO : out  STD_LOGIC;
           ROUND : out  STD_LOGIC_VECTOR (3 downto 0));
end roundcounter;

architecture Behavioral of roundcounter is

type STATE_TYPE is (sleep, setup, calc);  --initialize states
signal CURRENT_STATE, NEXT_STATE:STATE_TYPE:=sleep; --state machine 1\


signal round_internal : std_logic_vector(3 downto 0) :="1000"; --round state machine





begin

-- round counter state machine
round_number_fsm: process(CLK)  
	begin
			if(rising_edge(CLK)) then
				if(round_internal/="1000") then
					if(RESULT = '1') then
						round_internal <= round_internal + 1;
					else
						round_internal <= round_internal;
					end if;
					
				elsif(round_internal = "1000") then
					if(START = '1') then
						round_internal <= "0000";
					else
						round_internal <= "1000";
					end if;
				end if;
			
			end if;
		
		
	end process;


--designing the round control state machine
clock_logic: process(CLK)
	begin
		if (rising_edge(CLK)) then
			 CURRENT_STATE <= NEXT_STATE;
		end if;
	end process;



fsm_logic: process(CURRENT_STATE, START, RESULT, round_internal)
	begin
		case CURRENT_STATE is
		
			when sleep =>
			
				INIT <='0';
				READY <= '1';
				--round_internal <= "1000";
				if (START = '1') then
					NEXT_STATE <= setup;
				else
					NEXT_STATE <= sleep;
				end if;
				
			when setup =>
			
				INIT <= '1';
				READY <= '0';	  
				NEXT_STATE <= calc;  --always goes to calc in the next clock cycle

			when calc =>
			
				INIT <= '0';
				READY <= '0';	--trivial since ready is set only when it is in sleep state which means all encry. done
				
				if (RESULT = '0') then
					NEXT_STATE <= calc;
				elsif (RESULT = '1' and round_internal = "1000") then
					next_state <= sleep;
				else
					next_state <= setup;
				end if;
				
				
		end case;
		
		
		--The signal Si for controlling the input multiplexer must be set
      --when the round counter has the value '0000'
		
		if (round_internal = "0000") then
			S_i <= '1';
		else
			S_i <= '0';
		end if;
		
	end process;

	TRAFO <= round_internal(3); --The most significant bit of the round counter can be used directly as the Trafo signal
	ROUND <= round_internal;	


end Behavioral;

