#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int r =  ++a + ++a + --a - --a + ++a; 
	//r =  (11) + ++a + --a - --a + ++a;
	//r =  (11) + (12) + --a - --a + ++a;
	//r =  (12) + (12) + --a - --a + ++a; (First prefix ++ operator result overwritten with second)
	//r =  (12) + (12) + (11) - --a + ++a;
	//r =  (12) + (12) + (11) - (10) + ++a;
	//r =  (12) + (12) + (11) - (10) + (11) = 36
    
    cout<<r<<endl;
    return 0;

}   