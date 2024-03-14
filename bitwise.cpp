#include<iostream>
using namespace std;
void binary(int n){
    bool negative = (n<0);
    if(negative){
        n=-n;
    }
    for(int i=31;i>=0;i--){
        int k = 1<<i;
        int j = n & k; 
        if(negative){
            negative = 0;
            cout<<1;
        }
        else{
        cout << ((j == 0) ? '0' : '1');
        }
    }
}
int main(){
    int num = -22;
    cout<<"Equivant binary equivalent = "<<endl;
    binary(num);
    return 0;
}