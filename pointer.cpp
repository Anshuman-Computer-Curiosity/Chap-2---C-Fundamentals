#include <iostream>

int main() {
    int x = 5;
    const int* ptr = &x;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
    
    x = 10;
    std::cout << "New value of x: " << x << std::endl;
    std::cout << "New value pointed to by ptr: " << *ptr << std::endl;
    
    // ptr = nullptr; // This line will cause an error, as ptr is a const pointer
    
    return 0;
}