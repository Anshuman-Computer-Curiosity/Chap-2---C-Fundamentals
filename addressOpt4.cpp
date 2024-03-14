#include <iostream>

using namespace std;

int add(int a, int b) { //overloaded function 1
    return a + b;
}

double add(double a, double b) { //overloaded function 2
    return a + b;
}

int main() {
    int (*f1)(int, int) = &add; // creating a reference to the int add(int, int) function
    double (*f2)(double, double) = &add; // creating a reference to the double add(double, double) function

    cout << "f1(2, 3) = " << f1(2, 3) << endl; // calling the int add(int, int) function through the reference
    cout << "f2(2.5, 3.5) = " << f2(2.5, 3.5) << endl; // calling the double add(double, double) function through the reference

    return 0;
}