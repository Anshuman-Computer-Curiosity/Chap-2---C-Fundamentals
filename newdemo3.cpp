#include <iostream>
using namespace std;
class Rectangle {
    private:
        int length,breadth; //data member
    public:
        Rectangle(int l,int b) : length(l),breadth(b) {}
        int calcArea() const { 
            return length*breadth;   
        }
};

int main() {
    
    Rectangle* r1ptr = new Rectangle(10,15); //dynamic object

    cout<<"Area = "<<(*r1ptr).calcArea()<<endl;

    // Delete the object created using new operator
    delete r1ptr;

    return 0;
}