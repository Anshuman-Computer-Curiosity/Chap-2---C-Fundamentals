#include <iostream>
using namespace std;

int main() {
    int a = 40, b = 65,c =50;
    int max ;
    max = (a>b) ? ((a>c)? a: c): ((b>c)? b: c);
    cout<< max <<endl;

    string result = (max%2==0)?"even":"odd";
    cout<<"Greatest number  = "<<max<< " is "<<result<<endl;
    return 0;
}