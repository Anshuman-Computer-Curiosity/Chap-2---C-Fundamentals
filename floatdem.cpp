#include<iostream>
#include<float.h>
#include<iomanip>
using namespace std;
int main(){
     long double ld = 123.456789l;
     cout<<"d = "<< fixed << setprecision(7) << ld <<endl;
     cout<<"size of double = "<<sizeof(ld)<<endl;
     cout<<"Max value of double = "<<LDBL_MAX<<endl;
     cout<<"Min value of double = "<<LDBL_MIN<<endl;
     cout<<"Digits of precision of double = "<<LDBL_DIG<<endl;
     cout<<"Digits of exponent of double = "<<LDBL_MIN_EXP<<endl;
     cout<<"Digits of exponent of double = "<<LDBL_MAX_EXP<<endl;
    return 0;
}