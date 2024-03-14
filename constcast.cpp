#include<iostream>
using namespace std;
class MyClass{
    private : int num;
    public:
       MyClass(int n){   num = n;  }
       int getNum() const{ // constanr member function 
        return num;
       }
       void setNum(int b){ num = b;} //non-const member function
};

int main(){
    const MyClass cObj(500);//const object
    MyClass &obj = const_cast<MyClass &>(cObj);
    obj.setNum(820); // calling non-const mem. func from cons object
    cout<<cObj.getNum()<<endl;
    
    MyClass cObj2(415);//non- const object
    cout<<cObj2.getNum()<<endl;
    cObj2.setNum(720);
    cout<<cObj2.getNum()<<endl;

    return 0;
}