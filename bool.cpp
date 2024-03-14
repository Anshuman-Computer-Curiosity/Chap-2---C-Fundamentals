#include <iostream>
#include <iomanip> // for std::boolalpha

using namespace std;

int main() {
    bool flag = true;
    // cout << "result = " << flag << endl;
    
    bool result;

    result = (2 < 3);
    cout << "result = " << result << endl;
   
    
    result = (flag && (4 == 4));
   cout << "result = " << boolalpha <<flag << endl;


    result = (!flag || (5 > 6));
    cout << "result = " << result << endl;

    return 0;
}