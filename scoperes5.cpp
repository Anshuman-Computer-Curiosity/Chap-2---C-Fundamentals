//Program to refer memeber of nested class using scope resolution operator
#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "Outer class member function" << endl;
        Inner iObj;
        iObj.display();
    }

    class Inner {
    public:
        void display() {
            cout << "Inner class member function" << endl;
        }
    };
};

int main() {
    Outer oObj;
    oObj.display();
    Outer::Inner iObj; //inner class object
    iObj.display();
    return 0;
}