#include <iostream>
#include <new>
using namespace std;

int main() {
    int* arrptr = nullptr;
    arrptr = new (nothrow) int[8];
    if (arrptr == nullptr) {
        cout << "Memory allocation failed." << endl;
        return 0;
    }
    cout << "Memory allocation successful." << endl;
    delete[] arrptr;
    return 0;
}