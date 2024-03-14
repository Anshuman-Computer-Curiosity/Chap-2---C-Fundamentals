#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int* arr = new (nothrow) int[n]; //allocates heap memory for 5 integers
    if(arr == nullptr){
        cout<<"Memory not available"<<endl;
    }
    else{
    cout << "Enter n integers:" << endl; //input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array elements are: "; //print array
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr; //deallocates memory to array
    }
    return 0;
}