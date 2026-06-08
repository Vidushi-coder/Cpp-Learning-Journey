#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<string, int> m;
    m.emplace("a", 1);
    m.emplace("d", 2);
    m.emplace("c", 3);
    m.emplace("b", 4);

    for (pair<string, int> val : m)
    {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}