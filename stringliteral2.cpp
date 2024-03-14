#include<iostream>
using namespace std;
int main(){
char mystring4[]={"Hello"};


    int count = 0;
     cout << "You entered: " ;
    for(int i=0;mystring4[i]!='\0';i++){
            cout << mystring4[i];
           
            ++count;
    }
   cout<<"\nLength = "<<count<<endl;
   return 0;
}