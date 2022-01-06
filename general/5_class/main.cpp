#include <iostream>
#include <string>
#include <vector> 
using namespace std;
#include "include/human.hpp"
#include "include/student.hpp"
#include "include/lab.hpp"

int main(){

    Lab westlab("westlab", "25-501");

    Student nohara("nohara", male ,"network");
    westlab.register_new_student(nohara);

    westlab.show();
    return 0;
}

