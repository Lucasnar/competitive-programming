file=1010
debug:
	g++ $(file).cpp -o $(file).exe -g -ansi -pedantic -Wall -Wno-long-long
	./$(file).exe < input | diff - output
