#include <iostream>

// prototype declaration
void hello();
int add(int a, int b);
int sub(int a, int b);

int main(int argc, char *argv[]){

    int a = 5, b = 3;
    int ans_add = add(a, b);
    int ans_sub = sub(a, b);

    hello();
    std::cout << a << " + " << b << " = " << ans_add << std::endl;
    std::cout << a << " - " << b << " = " << ans_sub << std::endl;
}

void hello(){
    std::cout << "Hello World !!" << std::endl;
    return;
}

// add b to a
int add(int a, int b){
    return a + b;
}

// substruct b from a
int sub(int a, int b){
    return a - b;
}
