#include <iostream>
using namespace std;

int main() {

    int** ptr = NULL;
    cout<<ptr<<endl; //ptr results to 0 as there is nothing stored in ptr
    cout<<*ptr<<endl; //null pointer cannot be dereferenced so it results to an error

    return 0;
}