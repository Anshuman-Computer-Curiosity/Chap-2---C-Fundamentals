//Program to show Only one constant expression may follow the keyword case. 
//However, several case labels may precede the same group of statements
#include <iostream>
using namespace std;
int main(){
  int month = 3;
  double month = 4.0; //Not float
  switch(month) {
    case 1 : 
    case 3 : 
    case 2+3 : 
    case 7 : 
    //case 15:20 : Bcoz only one const. exp follows case 
    case 8 : 
    case 10 : 
    case 12 : cout<<"31 days"<<endl; 
		  break;
    case 2+6%4 : 
    case 6 : 
    case 3*3 : 
    case 11 : cout<<"30 days"<<endl; 
		  break;
    case 2 :  cout<<"28/29 days"<<endl; 
		  break;
    default : cout<<"Enter 1-12"<<endl;
   }
     return 0;
}
