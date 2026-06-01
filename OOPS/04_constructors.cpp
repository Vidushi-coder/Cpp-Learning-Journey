#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string subject;
    string department;

    // non-parameterized constructor
    Teacher() {
        cout<<"This is a non-parameterized constructor"<<endl;
    }

    // parameterized constructor
    Teacher(string name, string subject) {
        this->name = name;
        this->subject = subject;
        department = "Computer Science";
    }

    void getInfo() {
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"department: "<<department<<endl;
    }

    // copy constructor
    Teacher (Teacher &orgObj) {
        cout<<"I am a custom constructor"<<endl;
        this->name = orgObj.name;
        this->subject = orgObj.subject;
        this->department = orgObj.department; 
    }
};

int main()
{

    Teacher t;
    Teacher t1("xyz","c++");
    t1.getInfo();

    // default copy constructor -invoke
    // Teacher t2(t1);
    // t2.getInfo();

    // custom copy constructor
    Teacher t3(t1);
    t3.getInfo();

    return 0;
}