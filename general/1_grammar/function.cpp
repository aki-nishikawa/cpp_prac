#include <iostream>
using namespace std;

int Add(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "a + b = " << Add(a, b) << endl;
}

int Add(int x, int y)
{
    return x + y;
}