#include <iostream>
#include <cmath>

using namespace std;

int absoluteORzero(int num) {
    if (num == 0) {
        return 0;
    } else if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

int main() {
    
    cout << "Absolute value of 6 = " <<" = " << absoluteORzero(6) << endl;
    cout << "Absolute value of -12 = " <<" = " << absoluteORzero(-12) << endl;
    return 0;
}