gcc_options = -std=c++17 -Wall

.PHONY: all
all : dirs bin/program.out

dirs:
	@mkdir -p obj
	@mkdir -p bin 

#　link
bin/program.out: obj/main.o
	g++ $(gcc_options) $^ -o $@

# compile
obj/main.o: src/main.cpp
	g++ $(gcc_options) -c $^ -o $@

.PHONY: clean
clean :
	rm -rf ./obj
	rm -rf ./bin
