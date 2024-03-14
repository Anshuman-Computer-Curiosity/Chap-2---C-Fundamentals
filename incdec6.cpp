#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int s =  a++ + ++a - a++ + ++a; 
	// s =  (10) + ++a - a++ + ++a;
	// s =  (10) + (12) - a++ + ++a;
	// s =  (10) + (12) - (12) + ++a;
	// s =  (10) + (12) - (12) + (13);
	// s =  (10) + (13) - (12) + (13);  (Only First prefix ++ operator result overwritten with current value of a when second prefix operator is encountered)
	// s =  24



    
    cout<<s<<endl;
    return 0;

}   