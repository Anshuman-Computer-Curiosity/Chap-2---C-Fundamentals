#include <iostream>
using namespace std;

int main() {
   int x = 1;

   start:
   cout << "x = " << x << endl;
   x++;

   if (x < 10) {
      goto start;
   }

   return 0;
}