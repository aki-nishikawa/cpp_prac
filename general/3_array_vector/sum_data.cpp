#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc != 2){
        cerr << "ERROR: num of argment is invalid" << endl;
        cerr << "USAGE: a.out inputfile_path" << endl;
        return 1;
    }

    ifstream file (argv[1]);
    string line;
    vector<int> vec;
    while (getline(file, line))
    {
        int i = stoi(line);
        vec.push_back(i);
    }

    long long sum = 0;
    for(auto &x: vec)   sum += x;

    cout << "sum is " << sum << endl;
    if(sum % 2 == 1){
        cout << "sum is odd" << endl;
    }else{
        cout << "sum is even" << endl;
    }
}