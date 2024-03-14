#include <iostream>
#include <cwchar> // for wcout and wcscpy
using namespace std;

int main() {
    char ch='A';
cout << sizeof(ch) << endl;

    wchar_t wch = L'\u03a9';
    wcout << sizeof(wch) << endl;
    wchar_t greeting[14];
    wcscpy(greeting, L"Hello, world!"); //copy

    wcout << greeting << endl;

    return 0;
}