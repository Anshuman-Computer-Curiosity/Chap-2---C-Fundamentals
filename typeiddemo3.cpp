#include <iostream>
#include <typeinfo>
#include <cxxabi.h>

using namespace std;

class Shape { //abstract class
public:
    virtual void draw() = 0; //abstract function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle..." << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a square..." << endl;
    }
};

int main() {
    Shape *s1 = new Circle(); //allocating memory
    Shape *s2 = new Square();
    
    cout << "s1 is a " << abi::__cxa_demangle(typeid(*s1).name(), 0, 0, nullptr) << endl;
    cout << "s2 is a " << abi::__cxa_demangle(typeid(*s2).name(), 0, 0, nullptr) << endl;
    
    s1->draw();
    s2->draw();
    
    delete s1; //free memory
    delete s2;
    
    return 0;
}