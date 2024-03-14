#include<iostream>
using namespace std;
#include<float.h>
int main(){
    int num =10;
    void *ptr=&num;
    int * intptr = (int *)(ptr);
    cout<< *intptr;
  
    return 0;
}