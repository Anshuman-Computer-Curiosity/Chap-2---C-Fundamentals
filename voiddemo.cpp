#include<iostream>
using namespace std;
 void display(void){
    cout<<"In void function"<<endl;
}

int main(){
    display();
    int x = 3;
    double y = 5.5;
    int max = (x>y)?(void(x),x):(void(y),y);
    cout<<max;
    return 0;
}