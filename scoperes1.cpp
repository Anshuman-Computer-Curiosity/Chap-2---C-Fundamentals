//Program to show local, global and namespace scope variable with same name
#include<iostream>
using namespace std;

namespace Nspace{		
		int x = 5; 			  
} 				   		  
	int x=20; 	//Global declarartion			
 	int main(){	
				 
	  int x = 10; 		//local declartion		  
	  cout<<x<<endl;//Local 		   	  
	
	  cout<<::x<<endl;//Global namesp.  
	  cout<<Nspace::x<<endl;//namespace	
      return 0;				  
    }


