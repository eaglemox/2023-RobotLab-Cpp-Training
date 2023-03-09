#include <iostream>

using namespace std;

int main()
{
    int x = 4;

    cout << "x's address: " << &x;
    cout << ", x's value: " << x << endl;
    
    // pointer declaration: type *name/ type* name
    int *x_ptr;
    // address-of operator &
    x_ptr = &x;
    cout << "x_ptr point to: " << x_ptr;
    //  dereference operator *
    cout << ", it's value is: " << *x_ptr << endl;
    return 0;
}