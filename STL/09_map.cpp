#include <iostream>
#include <map>
using namespace std;

int main() {

    map <string,int> m;

    // data gets sorted in the ascending order of key

    m["e"] = 1;
    m["b"] = 2;
    m["d"] = 1;
    m["c"] = 3;

    m.insert({"a",5});
    m.emplace("f",3);

    m.erase("c");

    for(pair<string,int> val : m) {
        cout<<val.first<<" "<<val.second<<endl;
    }

    // returns the count of key passed
    cout<<"count: "<<m.count("a")<<endl;

    if(m.find("d")!=m.end()) {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    //size of the map
    cout<<"size of map m: "<<m.size()<<endl;

    return 0;
}