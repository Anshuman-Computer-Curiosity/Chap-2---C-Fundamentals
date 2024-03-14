#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

int main() {
    // char data type
    char c = 'A';
    cout << "Size of char: " << sizeof(c) << " byte" << endl;
    cout << "Minimum value of char: " << (int)numeric_limits<char>::min() << endl;
    cout << "Maximum value of char: " << (int)numeric_limits<char>::max() << endl;
    cout << "Value of c: " << c << endl << endl;

    // short int data type
    short int s = 32767;
    cout << "Size of short int: " << sizeof(s) << " bytes" << endl;
    cout << "Minimum value of short int: " << numeric_limits<short int>::min() << endl;
    cout << "Maximum value of short int: " << numeric_limits<short int>::max() << endl;
    cout << "Value of s: " << s << endl << endl;

    // int data type
    int i = -2147483647;
    cout << "Size of int: " << sizeof(i) << " bytes" << endl;
    cout << "Minimum value of int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum value of int: " << numeric_limits<int>::max() << endl;
    cout << "Value of i: " << i << endl << endl;

    // long int data type
    long int l = 9223372036854775807;
    cout << "Size of long int: " << sizeof(l) << " bytes" << endl;
    cout << "Minimum value of long int: " << numeric_limits<long int>::min() << endl;
    cout << "Maximum value of long int: " << numeric_limits<long int>::max() << endl;
    cout << "Value of l: " << l << endl << endl;

    // long long int data type
    long long int ll = -9223372036854775807;
    cout << "Size of long long int: " << sizeof(ll) << " bytes" << endl;
    cout << "Minimum value of long long int: " << numeric_limits<long long int>::min() << endl;
    cout << "Maximum value of long long int: " << numeric_limits<long long int>::max() << endl;
    cout << "Value of ll: " << ll << endl << endl;

    // unsigned int data type
    unsigned int ui = 4294967295;
    cout << "Size of unsigned int: " << sizeof(ui) << " bytes" << endl;
    cout << "Minimum value of unsigned int: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Maximum value of unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Value of ui: " << ui << endl << endl;

    // bool data type
    bool b = true;
    cout << "Size of bool: " << sizeof(b) << " byte" << endl;
    cout << "Value of b: " << boolalpha << b << endl << endl;

    return 0;
}