#include <iostream>
using namespace std;

int main() {

    string Name = "Vidushi Gupta";
    cout<<"Name:"<<Name<<endl;

    //camelCase notation
    int marksInMaths = 100;
    cout<<"Marks:"<<marksInMaths<<endl;

    float score = 43.257;
    score = 56.9;
    cout<<"Score is:"<<score<<endl;

    string const grade = "A+";
    // grade = "A";
    // if we use const we cannot change the value of the variable
    cout<<"Grade is "<<grade<<endl;
    
    return 0;
}