#include <iostream>
using namespace std;
class Rectangle {
    
        double length;
        double width;
    public:
        Rectangle(double len, double wid) {
            length = len;
            width = wid;
        }
        double area() {
            return length * width;
        }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2(7, 3);
    cout << "Area of Rectangle 1: " << rect1.area() << endl;
    cout << "Area of Rectangle 2: " << rect2.area() << endl;
    return 0;
}