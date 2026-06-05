#include <iostream>
#include <list>
using namespace std;

int main () {

    list <int> l;

    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.emplace_front(5);

    for(int val : l) {
        cout<<val<<" ";
    }

    cout<<endl;

    // checking size and capacity
    cout<<"size of vector is: "<<l.size()<<endl;

    //printing the first and last element
    cout<<"front: "<<l.front()<<endl;
    cout<<"back: "<<l.back()<<endl;

    return 0;
}