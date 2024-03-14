#include<iostream>
using namespace std;
int main(){
    int num = 1;
    int sum = 0;
    while(num!=0){
        cout<<"Enter the number (0 to stop) = ";
        cin>>num;
        if(num>0)
            sum = sum + num;
    }
    cout<<"Sum of positive numbers = "<<sum<<endl;
    return 0;
}