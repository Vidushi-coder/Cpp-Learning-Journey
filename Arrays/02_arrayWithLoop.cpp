#include <iostream>
using namespace std;

int main() {
    int marks[6];

    for(int i=1;i<6;i++){
        cout<<"enter the marks of "<<i<<"th student ";
        cin>>marks[i];
    }

    for(int i=1;i<6;i++){
        cout<<"the marks of "<<i<<"th student is "<<marks[i]<<endl;
    }

    return 0;
}