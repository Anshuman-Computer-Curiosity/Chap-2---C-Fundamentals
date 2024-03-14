#include <iostream>
using namespace std;

int main() {
   
    double d = 2.71828; // double-precision floating-point literal
    double e = 02475; // treated as decimal
    double f = 0xFace; 

    double g = 0765.4; // treated as decimal
   // double h = 0xFace.4; 

    cout << "Double-precision floating-point literal: " << g << endl;
    
    float ft = 3.14159f; // single-precision floating-point literal
    cout << "Single-precision floating-point literal: " << ft << endl;

    long double ld = 1.61803l; // extended-precision floating-point literal  
    cout << "Extended-precision floating-point literal: " << ld << endl;

    return 0;
}