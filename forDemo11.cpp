#include<iostream>
using namespace std;
int main(){
    for(int i=0,j=5 ; i<5&&j>0 ; i++,j-- ){
        cout<<"i = " <<i<<" j = " <<j<<endl;
    }
    cout<<"Out of for loop"<<endl;

    return 0;
}