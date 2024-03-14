#include <iostream>
using namespace std;

class MyClass {
  public:
    int num; //data member
};

int main() {
    MyClass objA, objB;
    objA.num = 5;
    objB = objA; // obj2 is an l-value of class type in the assignment operator
    cout << objB.num << endl; // output: 5
    return 0;
}