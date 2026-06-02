#include <iostream>
using namespace std;

class Person {
    public:
    string name;
};

class Student : public Person {
    public:
    int age;
};

class Teacher : public Person {
    public:
    string subject;
};

int main() {

    Student s1;
    s1.age = 21;
    s1.name = "xyz";

    Teacher t1;
    t1.subject = "CS";
    t1.name = "abc";

    cout<<"name: "<<s1.name<<endl;
    cout<<"age: "<<s1.age<<endl;
    cout<<"name: "<<t1.name<<endl;
    cout<<"subject: "<<t1.subject<<endl;

    return 0;
}