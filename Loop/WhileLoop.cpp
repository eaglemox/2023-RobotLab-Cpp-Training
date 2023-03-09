#include <iostream>

using namespace std;

int main()
{
    int i = 0, x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << "x: ";
    // cannot initialize here
    while(i < 10){
        cout << x[i] << " ";
        i++;
    }
    cout << "\n";
    return 0;
}