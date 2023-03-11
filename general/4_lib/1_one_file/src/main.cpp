#include <iostream>

void hello(){
    std::cout << "Hello World !!" << std::endl;
    return;
}

// add b to a
int Add(int a, int b){
    return a + b;
}

// substruct b from a
int Sub(int a, int b){
    return a - b;
}

int main(int argc, char *argv[]){

    int a = 5, b = 3;
    int add = Add(a, b);
    int sub = Sub(a, b);

    hello();
    std::cout << a << " + " << b << " = " << add << std::endl;
    std::cout << a << " - " << b << " = " << sub << std::endl;
}