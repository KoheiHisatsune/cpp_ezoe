gcc_options = -std=c++17 -Wall --pedantic-error
INCLUDE = -I../../include

bmi: bmi.cpp convert
	g++ $(gcc_options) $(INCLUDE) $< -o $@

convert : convert.cpp
	g++ $(gcc_options) $(INCLUDE) $< -o $@

run : program
	./program

clean :
	rm -f ./bmi
	rm -f ./convert

.PHONY : run clean