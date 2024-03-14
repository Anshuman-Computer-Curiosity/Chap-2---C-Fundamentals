#include <iostream>
using namespace std;
class MyClass {
  public:
    int num;
  
    void display() {
      cout << "Value of number = " << num<< endl;
    }
 
};
int main() {
  MyClass myObj2 = MyClass(); //static object  
  
  MyClass *myObj = new MyClass(); //dynamic object
  (*myObj).num = 525;  //arrow operator
  myObj2.num = 720;

  myObj->display();
  myObj2.display(); // acccess operattor

  delete myObj;
  return 0;
}