gcc_options = -std=c++17 -Wall
gcc_options_so = -std=c++17 -Wall -fPIC

all : bin/program_linked.out bin/program_staticlib.out bin/program_shared.out

bin/program_linked.out: main.o hello.o add.o sub.o
	g++ $(gcc_options) -o $@ $^

bin/program_staticlib.out: main.o libmylib.a
	g++ $(gcc_options) -o $@ $^

libmylib.a : hello.o add.o sub.o
	ar rc $@ $^

bin/program_shared.out: main.o libmylib.so
	g++ $(gcc_options) -o $@ $^

libmylib.so : hello.o add.o sub.o
	g++ $(gcc_options_so) -shared hello.o add.o sub.o -o libmylib.so

main.o : src/main.cpp
	g++ $(gcc_options_so) -c $^ -o $@

hello.o : src/hello.cpp
	g++ $(gcc_options_so) -c $^ -o $@

add.o : src/add.cpp
	g++ $(gcc_options_so) -c $^ -o $@

sub.o : src/sub.cpp
	g++ $(gcc_options_so) -c $^ -o $@

clean :
	rm -f ./*.out
	rm -f ./*.o
	rm -f ./*.a
	rm -f ./*.so

.PHONY : clean