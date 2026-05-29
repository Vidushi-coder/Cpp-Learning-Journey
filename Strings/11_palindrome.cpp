#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str = "madam";
    string temp = str;
    reverse(str.begin(),str.end()); 

    if(temp==str){
        cout<<temp<<" is a palindrome word"<<endl;
    }
    else{
        cout<<temp<<" is not a palindrome word"<<endl;
    }
    return 0;
}