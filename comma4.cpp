#include <iostream>
using namespace std;
int main() {
    int i = -3;
    while (i < 4) {
        if (i++, i > 1) {
           cout << i << endl;
        }
        // ++i;
    }
    return 0;
}