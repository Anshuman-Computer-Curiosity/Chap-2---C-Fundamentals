#include<iostream>
using namespace std;
int main(){
    
    int x = -5 + 8 % 3; //	(expression (r-value) left to right)
	// x = ((-5)+ 8 % 3)(Evaluating unary operator - as it has highest precedence among these) 		x = ((-5)+ (8 % 3))(Evaluating binary operator %  as it has higher precedence than +)
	// x = ((-5)+(2))	(+ operator applied on result)
	// x = -3	(r-value -3 assigned (Evaluating to l-value x when assignment operator works)
    
    cout<<"x = "<<x<<endl;
    return 0;
}