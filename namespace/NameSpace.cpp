#include <iostream>

using namespace std;

namespace A {
    int x = 2022;
    void dog(void){
        cout << "Woof!" << endl;
    }
}

namespace B {
    int x = 2023;
    void dog(void){
        cout << "Let me do it for you." << endl;
    }
}

int main()
{
    cout << A::x << " " << B::x << endl;
    A::dog();
    B::dog();
    return 0;
}