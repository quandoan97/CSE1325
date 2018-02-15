CPPFLAGS = -Wall -O0 -g -std=c++11

test: rot13.cpp substitution.cpp test.cpp
	g++ -o test test.cpp rot13.cpp substitution.cpp
	
main: rot13.cpp substitution.cpp main.cpp
	g++ -o main main.cpp rot13.cpp substitution.cpp

clean:
	rm -f main 