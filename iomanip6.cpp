#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    cout<<11<<setw(5)<<23<<setw(4)<<45<<setw(3)<<"Hello"<<endl; 

    cout<<11<<setw(5)<<23<<setw(8)<<57<<endl; 
    cout<<11<<setfill('*')<<setw(10)<<23<<setw(8)<<57<<endl; 

	cout<<setbase(16)<<50<<endl;
    cout<<setbase(8)<<0xAe3<<endl;	

    cout<<125.567895678956789<<endl; 
    cout<<setprecision(3)<<125.567895678956789<<endl; 

    cout<<resetiosflags(ios::dec); 
    cout<<setiosflags(ios::showbase|ios::uppercase|ios::hex)<<333<<endl;

  
    return 0;
}