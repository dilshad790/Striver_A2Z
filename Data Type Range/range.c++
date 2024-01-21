#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Range of int: "
         << numeric_limits<int>::min() << " to "
         << numeric_limits<int>::max() << endl;

    cout << "Range of unsigned int: "
         << numeric_limits<unsigned int>::min() << " to "
         << numeric_limits<unsigned int>::max() << endl;

    cout << "Range of short: "
         << numeric_limits<short>::min() << " to "
         << numeric_limits<short>::max() << endl;

    cout << "Range of unsigned short: "
         << numeric_limits<unsigned short>::min() << " to "
         << numeric_limits<unsigned short>::max() << endl;

    cout << "Range of long: "
         << numeric_limits<long>::min() << " to "
         << numeric_limits<long>::max() << endl;

    cout << "Range of unsigned long: "
         << numeric_limits<unsigned long>::min() << " to "
         << numeric_limits<unsigned long>::max() << endl;

    cout << "Range of long long: "
         << numeric_limits<long long>::min() << " to "
         << numeric_limits<long long>::max() << endl;

    cout << "Range of unsigned long long: "
         << numeric_limits<unsigned long long>::min() << " to "
         << numeric_limits<unsigned long long>::max() << endl;

    cout << "Range of char: "
         << int(numeric_limits<char>::min()) << " to "
         << int(numeric_limits<char>::max()) << endl;

    cout << "Range of unsigned char: "
         << int(numeric_limits<unsigned char>::min()) << " to "
         << int(numeric_limits<unsigned char>::max()) << endl;

    return 0;
}
