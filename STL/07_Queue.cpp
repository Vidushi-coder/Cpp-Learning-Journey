#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"size of queue q: "<<q.size()<<endl;

    while (!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<endl;

    q.push(1);
    q.push(2);
    
    queue <int> q1;
    q1.swap(q);
    cout<<"size of queue q after swapping: "<<q.size()<<endl;
    cout<<"size of queue q1: "<<q1.size()<<endl;
    return 0;
}