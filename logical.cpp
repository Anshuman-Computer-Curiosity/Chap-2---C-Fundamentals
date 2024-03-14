#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a =3;
    double b = 7.8;
    int x = 7,y=5;
    cout<< "(true&&a<10) = " << boolalpha<<(true &&(a<10)) <<endl;  //logical AND operator
    cout<< "(a>5||b>5) = " << ((a>5)||(b>5)) <<endl;  //logical OR operator
    cout<< "!(a==3) = " << (!(a==3)) <<endl;  //logical NOT operator
    cout<<"x||y&&0 = " <<	(x||y&&0) <<endl;   
   return 0;
}