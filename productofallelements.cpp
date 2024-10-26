#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter elements of arrays:";
    
    for (int i =0;i<10;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    long long product = 1;

    for (int i = 0; i<n;i++){
        product *= arr[i];

    }

    cout<< "Product of all elements: " << product << endl;
        return 0;
}