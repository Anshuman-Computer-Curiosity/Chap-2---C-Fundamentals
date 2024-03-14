#include <iostream>
using namespace std;

int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5, y = 7;
    int result = sum(x, y);
    cout << "The sum of " << x << " and " << y << " = " << result << endl;
    return 0;
}