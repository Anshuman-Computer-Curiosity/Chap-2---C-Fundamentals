#include <iostream>
using namespace std;

void foo();

int main() {
    int x = 10; // local variable inside main function
    cout << "x = " << x << endl; // x is in scope

    {
        int y = 20; // local variable inside a block
        cout << "y = " << y << endl; // y is in scope

        foo(); // calls foo function
    }

    // y is out of scope here
    // x is still in scope
    cout << "x = " << x << endl;

    return 0;
}

void foo() {
    int z = 30; // local variable inside foo function
    cout << "z = " << z << endl; // z is in scope
}