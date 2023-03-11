gcc_options = -std=c++17 -Wall

.PHONY: all
all : diectories bin/program.out

### create dilectory
diectories:
	@mkdir -p bin
	@mkdir -p lib
	@mkdir -p obj

### link
bin/program.out: obj/main.o obj/hello.o obj/add_sub.o
	g++ $(gcc_options) -o $@ $^

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
