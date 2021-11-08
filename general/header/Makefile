gcc_options = -std=c++17 -Wall

all : main.cpp hello.cpp add.cpp sub.cpp
	g++ $(gcc_options) -o program.out $^

clean :
	rm -f ./program.out

.PHONY : clean