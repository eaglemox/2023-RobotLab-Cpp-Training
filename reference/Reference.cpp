#include <iostream>

using namespace std;

void swap_ref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 7;
    int *p = &a;
    int &ref = a; // ref is also a itself
    cout << "a: " << a << " *p: " << *p << " ref: " << ref << endl;

    *p = 12;
    cout << "a: " << a << " *p: " << *p << " ref: " << ref << endl;

    ref++;
    cout << "a: " << a << " *p: " << *p << " ref: " << ref << endl;

    // pass by reference
    cout << "a: " << a << " b: " << b << endl;
    swap_ref(a, b);
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}