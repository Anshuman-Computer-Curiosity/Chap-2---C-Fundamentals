#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float f = 123.456f;
    double d = 123.456789;
    long double ld = 123.4567890123456789L;
    
    cout << "float f: " << f << endl;
    cout << "double d: " << d << endl;
    cout << "long double ld: " << fixed << setprecision(20) << ld << endl;
    
    return 0;
}