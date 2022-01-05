gcc_options = -std=c++17 -Wall

all: data sum_data.out array.out vector.out

data: 
	./create_data.sh

sum_data.out: sum_data.cpp
	g++ $(gcc_options) -o $@ $^

array.out: array.cpp
	g++ $(gcc_options) -o $@ $^

vector.out: vector.cpp
	g++ $(gcc_options) -o $@ $^

clean:
	rm *.out
	rm data

.PHONY: all clean