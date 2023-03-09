#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 0;
    // In(De)crement Operator
    cout << "++i: " << ++i << " j++: " << j++ << endl;
    cout << "i: " << i << " j: " << j << endl;
    // Compound Assignment Operator
    // a += b equal a = a + b
    i *= 2;
    j += 3;
    cout << "i: " << i << " j: " << j << endl;
    i *= j;
    cout << "i: " << i << " j: " << j << endl;
    // Modulo Operator
    cout << "i % 3 = " << i << " % 3 = " << i % 3 << endl;
    return 0;
}