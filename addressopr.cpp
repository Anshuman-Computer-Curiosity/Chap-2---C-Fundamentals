#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num; // & operator is used to get the memory address of num

    cout << "The value of num = " << num << endl;
    cout << "The memory address of num = " << ptr << endl;
    cout << "The memory address of num = " << &num << endl;
    cout << "Value of num = " << *ptr << endl;

    return 0;
}