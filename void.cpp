#include <iostream>

int main() {
    int num = 10;
    
    
    
    // Example 2: Using a void expression in a conditional expression
    bool isGreaterThanFive = (num > 5) ? true : throw std::runtime_error("num is not greater than 5");
    std::cout << "isGreaterThanFive: " << isGreaterThanFive << std::endl;
    
    return 0;
}