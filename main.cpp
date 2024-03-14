#include<iostream>
#include "file1.cpp"
#include "file2.cpp"
extern int global;
extern void display();
using namespace std;
int global = 10;
int main(){
    cout<<"global"<<global;
    display();
    return 0;
}