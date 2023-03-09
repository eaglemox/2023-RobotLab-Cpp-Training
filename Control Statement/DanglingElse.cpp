#include <iostream>

using namespace std;

int main()
{
    int x = 3, y = 6;
    if(x > 5)
        if(y > 5)
            cout << "x, y > 5\n";
    else
            cout << "x <= 5\n";
    // Which is right?
    if(x > 5)
        if(y > 5)
            cout << "x, y > 5\n";
        else
            cout << "x <= 5\n";
    return 0;
}