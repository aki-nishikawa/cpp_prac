gcc_options = -std=c++17 -Wall

all: hello.out function.out fizzbuzz.out

hello.out: hello.cpp
	g++ $(gcc_options) -o $@ $^

function.out: function.cpp
	g++ $(gcc_options) -o $@ $^

fizzbuzz.out: fizzbuzz.cpp
	g++ $(gcc_options) -o $@ $^

clean:
	rm *.out

.PHONY: all clean