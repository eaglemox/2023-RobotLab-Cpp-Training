#include <iostream>

using namespace std;

int main()
{
    int x = 4;
    int *p = &x;

    cout << "x: " << x << " *p: " << *p << endl;
    *p = 5; // edit x's value by pointer
    cout << "x: " << x << " *p: " << *p << endl;
    return 0;
}