#include <iostream>
using namespace std;

// abstract class
class Shape
{                            
    virtual void draw() = 0; // pure virtual function
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Square" << endl;
    }
};

int main()
{
    Square s1;
    s1.draw();
    return 0;
}