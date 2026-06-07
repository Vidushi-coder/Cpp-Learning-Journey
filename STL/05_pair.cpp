#include <iostream>
#include <vector>
using namespace std;

int main() {

    // creation of pair
    pair <string,int> p = {"a",1};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,pair<char,int>> p1 = {2,{'b',3}};
    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl; 
    cout<<p1.second.second<<endl;   

    vector <pair<int,int>> vec = {{1,2},{3,4},{5,6}};
    vec.push_back({7,8}); // only inserts the element
    vec.emplace_back(9,10); // creates objects/pairs in-place first and then inserts them
    for(pair<int,int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}