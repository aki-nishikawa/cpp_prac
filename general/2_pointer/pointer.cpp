#include <iostream>
using namespace std;

int main(){
    int a = 12345;
    int *p = &a;

    cout << "===================="<< endl;
    cout << " a = 12345 " << endl;
    cout << "--------------------" << endl;

    cout << "a  : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "p  : " << p << endl;
    cout << "*p : " << *p << endl;

    *p = 67890;

    cout << "\n===================="<< endl;
    cout << " *p = 67890 " << endl;
    cout << "--------------------" << endl;

    cout << "a  : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "p  : " << p << endl;
    cout << "*p : " << *p << endl;
}