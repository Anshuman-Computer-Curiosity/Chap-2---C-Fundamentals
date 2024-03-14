#include <iostream>

int main() {
    // Declare a character array with a size of 6
    char myCharArray[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    
    // Print the entire character array using a loop
    for(int i = 0; i < 6; i++) {
        std::cout << myCharArray[i];
    }
    
    std::cout << std::endl;
    
    // Print the character array as a C-string using std::cout
    std::cout << myCharArray << std::endl;
    
    return 0;
}