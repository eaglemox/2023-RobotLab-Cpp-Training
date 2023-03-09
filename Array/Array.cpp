#include <iostream>

using namespace std;

int main()
{
    // Different array initialization method
    int a[5];
    int b[5] = {3, 45, 71, 13, 26};
    int c[5] = {};
    int d[5] = {1};
    
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++){
        cout << c[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 5; i++){
        cout << d[i] << " ";
    }
    cout << endl;
    return 0;
}