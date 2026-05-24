#include <iostream>
using namespace std;

int main() {

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    cout<<"Number of rows in array is "<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<"Number of columns in array is "<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    cout<<"Number of elements in array is "<<sizeof(arr)/sizeof(arr[0])*sizeof(arr[0])/sizeof(arr[0][0])<<endl;

    return 0;
}