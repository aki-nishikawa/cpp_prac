#include<string> 
#include<iostream>
using namespace std;
#include "../include/human.hpp" 
#include "../include/student.hpp" 

Student::Student(string n, Gender gen, int a, string m) : Human(n, a, gen){
  major = m;
}

void Student::set_score(int s){
  score = s;
}

void Student::show(){
  cout << "【生徒】名前:" << ret_name() << ",性別:" << gender_to_string(gender) << endl;
}

string Student::ret_name(){
  return name;
}
