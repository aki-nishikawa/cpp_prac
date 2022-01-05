#include <iostream>
using namespace std;

int main()
{
    int* p1 = new int(100);

    cout << "p1  : " << p1 << endl;
    cout << "*p1 : " << *p1 << endl;

    delete p1;
}