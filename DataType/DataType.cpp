#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    cout << "-------------------Size of Datatype-------------------" << endl;
    cout << setw(12) << "char: " << sizeof(char) << " byte." << endl;
    cout << setw(12) << "bool: " << sizeof(bool) << " byte." << endl;
    cout << setw(12) << "int: " << sizeof(int) << " bytes." << endl;
    cout << setw(12) << "long long: " << sizeof(long long) << " bytes." << endl;
    cout << setw(12) << "float: " << sizeof(float) << " bytes." << endl;
    cout << setw(12) << "double: " << sizeof(double) << " bytes." << endl;

    cout << "-------------------Range of Datatype-------------------" << endl;
    cout << setw(12) << "char: " << setw(20) << int(numeric_limits<char>::min()) << " ~ " << int(numeric_limits<char>::max()) << endl;
    cout << setw(12) << "bool: " << setw(20) << numeric_limits<bool>::min() << " ~ " << numeric_limits<bool>::max() << endl;
    cout << setw(12) << "int: " << setw(20) << numeric_limits<int>::min() << " ~ " << numeric_limits<int>::max() << endl;
    cout << setw(12) << "long long: " << setw(20) << numeric_limits<long long>::min() << " ~ " << numeric_limits<long long>::max() << endl;
    cout << setw(12) << "float: " << setw(20) << numeric_limits<float>::min() << " ~ " << numeric_limits<float>::max() << endl;
    cout << setw(12) << "double: " << setw(20) << numeric_limits<double>::min() << " ~ " << numeric_limits<double>::max() << endl;
    return 0;
}