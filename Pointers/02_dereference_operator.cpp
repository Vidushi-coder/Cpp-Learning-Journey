#include <iostream>
using namespace std;

int main() {

    int a = 21;
    int* ptra = &a;
    int** parPtr = &ptra;

    cout<<"The value of a is "<<*ptra<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of parPtr is "<<*parPtr<<endl;
    cout<<"The value of a is "<<**parPtr<<endl;


    return 0;
}