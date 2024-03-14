#include <iostream>
using namespace std;
enum DayOfWeek{sun, mon, tue, wed, thur, fri, sat,}; //global scope
int main(){
 DayOfWeek weekend = wed; // or dayOfWeek weekend = dayOfWeek::wed;
 int day;
 for(day = mon; day<=weekend; day++)
 cout<<day<<" ";
 return 0;
}