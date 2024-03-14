#include <iostream>
using namespace std;

class MyClass {
public:
    int age;
    MyClass(int a) {
        age = a;
    }
};

int main() {
    MyClass obj(25);
    int MyClass::*ptr = &MyClass::age;
    cout << "Age = " << obj.*ptr << endl; // Access member using pointer to member variable
    return 0;
}