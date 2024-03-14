#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
    int& ref = x;

    cout << "Address of x = " << &x << endl;
    cout << "Address of ref = " << &ref << endl;
    cout << "Value of ref = " << ref << endl;

    return 0;
}