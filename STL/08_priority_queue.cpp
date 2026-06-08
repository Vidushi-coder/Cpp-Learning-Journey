#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    cout<<"size of queue q: "<<q.size()<<endl;

    while (!q.empty()) {
        cout<<q.top ()<<" ";
        q.pop();
    }

    cout<<endl;

    // printing te elements in increasing order
    priority_queue<int, vector<int>, greater<int>> q1;

    q1.push(5);
    q1.push(3);
    q1.push(10);
    q1.push(4);
    
    cout<<"size of queue q1: "<<q1.size()<<endl;

    while (!q1.empty()) {
        cout<<q1.top ()<<" ";
        q1.pop();
    }

    cout<<endl;

}