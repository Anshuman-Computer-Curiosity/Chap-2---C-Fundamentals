//Program to access same name class in different namespace using scope resolution oeprator
#include <iostream>

// namespace Nspace
namespace Nspace {
    class MyClass {
    public:
        void display() {
            std::cout << "This is MyClass in namespace Nspace" << std::endl;
        }
    };
}

// namespace Mspace
namespace Mspace {
    class MyClass {
    public:
        void display() {
            std::cout << "This is MyClass in namespace Mspace" << std::endl;
        }
    };
}

int main() {
    // create objects of MyClass from both namespaces
    Nspace::MyClass obj1;
    Mspace::MyClass obj2;

    // call member function display() on both objects
    obj1.display();
    obj2.display();

    return 0;
}