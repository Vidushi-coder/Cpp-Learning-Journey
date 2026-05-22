#include <iostream>
using namespace std;

int main() {

    int age;
    cout<<"Enter your age";
    cin>>age;

    switch(age)
    {
        case 12:
        cout<<"Your age is 12";
        break;

        case 18:
        cout<<"Your age is 18";
        break;

        default:
        cout<<"Invalid age";
        break;
    }

    return 0;
}