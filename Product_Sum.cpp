#include<bits/stdc++.h>
using namespace std;

void productSum(int *arr, int n){
    for(int i=0;i<n;i++){
        int small = 0;
        int large = 0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                small += arr[j];
            }
            else if(arr[j]>arr[i]){
                large += arr[j];
            }
        }
        arr[i] = small*large;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    productSum(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}