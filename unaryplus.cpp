#include <iostream>
using namespace std;

int main() {
    double num = 15.58;
    cout << "Value of num = " << showpos<< num << endl;
    double *ptr = &num;
    cout << "Value of num = " << &num << endl;
    *ptr = -(*ptr);
    cout << "Value of num = " << *ptr << endl;
    return 0;
}