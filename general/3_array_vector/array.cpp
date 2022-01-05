#include <iostream>
using namespace std;

int main()
{
    int a[10];
    for(int i = 0; i < 10; i++)
    {
        a[i] = i;
    }

    cout << "start adress of array : " << a << endl;
    cout << "size of each element  : " << sizeof(a[0]) << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Address of a[" << i << "] : " << a+i
             << ", Value of a[" << i << "] : " << a[i]
             << ", Value of a[" << i << "] : " << *(a+i)
             << endl;
    }
}