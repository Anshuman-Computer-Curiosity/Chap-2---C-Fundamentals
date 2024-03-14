#include<iostream>
using namespace std;
void func(); // function declaration
int main(){
   double length = 10.5 ;// variable declaration &defintion
   {
    int y = 30;
    cout<<y<<endl;
    func();
   }
   cout<<length<<endl;
    return 0;
}
void func(){ // function definition
     int num = 50;
    cout<<num;
}