#ifndef LAB_HPP 
#define LAB_HPP

class Lab {
private:
    string name,place;
    vector<Student> students;
public:
    Lab(string name, string place);
    //void register_new_student();
    void register_new_student(Student new_student);
    void leave(Student leave_student);
    void show();
};

#endif