#include<iostream>
using namespace std;
int main(){
    int a = 50, b=40, c = 30;
    if(a>b){
            if(a>c){
                cout<<"A greatest = "<<a<<endl;
            }else{
                cout<<"C greatest = "<<c<<endl;
            }
    }
    else{
        if(b>c){
                cout<<"B greatest = "<<b<<endl;
            }else{
                cout<<"C greatest = "<<c<<endl;
            }
    }        
    
    return 0;
}