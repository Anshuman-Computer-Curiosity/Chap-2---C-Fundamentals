//Program to show use of nested switch
#include <iostream>
using namespace std;
int main() {
    int category,subcategory;
    cout<<"Enter stream (1.Arts\t2.Science\t3.Commerce): ";
    cin>>category;
    switch(category)  {
        case 1: 
                cout<<"Arts Stream"<<endl;
                break;
        case 2: 
                cout<<"Enter substream (1.Computer\t2.Medical) : "<<endl;
		        cin>>subcategory;
		        switch(subcategory){
		            case 1: 
                            cout<<"Science - Computer stream"<<endl; 
                            break;
		            case 2: cout<<"Science - Medical stream"<<endl;
                            break;
		            default: cout<<"Science - Others stream"<<endl;
                             break;
		        }
		        break;	
        case 3 : 
                cout<<"Commerce Stream"<<endl; 
                break;
        default:  
                cout<<"Specify 1-3 only"<<endl;
   }
   return 0;
}