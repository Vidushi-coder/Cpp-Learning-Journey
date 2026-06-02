#include <iostream>
using namespace std;

class Student
{
public:
    string name;
};

class Teacher
{
public:
    string subject;
};

class TA : public Student, public Teacher
{
public:
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "subject: " << subject << endl;
    }
};

int main()
{

    TA t1;
    t1.name = "xyz";
    t1.subject = "computer science";
    t1.getInfo();

    return 0;
}