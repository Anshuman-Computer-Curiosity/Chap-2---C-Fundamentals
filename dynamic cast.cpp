#include<iostream>
using namespace std;
void display(int *p){cout<<*p;}
int main(){
    const int a = 5;
    int *ptr = const_cast<int*> (&a);
    *ptr=20;
    display(ptr);
    
    return 0;
}