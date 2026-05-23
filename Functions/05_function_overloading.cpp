#include <iostream>
using namespace std;

int sum(int a,int b) {
    return a+b;
}

float sum(float a,float b) {
    return a+b;
}

int main() {
    cout<<"a+b="<<sum(2,3)<<endl;
    cout<<"a+b="<<sum(2.1f,3.3f)<<endl;
    return 0;
}