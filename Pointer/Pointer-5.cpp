#include <iostream>

using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_ptr(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int i = 4, j = 6;
    swap(i, j);
    cout << "Pass by value" << endl;
    cout << "i: " << i << " j: " << j << endl;

    i = 4, j = 6; // reset i, j
    swap_ptr(&i, &j);
    cout << "Pass by pointer" << endl;
    cout << "i: " << i << " j: " << j << endl;
    return 0;
}