#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // set stores only unique values
    cout<<"size of set is "<<s.size()<<endl; //size remains 3 as 1 is not taken twice


    for(int val : s){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}