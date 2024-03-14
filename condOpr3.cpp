//Program to calculate absolute value of a number
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int abs_val = (num >= 0) ? num : -num;
    
    cout << "The absolute value of " << num << " is " << abs_val << endl;
    return 0;
}