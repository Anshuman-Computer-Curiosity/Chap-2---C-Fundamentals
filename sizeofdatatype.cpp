#include <iostream>
using namespace std;

int main() {
    cout << "char: " << sizeof(char) << " byte" << endl;
    cout << "signed char: " << sizeof(signed char) << " byte(s)" << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;
    cout << "short: " << sizeof(short) << " byte(s)" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" <<endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " byte(s)" << endl;
    cout << "long long: " << sizeof(long long) << " byte(s)" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " byte(s)" << endl;
    return 0;
}