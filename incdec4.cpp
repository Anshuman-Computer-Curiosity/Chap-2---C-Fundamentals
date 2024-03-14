#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int q =  --a + a-- + --a + --a; 
	// q =  (9) + a-- + --a + --a;
	// q =  (9) + (9) + --a + --a;
	// q =  (8) + (9) + --a + --a;  (On encountering second prefix operator, first prefix operand 	   overwritten with current value of a = 8)
	// q =  (8) + (9) + (7) + --a;  
	// q =  (8) + (9) + (7) + (6); = 30  

    
    cout<<q<<endl;
    return 0;

}   