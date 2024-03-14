#include <iostream>
using namespace std;

int main() {
    int *ptr;
    ptr = new int;//allocates memory
    *ptr = 10;
    cout << "Value pointed to by ptr = " << *ptr << endl;
    delete ptr; //deallocates memory
    return 0;
}