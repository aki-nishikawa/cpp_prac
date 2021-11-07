#include <iostream>

void hello();
int Add(int a, int b);
int Sub(int a, int b);

int main(int argc, char *argv[]){

    if(argc != 3)
    {
        std::cerr << std::endl << "Num augment is invalid. ";
        std::cerr << "Usage: ./program.out a b" << std::endl;
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int add = Add(a, b);
    int sub = Sub(a, b);

    std::cout << add << ':' << sub << std::endl;
    hello();
}