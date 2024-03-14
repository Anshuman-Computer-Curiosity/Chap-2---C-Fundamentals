#include<iostream>
using namespace std;
int main(){
    const int a=10;
    cout<<a<<endl;

    #define b 20
    cout<<b<<endl;

    enum {c=30};
    cout<<c;

    return 0;
}