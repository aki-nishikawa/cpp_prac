gcc_options = -std=c++17 -Wall

all : main.o hello.o add.o sub.o
	g++ $(gcc_options) -o program.out $^

main.o : main.cpp
	g++ $(gcc_options) -c main.cpp -o $@

hello.o : hello.cpp
	g++ $(gcc_options) -c hello.cpp -o $@

add.o : add.cpp
	g++ $(gcc_options) -c add.cpp -o $@

sub.o : sub.cpp
	g++ $(gcc_options) -c sub.cpp -o $@

clean :
	rm -f ./program.out
	rm -f ./*.o

.PHONY : clean