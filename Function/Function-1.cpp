#include <iostream>

using namespace std;
// using loop
long long factorial(int n){
    long long fact = 1;
    for (int i = n; i > 0; i--){
        fact *= i;
    }
    return fact;
}

int main()
{
    int N;
    cout << "Input N to calculate N!: ";
    cin >> N;
    cout << N << "! = " << factorial(N) << endl;
    return 0;
}
