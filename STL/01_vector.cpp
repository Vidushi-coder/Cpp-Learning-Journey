#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec; //size of vector is 0

    // inserting elements
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5);

    for(int val: vec) {
        cout<<val<<" ";
    }

    // checking size and capacity
    cout<<"\nsize of vector is: "<<vec.size()<<endl;
    cout<<"capacity of vector is: "<<vec.capacity()<<endl;

    // deleting elements
    vec.pop_back();

    cout<<"elements in vector after pop back ";

    for(int val: vec) {
        cout<<val<<" ";
    }

    // printing particular values
    cout<<"\nvalue at index 2 is "<<vec[2]<<endl;
    cout<<"value at index 2 is "<<vec.at(2)<<endl;

    //printing the first and last element
    cout<<"front: "<<vec.front()<<endl;
    cout<<"back: "<<vec.back()<<endl;

    //method2 for creating vector
    vector<int> vec1 = {6,7,8,9,10};
    for(int val: vec1) {
        cout<<val<<" ";
    }

    cout<<"\n";

    // erase and insert function
    vec1.erase(vec1.begin()+1,vec1.begin()+3); //erases all the number between the given range including the first element given in the range
    vec1.insert(vec1.begin()+2,99); //vec.insert(position,value)
    for(int val: vec1) {
        cout<<val<<" ";
    }

    cout<<"\n";

    //creating vector having same values
    vector <int> vec2(3,10);

    for(int val: vec2) {
        cout<<val<<" ";
    }

    //deleting all the elements of vector while keeping the capacity same
    vec2.clear();
    cout<<"\nsize of vector is: "<<vec2.size()<<endl;
    cout<<"capacity of vector is: "<<vec2.capacity()<<endl;
    cout<<"is vector empty: "<<vec2.empty()<<endl;

    return 0;
}