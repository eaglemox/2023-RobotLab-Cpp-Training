#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    // Conversion
    // Conversion when assigning value, implicit
    char a; int b; float c;
    a = b = c = 65.65;
    cout << "a = b = c = 65.65" << endl;
    cout << "c = float(65.65) => b = int(c)=65 => a = char(b) = A" << endl;
    cout << "a: " << a << " b: " << b << " c: " << c << endl;

    int i = 5, j = 3;
    cout << "-------Direct Calculation-------" << endl;
    cout << "i / j: " << i / j << "-" << typeid(i/j).name() << endl;
    // Implicit Conversion
    cout << "------Implicit Conversion-------" << endl;
    cout << "i / 3.0: " << i / 3.0 << "-" << typeid(i/3.0).name() << endl;
    cout << "5.0 /  j: " << 5.0 / j << "-" << typeid(5.0/j).name() << endl;
    // Explicit Conversion
    cout << "------Explicit Conversion-------" << endl;
    cout << "i / double(j): " << i / double(j) << "-" << typeid(i/double(j)).name() << endl;
    cout << "double(i) / j: " << double(i) / j << "-" << typeid(double(i)/j).name() << endl;
    return 0;
}