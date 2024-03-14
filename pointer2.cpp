#include <iostream>
using namespace std;

int main() {
    int num = 10;
    const int* ptr = &num; // pointer to const
    cout<<"Value pointed by ptr = "<<*ptr<<endl;
    
    cout << "Value of num: " << num << endl;
    //*ptr = 20;
    cout << "Value of num after updating through ptr: " << num << endl;

    int* const ptrconst = &num; // const pointer to int
        
    //*ptrconst = 30;
    cout << "Value of num after updating through ptr_const: " << num << endl;
        
    const int* const ptrconst_const = &num; // const pointer to const int
       
    //*ptr_const_const = 50;  // Not allowed - error:
    
    return 0;
}