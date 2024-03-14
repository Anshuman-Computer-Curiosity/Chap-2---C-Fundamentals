//program to compute the factoril of a number 
#include<iostream>
using namespace std;
int main(){
   long int num;
   int fact = 1,i;
   cout<<"Enter a number = "; 
   cin>>num; 
   if(num >= 1){
		for(i=2; i<num+1; i++)
			 fact=fact*i;
   		cout<<"Factorial of "<<num<<" = "<<fact<<endl; 
   }
   else
	cout<<"Enter number greater than equal to 1"<<endl;
  return 0;
}
