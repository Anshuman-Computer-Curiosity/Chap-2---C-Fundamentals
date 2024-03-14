#include <iostream>
using namespace std;
int main() {
    int i = 10;
    switch(i){
         case i++ :  cout<<"Invalid i++"<<endl;
                    break;
         case --i :  cout<<"Invalid --i"<<endl;
                    break;
         case i : cout<<"Invalid i"<<endl;
                    break;
        default :   cout<<"Default"<<endl;
        }
        return 0;
}