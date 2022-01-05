#ifndef HUMAN_HPP
#define HUMAN_HPP

enum Gender{male,female};
string gender_to_string(Gender gen);

class Human {
protected:
  string name;
  int age;
  Gender gender;
public:
  Human(string n, int a, Gender gen);
  void show();
};
#endif
