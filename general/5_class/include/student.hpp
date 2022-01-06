#ifndef STUDENT_HPP
#define STUDENT_HPP

class Student : public Human {
private:
    string major;
public:
    Student(string n, Gender gen, string m);
    void show();
};

#endif

