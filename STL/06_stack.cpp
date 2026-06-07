#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"size of stack s: "<<s.size()<<endl;

    while (!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;

    s.push(1);
    s.push(2);

    stack <int> s1;
    s1.swap(s);
    cout<<"size of stack s after swapping: "<<s.size()<<endl;
    cout<<"size of stack s1: "<<s1.size()<<endl;

    return 0;
}