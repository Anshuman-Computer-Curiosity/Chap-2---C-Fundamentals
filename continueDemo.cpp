#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"ODD numbers from 1 to 10"<<endl;
    for(i=1; i<=10; i++){
        if(i%2 == 0)
	   	    continue; /*skip if number is even*/
	   cout<<i<<" ";
    } 
    cout<<"\nProgram ends";
    return 0;
}
