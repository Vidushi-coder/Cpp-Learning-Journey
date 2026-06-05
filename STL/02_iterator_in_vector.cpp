#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec = {1,2,3,4,5};
    cout<<"vector begin: "<<*(vec.begin())<<endl;
    cout<<"vector end: "<<*(vec.end())<<endl;

    //iterators
    vector <int> :: iterator itr;
    for(itr=vec.begin();itr!=vec.end();itr++){
        cout<<*(itr)<<" ";
    }

    cout<<endl;

    //reverse iterator
    vector <int> :: reverse_iterator itr1;
    for(itr1=vec.rbegin();itr1!=vec.rend();itr1++){
        cout<<*(itr1)<<" ";
    }

    cout<<endl;


    return 0;
}