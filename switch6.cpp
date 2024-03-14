//Program to show use of object that converts to integral type in switch exp.
#include <iostream>
#include <string>
using namespace std;

class MyClass {
    private:
            string str;
    public:
            MyClass(string s) : str(s) {} // member initializer list ctor
            operator int() const { // Conversion function that converts object to int
                return str.length();
            }
};
 
int main() {
    MyClass obj("He");

    switch (obj) {
        case 1:     cout << "Length is 1" << endl;
                    break;
        case 2:     cout << "Length is 2" << endl;
                    break;
        default:    cout << "Length is not 1 or 2" << endl;
                    break;
    }
    return 0;
}