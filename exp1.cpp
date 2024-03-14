#include<iostream>
using namespace std;
int main(){
    int a=10,b=30;
    int sum = a+b;
    int *ptr = &sum;


    cout<<*ptr<<endl;
    

    return 0;
}