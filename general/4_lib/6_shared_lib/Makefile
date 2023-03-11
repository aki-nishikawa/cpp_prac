gcc_options = -std=c++17 -Wall
gcc_options_so = -std=c++17 -Wall -fPIC

.PHONY: all
all : diectories bin/program_shared.out 

### create dilectory
diectories:
	@mkdir -p bin
	@mkdir -p lib
	@mkdir -p obj

### link
bin/program_shared.out: obj/main.o lib/libmysharedlib.so
	g++ $(gcc_options) -o $@ $^

### shared library
lib/libmysharedlib.so : obj/hello.o obj/add_sub.o
	g++ $(gcc_options_so) -shared $^ -o $@

### compile each files
obj/main.o : src/main.cpp
	g++ $(gcc_options_so) -c $^ -o $@

obj/hello.o : src/hello.cpp
	g++ $(gcc_options_so) -c $^ -o $@

obj/add_sub.o : src/add_sub.cpp
	g++ $(gcc_options_so) -c $^ -o $@

.PHONY: clean
clean :
	rm -rf ./obj
	rm -rf ./lib
	rm -rf ./bin
