#include <iostream>
using namespace std;
int sum (int , int ); //function declaration

int main() {
    int res = sum(5,sum(10,15));
    cout<<res;
    return 0;
}
int sum (int a, int b){ //function definition
    return a+b;
}