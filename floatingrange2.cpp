#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    // get minimum and maximum values of float
    cout << "Minimum value of float: " << FLT_MIN << endl;
    cout << "Maximum value of float: " << FLT_MAX << endl;

    // get minimum and maximum values of double
    cout << "Minimum value of double: " << DBL_MIN << endl;
    cout << "Maximum value of double: " << DBL_MAX << endl;

    // get minimum and maximum values of long double
    cout << "Minimum value of long double: " << LDBL_MIN << endl;
    cout << "Maximum value of long double: " << LDBL_MAX << endl;

    // get number of decimal digits of float, double, and long double
    cout << "Number of decimal digits of float: " << FLT_DIG << endl;
    cout << "Number of decimal digits of double: " << DBL_DIG << endl;
    cout << "Number of decimal digits of long double: " << LDBL_DIG << endl;

    // get the minimum and maximum exponent of float, double, and long double
    cout << "Minimum exponent of float: " << FLT_MIN_EXP << endl;
    cout << "Maximum exponent of float: " << FLT_MAX_EXP << endl;
    cout << "Minimum exponent of double: " << DBL_MIN_EXP << endl;
    cout << "Maximum exponent of double: " << DBL_MAX_EXP << endl;
    cout << "Minimum exponent of long double: " << LDBL_MIN_EXP << endl;
    cout << "Maximum exponent of long double: " << LDBL_MAX_EXP << endl;

    return 0;
}