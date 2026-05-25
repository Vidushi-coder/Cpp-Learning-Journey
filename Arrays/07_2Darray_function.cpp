#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    //sum of elements ofarray
    int sum = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"sum of elements of array is "<<sum<<endl;

    //average of all the elements of array
    int length = sizeof(arr)/sizeof(arr[0])*sizeof(arr[0])/sizeof(arr[0][0]);
    float avg = (float)sum/length;
    cout<<"average of elements of array is "<<avg<<endl;
    
    //maximum element
    int max = *max_element(&arr[0][0],&arr[0][0]+6);
    cout<<"maximum element of array is "<<max<<endl;

    //minimum element
    int min = *min_element(&arr[0][0],&arr[0][0]+6);
    cout<<"minimum element of array is "<<min<<endl;

    return 0;
}