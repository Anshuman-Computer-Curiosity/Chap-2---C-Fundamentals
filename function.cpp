#include <iostream>

// Function to add two integers and return the sum
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    
    // Call the add function and store the result in sum
    int sum = add(num1, num2);
    
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    
    return 0;
}