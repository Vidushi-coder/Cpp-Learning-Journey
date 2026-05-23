#include <iostream>
using namespace std;

int sum(int a, int b=3) {
    return a+b;
}

int main() {
    cout<<"a + b is "<<sum(3)<<endl;
    return 0;
}