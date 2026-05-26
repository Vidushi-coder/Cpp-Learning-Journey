#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Vidushi";
    cout<<"The name is "<<name<<endl;
    cout<<"The name is "<<name.substr(0,4)<<endl;
    cout<<"The name is "<<name.substr(4,3)<<endl;

    return 0;
}