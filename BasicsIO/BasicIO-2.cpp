#include <iostream>
#include <iomanip>
#define e 2.71828182845904523536

using namespace std; 

int main()
{
    cout << "-------------------Precision Control-------------------" << endl;
    cout << "Precision: 5" << endl;
    cout << "Without Fixed: " << setprecision(5) << e*100 << endl;
    // fixed to set precision for fraction part.
    cout << "With    Fixed: " << fixed << setprecision(5) << e*100 << endl;

    cout << "--------------------Fill Emptyspace--------------------" << endl;
    cout << endl << setw(55) << setfill('\\') << "Fill It!" << endl;
    return 0;
}