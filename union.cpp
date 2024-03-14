#include <iostream>
#include <cstring>
using namespace std;

union Data {
  int i;
  float f;
  char str[20];
};

int main() {
  Data dd;
  dd.i = 10;
  cout << "data.i : " << dd.i << endl;

  dd.f = 2.5;
  cout << "data.f : " << dd.f << endl;
  
  strcpy(dd.str, "Hello");
  cout << "data.str : " << dd.str << endl;
  cout<<sizeof(dd)<<endl;
  return 0;
}