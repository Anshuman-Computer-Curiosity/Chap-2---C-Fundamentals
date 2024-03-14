#include<iostream>
using namespace std;
int main(){
    int a = 36; // a = 100100000
    int b = 22; // b = 000010110
    cout<< (a & b)<<endl; // a &b = (100100)& (010110) = 000100
    cout<< (a | b)<<endl; // a | b = (100100)| (010110) = 110110
    cout<< (a ^ b)<<endl; // a ^ b = (100100)^ (010110) = 110010
    cout<< (~a)<<endl; // one's complement of 36 is -(36+1)
    cout<< (a<<3)<<endl; // 36 * (2 raise to power 3)
    cout<< (a>>3)<<endl; // 36 / (2 raise to power 3)
    return 0;
}