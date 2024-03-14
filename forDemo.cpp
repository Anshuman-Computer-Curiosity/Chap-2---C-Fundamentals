#include<iostream>
using namespace std;
int main(){
    
    for(int i=0;i<5;i++ ){
        if(i==3)
            continue;//iteration miss for i=3
        cout<<"i = " <<i<<endl;
        
    }
    cout<<"Out of for loop"<<endl;
    return 0;
}