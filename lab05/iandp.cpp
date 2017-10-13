#include <iostream>
#include <string>

using namespace std;

class Teacher {
    string name;
    int t_hours;
public:
    Teacher() : name("default"), t_hours(0) {
        cout << "Teacher Default Constructor" << endl;
    }

    Teacher(string _name, int _t_hours) : name(_name), t_hours(_t_hours) {
        cout << "Teacher Overloaded Constructor" << endl;
    }

    void change_name(string _name) {
        name = _name;
        cout << "Teacher name is now: " << name << endl;
    }

    void increment_hours(){
        ++t_hours;
        cout << "Teacher hours: " << t_hours << endl;
    }

    virtual void teach() = 0;

};


int main(int argc, char ** argv) {


    return 0;
}
