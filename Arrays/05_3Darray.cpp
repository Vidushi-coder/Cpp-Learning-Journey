#include <iostream>
using namespace std;

int main() {
    
    int arr[2][3][3] = {
        {
            {1,2,3},
            {4,5,6},
            {1,5,9}
        },
        {
            {7,8,9},
            {2,4,6},
            {2,4,3}
        },
    };

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cout<<"The value at "<<i<<","<<j<<","<<k<<" is "<<arr[i][j][k]<<endl;
            }
        }
    }

    return 0;
}