#include <iostream>
#include <string>
using namespace std;
#include "../include/human.hpp"

Human::Human(string n, Gender gen)
{
    name = n;
    gender = gen;
}

void Human::show()
{
    cout << "[Human] Name: " << name
         << ", Gender:" << gender_to_string(gender)
         << endl;
}

string Human::ret_name()
{
    return name;
}

string gender_to_string(Gender gen)
{
    switch(gen){
        case male:
            return "male";
        case female:
            return "female";
    }
    return "else";
}
