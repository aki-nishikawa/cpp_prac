#include <iostream>
#include <string>
using namespace std;
#include "../include/human.hpp"


Human::Human(string n, int a, Gender gen){
  name = n;
  gender = gen;
  age = a;
}

void Human::show(){
  cout << "【人間】名前:" << name << ",性別:" << gender_to_string(gender) << endl;
}

string gender_to_string(Gender gen){
  switch(gen){
    case male:
      return "男";
    case female:
      return "女";
  }
  return "その他";
}
