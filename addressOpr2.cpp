#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int breadth;
  public:
    Rectangle(int l, int b) {  //ctor
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rObj(10, 5);
    Rectangle *ptr = &rObj;

    cout << "Area of rectangle using object = " << rObj.area() << endl;
    cout << "Area of rectangle using pointer = " << ptr->area() << endl;

    Rectangle &ref = rObj; //alias 
    cout << "Area of rectangle using reference = " << ref.area() << endl;

    return 0;
}