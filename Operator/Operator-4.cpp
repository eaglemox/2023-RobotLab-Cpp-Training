#include <iostream>

using namespace std;

int main()
{
    // Relational Operator
    // >, <, >=, <=, ==, !=
    int i, j;
    i = 7; j = 4;
    // Return True:1 False:0
    cout << "i >  j: " << (i > j) << endl;
    cout << "i == j: " << (j == j) << endl;
    cout << "j <  4: " << (j < 4) << endl;

    // Logical Operator
    // &&, ||, !
    cout << "i > 5 && j < 5: " << (i > 5 && j < 5) << endl;
    cout << "i > 5 || j > 5: " << (i > 5 || j > 5) << endl;
    cout << "!(i > 6): " << !(i > 6) << endl;
    return 0;
}