#include <iostream>
#include "func.h"
#include "func.cpp"

using namespace std;

int main()
{
    cout << "5 % 3 = " << mod(5, 3) << endl;
    cout << "2^6 = " << pow(2, 6) << endl;
    cout << "6! = " << factorial(6) << endl;
    return 0;
}