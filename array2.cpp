#include <iostream>
const int SIZE = 5; // defining constant siz

int main() {
    // Declare an array of integers with a size of 5
    int myArray[SIZE];
    
    // Initialize the array elements
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    
    // Access and print each array element
    for(int i = 0; i < 5; i++) {
        std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
    }
    
    return 0;
}