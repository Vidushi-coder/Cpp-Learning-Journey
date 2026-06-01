#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        cout<<"parent constructor"<<endl;
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        this->rollno = rollno;
        cout<<"child constructor"<<endl;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }
};

int main()
{

    Student s1("xyz", 21, 12345);
    s1.getInfo();

    return 0;
}