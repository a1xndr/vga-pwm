
Library IEEE;
use ieee.numeric_std.all;
use IEEE.STD_Logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity VGAdriver is
  port( clock            : in std_logic;  -- 25.175 Mhz clock
         -- for current pixel
        Red_out, Grn_out, Blu_out, H, V : out std_logic; 	
		  red, green, blue :  in std_logic_vector(3 downto 0);
		  row, column 				 :	out std_logic_vector(9 downto 0)
		  ); -- VGA drive signals

end;

architecture behaviour1 of VGAdriver is
  subtype counter is std_logic_vector(9 downto 0);
  constant D : natural := 640; -- horizontal columns: 
  constant C : natural := 16;  -- front porch: 
  constant B : natural := 96;  -- horizontal blank: 
  constant E : natural := 48;  -- rear porch: 
  constant A : natural := B + C + D + E;  -- one horizontal sync cycle: 
  
  constant R : natural := 480; -- vertical rows: 
  constant Q : natural := 10;  -- front guard: 
  constant P : natural := 2;   -- vertical blank: 
  constant S : natural := 29;  -- rear guard: 
  constant T : natural := P + Q + R + S;  -- one vertical sync cycle: 

begin

																
  process(clock)
    variable vertical, horizontal : counter;  -- define counters
	 variable depth_counter: integer range 0 to 3;
	 
  begin
    --wait until clock = '1111';
    if (clock'event and clock='1') then
		if depth_counter = 3 then
	  -- increment counters
			if  horizontal < A - 1  then
			  horizontal := horizontal + 1;
			else
			  horizontal := (others => '0');

			  if  vertical < T - 1  then -- less than oh
				 vertical := vertical + 1;
			  else
				 vertical := (others => '0');       -- is set to zero
			  end if;
			end if;
			depth_counter := 0;
		else
			depth_counter := depth_counter+1;
		end if;
  -- define H pulse
      if  horizontal >= (D + C )  and  horizontal < (D + C + B )  then
        H <= '0';
      else
        H <= '1';
      end if;

  -- define V pulse
      if  vertical >= (R + Q)  and  vertical < (R + Q + P)  then
        V <= '0';
      else
        V <= '1';
      end if;
	end if;

   row <= vertical;
   column <= horizontal;
	 

	Red_out <= red(depth_counter);
	Grn_out <= green(depth_counter);
	Blu_out <= blue(depth_counter);

  end process;

end architecture;

