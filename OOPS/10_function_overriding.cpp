#include <iostream>
using namespace std;

class Parent {
    public:
    void getInfo() {
        cout<<"parent class"<<endl;
    }
};

class Child : public Parent {
    public:
    void getInfo() {
        cout<<"child class"<<endl;
    }
};

int main() {

    // getInfo of child class replaces getInfo function of parent class
    Child c1;
    c1.getInfo();

    // getInfo of parent class replaces getInfo function of child class
    Parent p1;
    p1.getInfo();

    return 0;
}