#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello, world!"; // string to print
    char* p; // declare a char pointer
    
    for (p = &str[0]; *p !='\0'; p++) {
        //for (int i=0 ; str[i]!=0; i++) {
        cout << *p; //cout << str[i]; print current character
    }

    cout << endl; 
    return 0;
}