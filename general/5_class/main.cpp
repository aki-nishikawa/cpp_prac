#include <iostream>
#include <string>
#include <vector> 
using namespace std;
#include "include/human.hpp"
#include "include/student.hpp"
#include "include/lab.hpp"

int main(){
  Lab westlab("westlab","25-425");
  westlab.show();
  Student nohara("nohara",male,22,"science");
  Student korosue("korosue",female,22,"science");
  Student saiton("saiton",female,22,"science");
  westlab.join(nohara);
  westlab.join(korosue);
  westlab.join(saiton);
  westlab.leave(nohara);
  westlab.change_place("25-513");
  westlab.show();
  westlab.leave(saiton);
  westlab.show();
  return 0;
}

