#include <iostream>
using namespace std;

void fun()
{
    // x gets destroyed after each call so it remains 0
    int x = 0;
    cout << "x: " << x << endl;
    x++;
}

void fun1()
{
    // because of using static keyword x does not gets destroyed and so it gets updated to 1,2,3.... whenever function is called
    static int y = 0;
    cout << "y: " << y << endl;
    y++;
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    fun1();
    fun1();
    fun1();
    fun1();

    return 0;
}