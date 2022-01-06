#include<string> 
#include<iostream>
using namespace std;
#include "../include/human.hpp" 
#include "../include/student.hpp" 

Student::Student(string n, Gender gen, string m) : Human(n, gen)
{
    major = m;
}

void Student::show()
{
    cout << "[Student] Name: " << name
         << ", Gender: " << gender_to_string(gender)
         << ", Major: " << major
         << endl;
}