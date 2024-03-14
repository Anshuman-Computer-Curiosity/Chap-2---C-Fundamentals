#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 2;

    int a = (x++, y++); //assign multiple variables
    cout << "a = " << a << " x = " << x <<" y = " << y << endl;
    
    
  
    for(int i=0,j= 5; i<5; i++,j--)
       cout<<"i = "<<i<<" j = "<<j<<endl;
     
     return 0;
}