#include <iostream>
using namespace std;

class Parent {
    public:
    void getInfo() {
        cout<<"parent class"<<endl;
    }

    virtual void hello() {
        cout<<"parent"<<endl;
    }
};

class Child : public Parent {
    public:
    void getInfo() {
        cout<<"child class"<<endl;
    }

    void hello() {
        cout<<"child"<<endl;
    }
};

int main() {

    Child c1;
    c1.hello();

    return 0;
}