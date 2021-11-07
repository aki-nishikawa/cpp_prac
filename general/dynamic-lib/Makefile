gcc_options = -std=c++17 -Wall
gcc_options_so = -std=c++17 -Wall -fPIC

all : main.o libmylib.so
	g++ $(gcc_options) -o program.out $^

libmylib.so : hello.o add.o sub.o
	g++ $(gcc_options_so) -shared hello.o add.o sub.o -o libmylib.so

main.o : main.cpp
	g++ $(gcc_options_so) -c main.cpp -o $@

hello.o : hello.cpp
	g++ $(gcc_options_so) -c hello.cpp -o $@

add.o : add.cpp
	g++ $(gcc_options_so) -c add.cpp -o $@

sub.o : sub.cpp
	g++ $(gcc_options_so) -c sub.cpp -o $@

clean :
	rm -f ./program.out
	rm -f ./*.o
	rm -f ./*.so

.PHONY : clean