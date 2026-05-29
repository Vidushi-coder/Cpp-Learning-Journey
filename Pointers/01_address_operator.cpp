#include <iostream>
using namespace std;

int main() {

    // printing the address of a
    int a = 21;
    int* ptra;
    ptra = &a;
    cout<<"The address of a is "<<ptra<<endl;
    cout<<"The address of a is "<<&a<<endl;

    return 0;
}