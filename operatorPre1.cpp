//Program to refer memeber of nested class using scope resolution operator
#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "Outer class member function" << endl;
        
    }
    class Inner {
    public:
        void display() {
            cout << "Inner class member function" << endl;
            
        }
        class Innermost {
        public:
            int innermostMember;
            void display() {
            cout << "Innermost class member function" << endl;
            }
        };
        Innermost innerObj;
    };
    Inner inObj;
    
};    

int main() {
    Outer outObj;
    outObj.inObj.innerObj.innermostMember = 10;
    
    //inObj.innermostMember = 25;
    Outer::Inner::Innermost& inObj = outObj.inObj.innerObj ; 
    inObj.display();
    inObj.innermostMember =35;
    cout<<outObj.inObj.innerObj.innermostMember<<endl;
    
    return 0;
}