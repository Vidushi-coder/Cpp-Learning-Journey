#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[5] = {3,2,1,4,5};

    //sum of elements 
    int sum = 0;
    for (int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements of array is "<<sum<<endl;

    //average of elements 
    int length = sizeof(arr)/sizeof(arr[0]);
    float avg = (float)sum/length;
    cout<<"Average of elements of array is "<<avg<<endl;

    //maximum element
    int max = *max_element(arr,arr+5);
    cout<<"Maximum element of array is "<<max<<endl;

    //minimum element
    int min = *min_element(arr,arr+5);
    cout<<"Minimum element of array is "<<min<<endl;

    //sorting element
    sort(arr,arr+5);
    cout<<"Element of array after sorting in ascending order is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    //reverse function
    reverse(arr,arr+5);
    cout<<"\nElement after reversal is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    //sorting element in descending order
    sort(arr,arr+5,greater<int>());
    cout<<"\nElement of array after sorting in descending order is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    //binary search gives 1 as output if element is present and 0 if not present
    //elements should be sorted in ascending order
    sort(arr,arr+5);
    cout<<"\nelement 3 found or not "<<binary_search(arr,arr+5,3)<<endl;
    cout<<"element 7 found or not "<<binary_search(arr,arr+5,7)<<endl;

    //count function
    cout<<"count of 3 in the array is "<<count(arr,arr+5,3)<<endl;

    //swapping elements of array
    swap(arr[0],arr[1]);
    cout<<"elements of array after swapping is ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    //copying elements
    int newArr[5];
    copy(arr,arr+5,newArr);
    cout<<"\nelements of new array is ";
    for(int i=0;i<5;i++) {
        cout<<newArr[i]<<" ";
    }

    //find function returns iterator or address
    cout<<"\nindex of 3 in the array is "<<find(arr,arr+5,3)<<endl;

    //filling array with same value
    fill(arr,arr+5,10);
    cout<<"Element of array with same values ";
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}