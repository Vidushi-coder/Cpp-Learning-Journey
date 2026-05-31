#include <iostream>
using namespace std;

class Teacher
{

private:
    double salary;
    string password;

public:
    string name;
    string dept;

    // setter
    void setSalary(double s,string p)
    {
        salary = s;
        password = p;
    }

    // getter
    double getSalary()
    {
        return salary;
    }

    // getter
    string getPassword()
    {
        return password;
    }
};

int main()
{

    Teacher t1;
    t1.name = "xyz";
    t1.dept = "Computer Science";
    t1.setSalary(25000,"xyxzw");
    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.getSalary() << endl;
    cout << t1.getPassword() << endl;

    return 0;
}