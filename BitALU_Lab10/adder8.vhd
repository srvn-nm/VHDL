Library ieee;
Use ieee.std_logic_1164.all;


Entity adder8 is
	port ( Cin	:	In	Std_logic;
		x,y	:	In	std_logic_vector (7 downto 0);
		r	:	Out	std_logic_vector (7 downto 0);	
		Cout	:	Out	Std_logic
);	
end adder8;

Architecture structural of adder8 is
component FullAdder
	Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           sum : out  STD_LOGIC;
           carry : out  STD_LOGIC);	
			  end component;
	signal c1, c2, c3, c4	:		Std_logic;
	signal c5, c6, c7	:		Std_logic;
	
begin
	stage0: FullAdder port map (Cin, x[0], y[0], r[0], c1);
	stage1: FullAdder port map (c1, x[1], y[1], r[1], c2);
	stage2: FullAdder port map (c2, x[2], y[2], r[2], c3);
	stage3: FullAdder port map (c3, x[3], y[3], r[3], c4);
	stage4: FullAdder port map (c4, x[4], y[4], r[4], c5);
	stage5: FullAdder port map (c5, x[5], y[5], r[5], c6);
	stage6: FullAdder port map (c6, x[6], y[6], r[6], c7);
	stage7: FullAdder port map (c7, x[7], y[7], r[7], Cout);
	
end Architecture;
