#include <iostream>
using namespace std;

void change1(int x)
{
    x = 50;
}

void change2(int& x)
{
    x = 50;
}

int main() {
    int a = 100;

    change1(a);
    cout << a << endl;

    change2(a);
    cout << a << endl;

    return 0;
}