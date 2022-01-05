all: directories obj/human.o obj/student.o obj/lab.o obj/main.o
	g++ -Wall obj/*.o -o bin/program.out
 
directories:
	@mkdir -p obj
	@mkdir -p lib
	@mkdir -p bin

obj/student.o: src/student.cpp
	g++ $^ -c -o $@
 
obj/human.o: src/human.cpp
	g++ $^ -c -o $@
 
obj/lab.o: src/lab.cpp
	g++ $^ -c -o $@

obj/main.o: main.cpp
	g++ $^ -c -o $@

clean:
	rm -rf ./obj
	rm -rf ./lib
	rm -rf ./bin

.PHONY: all clean