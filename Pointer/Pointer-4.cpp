#include <iostream>

using namespace std;
void print1(int *arr){
    cout << "arr1: ";
    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print2(int *arr){
    cout << "arr2: ";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i*3+j] << " ";
        }cout << "| ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {}, arr2[2][3] = {};
    int *ptr = nullptr;

    ptr = &arr1[2];
    // ptr+1 = &arr1[2+1]
    // ptr[2] = arr1[2+2]
    *ptr = 20;
    *(ptr+1) = 30;
    ptr[2] = 40;

    ptr = &arr2[0][0];
    *ptr = 10;
    // *++ptr = *(ptr + 1)
    *++ptr = 20;
    // ++*ptr = ++(*ptr)
    ++*ptr;
    cout << *ptr << endl;
    ptr[3] = 30;

    print1(&arr1[0]);
    print2(&arr2[0][0]);
    return 0;
}