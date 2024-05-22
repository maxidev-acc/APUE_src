flags = -Wall -Wextra -std=c++17
all: program
program: program.o 
	g++ -o program program.o 
program.o: program.cpp
	g++ -c $(flags) program.cpp

clean:
	rm *.o program
run: program
	./program
