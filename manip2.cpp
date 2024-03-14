#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // cout << 50<<endl;
    // cout << hex<<50<<endl;
    // cout << 79<<endl;
    // cout << oct<<0xAe3<<endl;
    // cout << dec<<076<<endl;
    
    cout<<setfill('*')<<setw(10)<<12.25<<endl; 
    cout<<setfill('*')<<setw(10)<<right<<12.25<<endl; 
    cout<<setfill('*')<<setw(10)<<left<<12.25<<endl; 
    cout<<setfill('*')<<setw(10)<<internal<<-12.25<<endl;   
    cout<<setfill('*')<<setw(10)<<internal<<showbase<<hex<<0xA3<<endl;
    
    return 0;
}