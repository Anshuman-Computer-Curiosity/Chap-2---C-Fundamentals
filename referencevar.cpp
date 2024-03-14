#include <iostream>
using namespace std;

void increment(int& num) {
    num++;
}

int main() {
    int num = 10;
    int& ref = num;
    cout << "num: " << num << endl; // Output: num: 10
    cout << "ref: " << ref << endl; // Output: ref: 10

    increment(num);

    cout << "num after increment: " << num << endl; // Output: num after increment: 11
    cout << "ref after increment: " << ref << endl; // Output: ref after increment: 11

    return 0;
}