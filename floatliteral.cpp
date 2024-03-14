#include <iostream>
#include <iomanip> // for maipulators used
using namespace std;

int main() {
    double num = 245;
    int k = 56.789;
    // float ft = 34.567f;
    // long double lf = 125e8L;
    cout << "Double-precision floating-point literal: " << num << endl;
    cout << "Integer literal: " << k << endl;
    // cout << "Single-precision floating-point literal: " << ft << endl;
    // cout << "Extended-precision floating-point literal: " << lf << endl;
    
    //  Standard notation with 6 decimal places
    //  cout << "Standard notation: " << fixed << setprecision(6) << num << endl;

    //  Exponent notation with 2 decimal places
    //  cout << "Exponent notation: " << scientific << setprecision(2) << num << endl;

    return 0;
}