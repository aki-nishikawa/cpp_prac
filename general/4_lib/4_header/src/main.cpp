#include <iostream>

#include "../include/myheader.hpp"

int main(int argc, char *argv[]){

    int a = 5, b = 3;
    int add = Add(a, b);
    int sub = Sub(a, b);

    hello();
    std::cout << a << " + " << b << " = " << add << std::endl;
    std::cout << a << " - " << b << " = " << sub << std::endl;
}