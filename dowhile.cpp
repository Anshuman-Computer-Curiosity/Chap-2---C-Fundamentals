#include<iostream>
using namespace std;
int main(){
    int num;
    int sumOdd = 0,sumEven = 0;
    do{
        cout<<"Enter the number (0 to stop)= ";
        cin>>num;
        if(num%2==0)
           sumEven = sumEven + num;
        else
            sumOdd = sumOdd + num;
    }while(num!=0);
    cout<<"Sum of even numbers = "<<sumEven<<endl;
    cout<<"Sum of odd numbers = "<<sumOdd<<endl;
    return 0;
}