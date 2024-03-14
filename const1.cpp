#include <iostream>
using namespace std;

int main() {
  // 1. const variable
  const int x = 5;
  // x = 10; // error: cannot modify a const variable
  cout << "x = " << x << endl;

  // 2. const pointer
  int y = 10;
  const int* ptr1 = &y;
  // *ptr1 = 20; // error: cannot modify the value pointed by a const pointer
  y = 20; // okay: can modify the variable directly
  cout << "*ptr1 = " << *ptr1 << endl;

  // 3. pointer to const
  int z = 15;
  int* const ptr2 = &z;
  *ptr2 = 25; // okay: can modify the variable pointed by the const pointer directly
  // ptr2 = &x; // error: cannot modify a const pointer
  cout << "*ptr2 = " << *ptr2 << endl;

  // 4. const reference
  int a = 30;
  const int& ref = a;
  // ref = 40; // error: cannot modify a const reference
  a = 40; // okay: can modify the variable directly
  cout << "ref = " << ref << endl;

  return 0;
}