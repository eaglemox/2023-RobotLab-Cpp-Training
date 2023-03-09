#include <iostream>

using namespace std;

int main()
{
    int StudentScore;

    cout << "Your Score: ";
    cin >> StudentScore;
    
    if(StudentScore >= 60){
        cout << "You Passed!" << endl;
    }
    else{
        cout << "You Failed, see you next semester ; C" << endl;
    }

    if(StudentScore >= 80){
        cout << "You got an A." << endl;
    }
    else if(StudentScore < 80 && StudentScore >= 70){
        cout << "You got a B." << endl;
    }
    else if(StudentScore < 70 && StudentScore >= 60){
        cout << "You got a C." << endl;
    }
    return 0;
}