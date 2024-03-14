#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int p = ++a + ++a + ++a;
    //p = (11) + ++a + ++a		(Leftmost prefix increment operator evaluated, a = 11)
	//p = (11) + (12) + ++a		(Next prefix increment operator evaluated, a = 11+1)  
	//p = (12) + (12) + ++a		(First prefix ++ operator result overwritten with second)
	//p = (12) + (12) + (13)	(Third prefix ++ operator evaluated, a = 12+1 )    
	//p = 37				(r-value 37 assigned to l-value p when assignment operator works 

    cout<<p<<endl;
    return 0;

}   