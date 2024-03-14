#include<iostream>
using namespace std;
int main(){
    int x = 3, y=5, z = 8;
    x+=y*=z-=5;  //Right to left associativity
	// x += y *= (z -= 5)	  [All assignement operators, same precedence, associativity : R to L]
	// x += y *= (z = z - 5)	 [Evaluating rightmost operator -=]
	// x += (y = y * (z = 8 - 5)) [On substituting z = 8, evaluating 2nd rightmost operator *=]
	// (x = x + (y = 5 * (3)))  [On substituting z = 3, evaluating += operator]
	// (x = x + (y = 15))	   [On substituting y = 15]
	// (x = 3 + (15))		  [On substituting values x = 3]
	// Therefore, z = 3 and y = 15 and x = 18

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    return 0;
}