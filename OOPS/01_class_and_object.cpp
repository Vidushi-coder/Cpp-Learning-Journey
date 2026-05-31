#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;

    void changeDept(string newDept){
        dept = newDept;
    }
};

int main()
{

    Teacher t1;
    t1.name = "xyz";
    t1.dept = "Computer Science";
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;

    t1.changeDept("Medical");
    cout<<t1.dept<<endl;
    
    return 0;
}