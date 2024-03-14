#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> v{10,20,30,40};
    for(auto i = v.begin(); i!= v.end(); i++) //traditional for loop
        a.push_back(*i);//push into container
    for (auto &item : a) //iterate from begin to end
	   cout << item+1 << " ";  
    return 0;
}
