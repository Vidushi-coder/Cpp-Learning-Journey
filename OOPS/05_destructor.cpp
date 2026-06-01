#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // destructor
    ~Student()
    {
        // normal data and attributed gets automatically deleted after creating destructor
        cout << "I am a destructor" << endl;
        delete cgpaPtr; // delete keyword is used to delete the memory space created by pointers
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{

    Student s1("Vidushi Gupta", 9.9);
    s1.getInfo();

    return 0;
}