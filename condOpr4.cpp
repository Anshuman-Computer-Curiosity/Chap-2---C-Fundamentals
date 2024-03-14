#include <iostream>
using namespace std;

class Point {
    int x, y; //data members
public:
    Point(int a = 0, int b = 0) : x(a), y(b){ }  //ctor
    bool operator > (Point p) {    // overloaded > operator
        return (x * x + y * y) > (p.x * p.x + p.y * p.y);
    }
    void display() {
        cout << "(" << x << "," << y << ")";
    }
};

int main() {
    Point p1(6, 8), p2(7, 5);
    Point p3 = (p1 > p2) ? p1 : p2;
    cout << "The greater point is: ";
    p3.display();
    return 0;
}