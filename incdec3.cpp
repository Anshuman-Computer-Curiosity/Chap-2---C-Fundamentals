#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int p = ++a + a++ + --a;
    // p = (11) + a++ + --a		(Leftmost prefix ++ operator evaluated, a = 11)
	// p = (11) + (11) + --a	(Postfix ++ operator evaluated , a = 11+1)  
	// p = (12) + (11) + --a  	(Only First prefix ++ operator result overwritten with current value of a when second prefix operator is encountered)
	// p = (12) + (11) + (11)	(Prefix - - operator evaluated , a = 12-1)  
	// p = 34				(r-value 34 assigned to l-value p when assignment operator works 


    cout<<p<<endl;
    return 0;

}   