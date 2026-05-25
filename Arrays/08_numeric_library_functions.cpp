#include <iostream>
#include <numeric>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};

    // sum of elements
    cout<<"sum of elements of array is "<<accumulate(arr,arr+5,0)<<endl;

    // finding cumulative sum
    partial_sum(arr,arr+5,arr);
    cout<<"array with cumulative sum of its elements is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    // difference between neighbouring elements
    adjacent_difference(arr,arr+5,arr);
    cout<<"\narray with adjacent difference of its elements is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    // filling sequential values using iota function
    iota(arr,arr+5,10);
    cout<<"\narray after adding 10 to each of its elements is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    //dot product
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    cout<<"\nDot Product is "<<inner_product(a,a+3,b,0);

    return 0;
}