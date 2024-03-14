// Program to show use of scope resolution when member func. is defined outside the class
#include<iostream>
using namespace std;

// class definition
class MyClass {
    private:
        int num;
    public:
        MyClass(int n); // constructor declaration
        void display(); // member function declaration
};

// constructor definition
MyClass::MyClass(int n) {
    num = n;
}

// member function definition
void MyClass::display() {
    cout << "Value of num = " << num << endl;
}

// main function
int main() {
    MyClass obj(10); // create object of class MyClass
    obj.display(); // call member function
    return 0;
}