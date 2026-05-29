#include <iostream>
using namespace std;

int main() {

    int arr[3] = {1,2,3};
    cout<<arr<<endl; //arr gives the address of firrst element
    cout<<&arr[0]<<endl; //ouatput of arr is equal to output of &arr[0]

    for(int i=0;i<3;i++){
        cout<<"address of "<<i<<"th element of array is "<<&arr[i]<<endl;
    }
    
    //dereferencing elements of array
    for(int i=0;i<3;i++){
        cout<<"the "<<i<<"th element of the array is "<<*(arr+i)<<endl;
    }

    return 0;
}