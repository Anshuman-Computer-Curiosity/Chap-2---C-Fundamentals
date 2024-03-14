#include <iostream>
using namespace std;
int func(){
    int x=15;
    return x;
}

int main() {
   int a,c;
   double b=10.5;
   a = 5;
   c = func();
   a += 15; // a=a+15;
   b += c *= 2; // c = c*2; b=b+c;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
    return 0;
}