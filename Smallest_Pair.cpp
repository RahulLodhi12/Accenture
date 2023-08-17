#include<bits/stdc++.h>
using namespace std;

int smallPair(int *arr, int n, int sum){
    //sorting
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    int check = arr[0] + arr[1];
    if(check<=sum){
        return arr[0]*arr[1];
    }

    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    cout<<smallPair(arr,n,sum);
}