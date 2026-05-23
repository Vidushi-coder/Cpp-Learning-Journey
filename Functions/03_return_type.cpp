#include <iostream>
using namespace std;

//int → returns integer
int sum(int a,int b){
    return a+b;
}

//float → returns decimal
float product(int a, int b){
    return a*b;
}

//void → returns nothing
void greet(){
    cout<<"Hello"<<endl;
}

int main() {

    int num1,num2;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter second number ";
    cin>>num2;

    cout<<num1<<" + "<<num2<<" = "<<sum(num1,num2)<<endl;
    cout<<num1<<" * "<<num2<<" = "<<product(num1,num2)<<endl;

    greet();

    return 0;
}