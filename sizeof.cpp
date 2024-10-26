#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 34, 5, 9, 45, 67, 23, 567, 245, 234, 234, 3, 456788323, 42543, 5};
    int n = sizeof(arr) / sizeof(int);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
} 