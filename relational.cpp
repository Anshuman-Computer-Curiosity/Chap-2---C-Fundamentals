#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a = 2.3, b = 7.8;

    cout<< "(a<b) =" <<boolalpha<< (a<b) <<endl;  //less than operator
    cout<< "(a<=b) = " << (a<=b) <<endl;  //less than or equal to operator
    cout<< "(a>b) = " << (a>b) <<endl;  //greater than operator
    cout<< "(a>=b) = " << (a>=b) <<endl;  //greater than or equal to operator
    cout<< "(a==b) = " << (a==b)<<endl; //equality
    cout<< "(a!=b) = " << (a!=b)<<endl; //not equal to

    return 0;
}