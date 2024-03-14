#include <iostream>
using namespace std;

void display(int x, int y, int z) {
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
}

int sum(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    return res;
}

int main() {
    int x = 5;
    int y = 10;
    int i = 20;
    display(x, (y=3, y++), sum(i));
    return 0;
}





