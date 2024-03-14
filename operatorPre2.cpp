#include<iostream>
using namespace std;
int main(){
    int x = 9, y=6, z = 7;
    int s = --x * (3 + y)/2 - z++ * y;//	(Evaluating expression (r-value) left to right)	
	// s = --x * (3 + y)/2 - z++ * y 	(Evaluating parentheses in the expression) 
	// s = --x * (9)/2 - z++ * y	(Substituting y = 6) 
	// s = --x * 9/2 - (z++) * y  	(Evaluating postfix operator ++ as highest precedence) 		s = --x * 9/2 - (7) * y  	(Since z = 7 so z++ will put 7 but later z = 8 ) 
	// s = (--x) * 9/2 - 7 * y  	(Evaluating prefix operator) 	
	// s = (8) * 9/2 - 7 * y  		(Since x = 9 so after --x will put 8 as x = 9-1 = 8) 
	// s = (8 * 9)/2 - 7 * y  	(Arithmetic * and / same precedence, associativity : Left to Right) 		s = ((72)/2) - 7 * y 		(Leftmost * evaluated then arithmetic / evaluated) 		s = 36 - (7 * y)  		(Arithmetic * has higher precedence than -) 	
	// s = 36 - (42)  			( y = 6 substituted) 	
	// s = -6 				(Arithmetic - evaluated )
	// s = -6 			(r-value -6 assigned to l-value s when assignment operator works) 
    cout<<s<<endl;
    return 0;
}