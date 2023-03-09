#include <iostream>

using namespace std;

int main()
{
    // Assign Operator
    int i = 0, j = 0, k = 0;
    k = 3.14;
    // (i)
    i = j = k; // assign j = k first, then i = j.
    cout << "i = j = k" << endl;
    cout << i << " " << j << " " << k << endl;
    // (ii)
    i = j = 0;
    (i = j) = k; // assign i = j first, then i = k.
    cout << "(i = j) = k" << endl;
    cout << i << " " << j << " " << k << endl;
    // (iii)
    i = j = 0;
    i = (j = k); // same as (i)
    cout << "i = (j = k)" << endl;
    cout << i << " " << j << " " << k << endl;
    return 0;
}