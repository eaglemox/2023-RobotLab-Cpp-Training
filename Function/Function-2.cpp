#include <iostream>

using namespace std;

long long factorial(int);

int main()
{
    int N;
    cout << "Input N to calculate N!: ";
    cin >> N;
    cout << N << "! = " << factorial(N) << endl;
    return 0;
}
// recursive method
long long factorial(int n){
    if (n > 0){
        return n * factorial(n-1);
    }
    else if (n == 0){return 1;}
}