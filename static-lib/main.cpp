#include <iostream>

void hello();
int Add(int a, int b);
int Sub(int a, int b);

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int add = Add(a, b);
    int sub = Sub(a, b);
    std::cout << add << ':' << sub << std::endl;
    hello();
}