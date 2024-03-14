#include <iostream>
using namespace std;

int main() {
    int ch = 10; 
    double *ptr = static_cast<double *>(&ch);
    cout << "The value of wch is: " << *ptr << endl;
    return 0;
}




