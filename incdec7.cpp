#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 19, c = 13;
    int d = a++ + b++ - ++c;	//(Evaluating expression (r-value) left to right) 
	// d = 10 + b++ - ++c;		(Postfix ++ operator evaluated, a = 10 (Postfix) +1)
	// d = 10 + 19 - ++c;		(Postfix ++ operator evaluated, b = 19 (Postfix) +1)
	// d = (10 + 19) - 14		(Prefix ++ operator evaluated, c = 13 + 1 = 14(Prefix))
	// d = 29 - 14			(Arithmetic + operator evaluated, 10 + 19 = 24)
	// d = 15				(Arithmetic - operator evaluated, 29 - 14 = 15)
    cout<<d<<endl;
    return 0;

}   