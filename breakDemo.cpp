#include <iostream>
using namespace std;
int main()
{
   int i,j;
   for(i=1; i<5; i++){ //outer loop
	   for(j=1; j<4; j++){//Inner loop
            if(i == j){
                break; // terminate inner loop
		        cout<<"break : inner loop"<<endl;
            }
            cout<<"i = "<<i<<" j = "<<j<<endl;   
	   }
    } 
    return 0;
}
