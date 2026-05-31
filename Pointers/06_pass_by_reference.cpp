#include <iostream>
using namespace std;

//pass by reference
void changeA(int* ptr) {
    *ptr = 20;
}

//pass by referece using alias
void changeB(int &b) { //here & is used as alias
    b = 30;
}

int main() {

    int a = 10;
    int c = 20;
    changeA(&a);
    changeB(c);

    cout<<"inside main fnc "<<a<<endl;
    cout<<"inside main fnc "<<c<<endl;

    return 0;
}