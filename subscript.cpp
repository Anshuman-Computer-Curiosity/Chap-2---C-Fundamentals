#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    cout<<arr[1]<<endl;
    double arr2[6];
    for(int i=-3;i<2;i++)
      arr2[i]=i + 2.5;

    cout<<arr2[-2]<<endl;

    return 0;
}