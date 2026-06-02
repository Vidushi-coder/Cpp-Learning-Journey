#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollno;
};

class gradStudent : public Student
{
public:
    string researchArea;

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
        cout << "researchArea: " << researchArea << endl;
    }
};

int main()
{

    gradStudent s1;
    s1.name = "xyz";
    s1.age = 21;
    s1.rollno = 12345;
    s1.researchArea = "Quantum Physics";
    s1.getInfo();

    return 0;
}