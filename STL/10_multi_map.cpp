#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string,int> m;
    m.emplace("a",1);
    m.emplace("b",2);
    m.emplace("a",3);
    m.emplace("b",4);
    m.emplace("a",5); 

    for(pair<string,int> val:m) {
        cout<<val.first<<" "<<val.second<<endl;
    }

    //all the keys having the given data gets deleted
    m.erase("b");
    cout<<"elements after erasing key having data b: "<<endl;
    for(pair<string,int> val:m) {
        cout<<val.first<<" "<<val.second<<endl;
    }

    //iterator is passed so that only one of the key gets deleted
    m.erase(m.find("a"));
    cout<<"elements after erasing key having data a: "<<endl;
    for(pair<string,int> val:m) {
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}