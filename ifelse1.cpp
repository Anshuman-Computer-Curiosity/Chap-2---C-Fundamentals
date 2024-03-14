#include<iostream>
using namespace std;
int main(){
    double marks;
    cout<<"Enter the percentage of a student = ";
    cin>>marks;
    if(marks>=90)
        cout<<"Grade A "<<endl;
    else {
           if(marks>=80)
            cout<<"Grade B"<<endl;
           else { 
                if(marks >= 50)
                    cout<<"Grade C"<<endl;
                else
                    cout<<"You failed "<<endl;
           }
    }               
    cout<<"Out of if statement"<<endl;   

    return 0;
}