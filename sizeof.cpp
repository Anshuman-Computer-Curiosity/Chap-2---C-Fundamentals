#include <iostream>
using namespace std;

struct MyStruct {
    char c;
    int i;
    double d;
};

int main() {
    cout << "Size of MyStruct: " << sizeof(MyStruct) << endl;
    return 0;
}