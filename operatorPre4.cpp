#include<iostream>
using namespace std;
int main(){
    
    int a = 3*3/2+5/5+7-3+4/8;  //		(Evaluating expression (r-value) left to right)	
	// a = (3*3)/2 + 5/5 + 7- 3 + 4/8 (arithmetic operators *,/ have highest precedence in group)
	// a = (9/2) + (5/5) + 7- 3 + (4/8)(After * operator, / operator evaluated - left to right)
	// a = (4) + (5/5) + 7- 3 + (4/8)(Evaluating / operator, left to right)	
	// a = (4) + (1) + 7- 3 + (4/8)	(Evaluating / operator, left to right)	
	// a = (4) + (1) + 7- 3 + (0)	(Evaluating / operator, left to right)
	// a = 4 + 1 + 7- 3 + 0		(arithmetic operators +,- evaluated next, left to right)
	// a = (4 + 1) + 7- 3 + 0	(arithmetic operator + evaluated left to right)
	// a = (5 + 7) - 3 + 0		(arithmetic operator + evaluated left to right)
	// a = (12 - 3) + 0		(arithmetic operator - evaluated left to right)
	// a = (9 + 0)		(arithmetic operator + evaluated left to right)
	// a = 9			(r-value -9 assigned to l-value a when assignment operator works)



    cout<<"a = "<<a<<endl;
    return 0;
}