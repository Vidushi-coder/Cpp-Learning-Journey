#include <iostream>
using namespace std;

int add(int a, int b){
    int c;
    c=a+b;
    return c;
}

int main(){

    int a,b;
    
    cout<<"Enter first number:";
    cin>>a;

    cout<<"enter second number:";
    cin>>b;

    cout<<"the sum is "<<add(a,b)<<endl;

    return 0;
}