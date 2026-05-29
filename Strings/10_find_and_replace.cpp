#include <iostream>
using namespace std;

int main() {

    //finds the index of the first letter of the string
    string str1 = "Hello World";
    cout<<str1.find("World")<<endl;

    //searching from a position
    string str2 = "Hello World World";
    cout<<str2.find("World",7)<<endl;
    //Starts searching after index 7

    //replacing the word
    string str3 = "Hello World";
    str3.replace(6,5,"Cpp");
    cout<<str3;

    return 0;
}