#include <iostream>

using namespace std;

int main()
{
    int *p1, *p2;
    int **p3;
    int a = 3, b = 4, c = 5;
    p1 = &b;
    p2 = &c;
    p3 = &p1;

    // quiz time!
    ++*p1;
    p1 = &a;
    **p3 = 10;
    *p2 += 3;

    cout << a << " " << b << " " << c << endl;
    return 0;
}