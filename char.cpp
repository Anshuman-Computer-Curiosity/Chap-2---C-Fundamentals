#include <iostream>
#include<cwchar>
using namespace std;

int main() {
    char ch1 = 'a';
    char ch2 = 97; 
    char ch5 = 0x61;//char ch3 = '\x61';
    char ch6 = 0141;//char ch4 = '\141';
    wchar_t ch7 =  L'\u00a0'; // wide character , size 2
    
    wcout << "ch7: " << ch7<<endl;
    cout<< "size: " << sizeof(ch7) <<endl;
    cout<< "int value: " << (int)ch7 <<endl;
    
    return 0;
}