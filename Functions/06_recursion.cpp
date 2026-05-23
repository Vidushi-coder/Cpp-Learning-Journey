#include <iostream>
using namespace std;

int factorial(int a) {

    if (a==0) {
        return 1;
    }
    
    else{
        return a*factorial(a-1);
    }
    
}

int main() {
    int num;
    cout<<"enter the number";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    return 0;
}