#include <iostream>
using namespace std;

namespace mynamespace {
    int x = 10;
    void print() {
        cout << "x = " << x << endl;
    }
}

int main() {
    mynamespace::print(); // call print function from namespace
    cout << "x = " << mynamespace::x << endl; // access variable from namespace
    return 0;
}