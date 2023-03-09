#include <iostream>

using namespace std;

int main()
{
    int i = 0, x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // while loop
    cout << "x: ";
    while(i > 0 && i < 10){
        cout << x[i] << " ";
        i++;
    }
    cout << "\n";
    // do while Loop
    i = 0; // reset i
    cout << "x: ";
    do{
        cout << x[i] << " ";
        i++;
    }while(i > 0 && i < 10);
    cout << "\n";
    return 0;
}