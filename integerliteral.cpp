#include <iostream>
using namespace std;
#include<climits>
int main() {
    unsigned long long int w = 22; // decimal literal
    cout << "integer = " << w << endl;  
    cout << "integer = " << sizeof(w) << endl; 
    cout << "integer = " << ULLONG_MAX << endl; 
    

    return 0;
}