#include<iostream>
using namespace std;
class Base{
    public :
         virtual void display(){
            cout<<"In base class"<<endl;
        }
};
class Derived : public Base{
   public :
    void display(){
        cout<<"In derived class"<<endl;
    }
};

int main(){
    Base *bptr = new Derived();
    bptr->display();
    Derived *dptr = dynamic_cast<Derived*>(bptr);
    if(dptr!=NULL)
       dptr->display();
    else  
       cout<<"Cannot cast to base to derived"<<endl;
       delete bptr;   
    
    return 0;
}