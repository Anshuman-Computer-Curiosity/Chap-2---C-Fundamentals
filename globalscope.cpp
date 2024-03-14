
#include <iostream>
using namespace std;

int x = 10; // global variable

void print() {
    cout << "x = " << x << endl;
}

int main() {
    print(); // call print function
    cout << "x = " << x << endl; // access global variable
    return 0;
}