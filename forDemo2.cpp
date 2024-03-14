#include <iostream>
using namespace std;
static int num = 5; //static variable

bool func() {  //function definition
    num--;
    if (num > 0) {
        cout << "num = " << num << endl;
        return true;
    } else {
        return false;
    }
}

int main() {
    for (func(); func(); func()) {
        ;
    }
    cout<<"Out of for loop"<<endl;
    return 0;
}