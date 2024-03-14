// Program to use of scope resolution operator with multiple inheritance
#include <iostream>
using namespace std;

class B1 {
public:
    int x;
    B1(int a) {  x = a;   }
};

class B2 {
public:
    int x;
    B2(int a) {  x = a;  }
};

class Derv2 : public B1, public B2 {
public:
    Derv2(int a, int b) : B1(a), B2(b) {} // construcotr
    void func() {
        cout << "Sum of x in B1 and B2 is " << B1::x + B2::x << endl;
    }
};

int main() {
    Derv2 d(10, 20);
    d.func();

    return 0;
}