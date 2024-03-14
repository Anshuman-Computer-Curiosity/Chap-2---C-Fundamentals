// Program to access static member of a class
#include <iostream>
using namespace std;

class A {
    public:
        static int x;
        static void display() {
            cout << "x = " << x << endl;
        }
};

int A::x = 5; //static member initialize

int main() {
    A::display();
    return 0;
}