#include <iostream>
using namespace std;

int main() {

    //while loop
    int index = 1;
    while(index<=11){
        cout<<"We are at index "<<index<<endl;
        index=index+1;
    }

    //do...while loop
    int index1 = 1;
    do{
        cout<<"We are at index "<<index1<<endl;
        index1=index1+1;
    } while(index1>11);

    //for loop
    for(int i=1;i<=11;i++){
        cout<<"We are at index "<<i<<endl;
    }

    return 0;
}