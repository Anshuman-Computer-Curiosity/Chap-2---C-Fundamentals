#include <iostream>
using namespace std;
int main() {
    int numArray[] = {10, 20, 30, 40, 50};
    
    for (const auto &elem : numArray) { //for (const auto &elem : numArray) {
        cout << elem << " "; // Print the value 
        
    }
    cout << endl;
    
    return 0;
}