#include <iostream>
#include <typeinfo>
#include <cxxabi.h>
using namespace std;

int main() {
    auto x = 10;
    auto y = 3.14;
    auto z = "hello";

    cout << "x is of type " << abi::__cxa_demangle(typeid(x).name(), 0, 0, nullptr) << endl;
    cout << "y is of type " << abi::__cxa_demangle(typeid(y).name(), 0, 0, nullptr) << endl;
    cout << "z is of type " << abi::__cxa_demangle(typeid(z).name(), 0, 0, nullptr) << endl;

    return 0;
}