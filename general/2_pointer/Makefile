gcc_options = -std=c++17 -Wall

all: pointer.out reference.out new_del.out 

pointer.out: pointer.cpp
	g++ $(gcc_options) -o $@ $^

reference.out: reference.cpp
	g++ $(gcc_options) -o $@ $^

new_del.out: new_del.cpp
	g++ $(gcc_options) -o $@ $^

clean:
	rm *.out

.PHONY: all clean