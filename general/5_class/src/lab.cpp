#include<string>
#include<iostream>
#include<vector>
using namespace std;
#include "../include/human.hpp"
#include "../include/student.hpp"
#include "../include/lab.hpp"

Lab::Lab(string n,string p){
  name = n;
  place = p;
}

void Lab::show(){
  cout << "=======" << name << "[" << place << "]=======\n" << "【メンバー】" << endl;
  if (int(students.size() == 0)){
    cout << "まだ誰もいません" << endl;
    return;
  }
  for (auto student : students){
    student.show();
  }
}

void Lab::change_place(string new_place){
  cout << place <<"から" << new_place << "に移動します" << endl;
  place = new_place;
}

void Lab::join(Student new_student){
  cout << new_student.ret_name() << "という名前の人が入ってきました" << endl;
  students.push_back(new_student);
}

void Lab::leave(Student leave_student){
  for (auto it = students.begin(); it != students.end();it++) {
    if ((*it).ret_name() == leave_student.ret_name()){
      students.erase(it);
      break;
    }
  }
}
