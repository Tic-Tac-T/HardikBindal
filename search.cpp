#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter target : ";
    cin>>x;
    for (int i=0;i<<n;i++){
        if (arr[i]==x){
            cout<<X<<" is present";
            break;
        }
    }
    return 0;
}