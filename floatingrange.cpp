#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    cout << "Float Properties:" << endl;
    cout << "-----------------" << endl;
    cout << "Size (bytes): " << sizeof(float) << endl;
    cout << "Minimum value: " << numeric_limits<float>::min() << endl;
    cout << "Maximum value: " << numeric_limits<float>::max() << endl;
    cout << "Precision: " << numeric_limits<float>::digits10 << endl;
    cout << "Is signed: " << numeric_limits<float>::is_signed << endl;
    cout << endl;
    
    cout << "Double Properties:" << endl;
    cout << "------------------" << endl;
    cout << "Size (bytes): " << sizeof(double) << endl;
    cout << "Minimum value: " << numeric_limits<double>::min() << endl;
    cout << "Maximum value: " << numeric_limits<double>::max() << endl;
    cout << "Precision: " << numeric_limits<double>::digits10 << endl;
    cout << "Is signed: " << numeric_limits<double>::is_signed << endl;
    cout << endl;
    
    cout << "Long Double Properties:" << endl;
    cout << "-----------------------" << endl;
    cout << "Size (bytes): " << sizeof(long double) << endl;
    cout << "Minimum value: " << numeric_limits<long double>::min() << endl;
    cout << "Maximum value: " << numeric_limits<long double>::max() << endl;
    cout << "Precision: " << numeric_limits<long double>::digits10 << endl;
    cout << "Is signed: " << numeric_limits<long double>::is_signed << endl;
    cout << endl;
    
    return 0;
}