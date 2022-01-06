#include<string>
#include<iostream>
#include<vector>
using namespace std;
#include "../include/human.hpp"
#include "../include/student.hpp"
#include "../include/lab.hpp"

Lab::Lab(string n,string p)
{
    name = n;
    place = p;
}

void Lab::show()
{
    cout << "\n======= " << name << " [" << place << "] =======" << endl;
    if (int(students.size() == 0)){
        cout << "No members" << endl;
        return;
    }
    for (auto student : students){
        student.show();
    }
}

void Lab::register_new_student(Student new_student)
{
    students.push_back(new_student);
    cout << "registered new student : "
         << new_student.ret_name() << endl;
}

void Lab::leave(Student leave_student){
  for (auto it = students.begin(); it != students.end();it++) {
    if ((*it).ret_name() == leave_student.ret_name()){
      students.erase(it);
      break;
    }
  }
}
