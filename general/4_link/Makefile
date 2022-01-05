gcc_options = -std=c++17 -Wall
gcc_options_so = -std=c++17 -Wall -fPIC

all : diectories bin/program_linked.out bin/program_staticlib.out bin/program_shared.out 

### create dilectory
diectories:
	@mkdir -p bin
	@mkdir -p lib
	@mkdir -p obj

### link
bin/program_linked.out: obj/main.o obj/hello.o obj/add_sub.o
	g++ $(gcc_options) -o $@ $^

### static library
bin/program_staticlib.out: obj/main.o lib/libmystaticlib.a
	g++ $(gcc_options) -o $@ $^

lib/libmystaticlib.a : obj/hello.o obj/add_sub.o
	ar rc $@ $^

### shared library
bin/program_shared.out: obj/main.o lib/libmysharedlib.so
	g++ $(gcc_options) -o $@ $^

lib/libmysharedlib.so : obj/hello.o obj/add_sub.o
	g++ $(gcc_options_so) -shared $^ -o $@

### compile each files
obj/main.o : src/main.cpp
	g++ $(gcc_options_so) -c $^ -o $@

obj/hello.o : src/hello.cpp
	g++ $(gcc_options_so) -c $^ -o $@

obj/add_sub.o : src/add_sub.cpp
	g++ $(gcc_options_so) -c $^ -o $@

clean :
	rm -rf ./obj
	rm -rf ./lib
	rm -rf ./bin

.PHONY : all clean