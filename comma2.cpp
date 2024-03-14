#include <iostream>
using namespace std;

void display(int x) {
    cout << x <<" " ;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++, display(arr[i])) {
        sum = sum + arr[i];
        cout<<" Sum = "<<sum<<endl;
    }
    return 0;
}