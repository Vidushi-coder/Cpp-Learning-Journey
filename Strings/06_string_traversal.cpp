#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello World";
    for (int i=0;i<str.length();i++) {
        cout<<"letter at "<<i<<"th element is "<<str[i]<<endl;
    }

    return 0;
}