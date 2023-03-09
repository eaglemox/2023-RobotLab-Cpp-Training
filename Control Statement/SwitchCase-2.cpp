#include <iostream>

using namespace std;

int main()
{
    int StudentScore;

    cout << "Your Score: ";
    cin >> StudentScore;
    
    switch(StudentScore)
    {
        case 80 ... 100:
            cout << "You got an A." << endl;
            break;
        case 70 ... 79:
            cout << "You got a B." << endl;
            break;
        case 60 ... 69:
            cout << "You got a C." << endl;
            break;
        default:
            cout << "You Failed." << endl;
            break;
    }
    return 0;
}