#include <iostream>

using namespace std;

int main()
{
    int StudentScore;

    cout << "Your Score: ";
    cin >> StudentScore;
    
    switch(StudentScore / 10)
    {
        case 10:
        case 9:
        case 8:
            cout << "You got an A." << endl;
            break;
        case 7:
            cout << "You got a B." << endl;
            break;
        case 6:
            cout << "You got a C." << endl;
            break;
        default:
            cout << "You Failed." << endl;
            break;
    }
    return 0;
}