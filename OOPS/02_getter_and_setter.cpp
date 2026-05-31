#include <iostream>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    string name;
    string dept;

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{

    Teacher t1;
    t1.name = "xyz";
    t1.dept = "Computer Science";
    t1.setSalary(25000);
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.getSalary() << endl;

    return 0;
}