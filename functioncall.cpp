#include <iostream>
using namespace std;
int x = -1;
int& func(){
    return x;
}

int main() {
    func() = 5;  // function call as l-value
    cout<<"Updated value of x = "<<func()<<endl;
}