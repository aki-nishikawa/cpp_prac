#ifndef LAB_HPP 
#define LAB_HPP
class Lab {
private:
    string name,place;
    vector<Student> students;
public:
    Lab(string name,string place);
    void change_place(string new_place);
    void join(Student new_student);
    void leave(Student leave_student);
    void show();
};
#endif
