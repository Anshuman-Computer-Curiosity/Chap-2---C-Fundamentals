#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers to divide: ";
    cin >> num1 >> num2;

    if (num2 == 0) {
        cerr << "Error: Cannot divide by zero\n";
        return 1;  // Return non-zero to indicate failure
    }

    double result = static_cast<double>(num1) / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    return 0;
}