#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,4,5,3,4,45,424,245,6721,234};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;  
    for (int i = 0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
        return 0;
}