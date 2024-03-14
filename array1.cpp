#include <iostream>
#include <array>
using namespace std;
int main() {
    // Declare an array of integers with a size of 3 using std::array
    array<int, 3> myArray = {1, 2, 3};
    
    // Access and print each array element
    for(int i = 0; i < myArray.size(); i++) {
        cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
    }
    
    return 0;
}