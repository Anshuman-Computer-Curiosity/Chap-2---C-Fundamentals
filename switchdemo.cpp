#include<iostream>
using namespace std;
int main(){
    int day = 4;
    switch(day){
        case 1: cout<<"Today is Sunday"<<endl; break;
        case 2: cout<<"Today is Monday"<<endl; break;
        case 5: cout<<"Today is Thursday"<<endl; break;
        case 2+6%4: cout<<"Today is Wednesday"<<endl; break;
        default : cout<<"Enter valid value from 1 to 7"<<endl; break;
        case 6: cout<<"Today is Friday"<<endl; break;
        case 3: cout<<"Today is Tuesday"<<endl; break;
        case 7: cout<<"Today is Saturday"<<endl; break;
        

    }
    cout<<"Out of switch statement"<<endl;
    
    return 0;
}