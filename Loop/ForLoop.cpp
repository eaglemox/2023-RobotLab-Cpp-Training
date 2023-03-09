#include <iostream>

using namespace std;

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "x: ";
    // int: 4bytes, x: 4*10 bytes, x[0]: 4 bytes
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); x[i] = 0, i++){
        cout << x[i] << " ";
    }
    cout << "\n";
    // print again
    cout << "x: ";
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++){
        cout << x[i] << " ";
    }
    cout << "\n";  
    return 0;
}