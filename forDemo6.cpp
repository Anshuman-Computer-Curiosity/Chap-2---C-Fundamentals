#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    //int b=1;
    // Outer loop to iterate through each row
   for(int i=1;i<=n;i++){
       for(int k=1;k<=n-i;k++)
         cout<<" ";
       for(int j=1;j<=2*i-1;j++){
         if(j%2==0)
            cout<<"0";
         else
           cout<<"1";
       }
       cout << endl;

	    
     }


    return 0;
}