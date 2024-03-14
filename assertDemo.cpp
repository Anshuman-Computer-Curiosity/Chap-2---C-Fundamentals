
#include <iostream>
#include <cassert>

using namespace std;
int main()
{
    int a,b;
    cout<<"Input two integers to divide = ";
    cin>>a>>b;
    assert(b!=0&&"Divide by o not possible");
    cout<<a<<"/"<<b<<" = "<<(double)a/b<<endl;
    return 0;
}
