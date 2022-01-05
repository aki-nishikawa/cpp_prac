#ifndef STUDENT_HPP
#define STUDENT_HPP
class Student : public Human {
private:
  int score;
  string major;
public:
  Student(string n, Gender gen, int a, string m);
  string ret_name();
  void show();
  void set_score(int s);
};
#endif

