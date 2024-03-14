#include <iostream>
using namespace std;

int x = 10; // global variable

class MyClass {
public:
    int y = 20; // member variable
    void print() {
        cout << "x = " << x << endl; // x is in scope
        cout << "y = " << y << endl; // y is in scope
    }
};

int main() {
    MyClass obj;
    obj.print();
    return 0;
}