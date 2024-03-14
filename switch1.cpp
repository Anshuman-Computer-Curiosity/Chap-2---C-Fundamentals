#include<iostream>
using namespace std;
int main(){
   char oper;
   double num1,num2,result;
   cout<<"Input an operator (+, -, *, /): ";
   cin>>oper;
   cout<<"Enter two operands: ";
   cin>>num1>>num2;
   
   switch(oper) {
     case '+':  result = num1+num2; 
                break;
     case '-':  result = num1-num2; 
                break;
     case '*':  result = num1*num2; 
                break;
     case '/':  result = num1/num2; 
                break;
     default:   cout<<"Specify (+, -, *, /)operator only"<<endl;
                // no need of break; here
   }

   cout<<num1<<oper<<num2<<" = "<<result<<endl;
   return 0;
}
