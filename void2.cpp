#include <iostream>
using namespace std;

void printMessage() {
    cout << "Hello, World!" << endl;
}

int main() {
    void (*funcPtr)() = printMessage;
    funcPtr();
    return 0;
}