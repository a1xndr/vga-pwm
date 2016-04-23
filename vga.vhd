-- VGA driver for Altera UP1 board  Rob Chapman  Feb 22, 1998

Library IEEE;
use ieee.numeric_std.all;
use IEEE.STD_Logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity VGAdrive is
  port( clock            : in std_logic;  -- 25.175 Mhz clock
         -- for current pixel
        Rout, Gout, Bout, H, V : out std_logic); -- VGA drive signals

end;

architecture behaviour1 of VGAdrive is
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
  signal row, column : std_logic_vector(9 downto 0);
  signal red, green, blue :  std_logic_vector(3 downto 0);
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
	 if column < 80  then
	 	red <= "1101";
		green <= "1101";
		blue <= "1101";
	 elsif column < 160  then
	 	red <= "1101";
		green <= "1101";
		blue <= "0010";
	 elsif column < 240  then
	 	red <= "0010";
		green <= "1101";
		blue <= "1101";
	 elsif column < 320  then
	 	red <= "0010";
		green <= "1101";
		blue <= "0010";
	 elsif column < 400  then
	 	red <= "1101";
		green <= "0010";
		blue <= "1101";
	 elsif column < 480  then
	 	red <= "1101";
		green <= "0010";
		blue <= "0010";
	 elsif column < 560  then
	 	red <= "0010";
		green <= "0010";
		blue <= "1101";
	 else 
	 	red <= "0010";
		green <= "0010";
		blue <= "0010";
    end if;

    -- mapping of the variable to the signals
     -- negative signs are because the conversion bits are reversed
   row <= vertical;
   column <= horizontal;
	 

	Rout <= red(depth_counter);
	Gout <= green(depth_counter);
	Bout <= blue(depth_counter);

  end process;

end architecture;

