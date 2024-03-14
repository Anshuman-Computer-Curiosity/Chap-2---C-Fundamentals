//Program in switch case labels that can be arranged in any order (not necessarily in increasing order)
//But, no two case labels within the same switch statement can have the same value.

#include <iostream>
using namespace std;
int main() {
    int x = 65;
    switch(x){
         case 67 :  cout<<"Case 67"<<endl;
                    break;
         case 65 :  cout<<"Case 65"<<endl;
                    break;
         case 'A' : cout<<"Case A"<<endl;
                    break;
        default :   cout<<"Default"<<endl;
        }
        return 0;
}