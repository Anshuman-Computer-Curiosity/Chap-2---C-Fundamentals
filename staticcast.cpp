#include<iostream>
using namespace std;
int main(){
     int x=10;
     double *ptr = reinterpret_cast<double *>(&x);
     cout<<*ptr;
    
    return 0;
}