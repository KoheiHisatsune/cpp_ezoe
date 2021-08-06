gcc_options = -std=c++17 -Wall --pedantic-error
INCLUDE = -I../../include

program : numOut.cpp
	g++ $(gcc_options) $(INCLUDE) $< -o $@

run : program
	./program

clean :
	rm -f ./program

.PHONY : run clean