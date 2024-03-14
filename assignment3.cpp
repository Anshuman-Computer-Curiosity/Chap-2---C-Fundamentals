#include <iostream>
using namespace std;

int& func(int& x) {//accepts ref. and returns a reference
    return x; //returning a reference variable
}

int main() {
    int num = 10;
    func(num) = 20; // l-value is a function call
    //assigns 20 to variable returned (alias of num, x)
    //so num is updated
    cout << "num = " << num << endl;
    return 0;
}