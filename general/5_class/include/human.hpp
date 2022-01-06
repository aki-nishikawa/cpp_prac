#ifndef HUMAN_HPP
#define HUMAN_HPP

enum Gender{male,female};
string gender_to_string(Gender gen);

class Human {
protected:
    string name;
    Gender gender;
public:
    Human(string n, Gender gen);
    void show();
    string ret_name();
};

#endif
