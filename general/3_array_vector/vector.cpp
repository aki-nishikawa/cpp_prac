#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 10;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
    {
        vec[i] = i;
    }

    cout << "adress of vector : " << &vec << endl;
    cout << "size of each element   : " << sizeof(vec[0]) << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Address of a[" << i << "] : " << &vec[i]
             << ", Value of a[" << i << "] : " << vec[i]
             << endl;
    }

    vec.push_back(1111111);
    cout << "Address of a[10] : " << &vec[10];
}