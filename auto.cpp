#include <iostream>
#include<typeinfo>
#include<cxxabi.h>
using namespace std;

int main() {    
   auto x = 4.5;
   cout<<x<<endl;
   cout << abi::__cxa_demangle(typeid(x).name(),0,0,nullptr);
    return 0;
}