#include <iostream>
using namespace std;

int main() {

    int a =10;
    int* ptr = &a;

    // storing the address of pointer of a 
    int** parPtr = &ptr;

    cout<<"Address of ptr is "<<&ptr<<endl;
    cout<<"Address of ptr is "<<parPtr<<endl;

    return 0;
}