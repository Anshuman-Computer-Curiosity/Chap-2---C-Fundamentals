#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int r =  --a + a++ - a-- + --a; 
	// r =  (9) + a++ - a- - + --a;
	// r =  (9) + (9) - a- - + --a;
	// r =  (10) + (9) - a- - + --a;    (Only First prefix ++ operator result overwritten with current value of a when second prefix operator is encountered)
	// r =  (10) + (9) - (10) + --a;
	// r =  (10) + (9) - (10) + (8) = 17


    
    cout<<r<<endl;
    return 0;

}   