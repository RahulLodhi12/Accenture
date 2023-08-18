#include<bits/stdc++.h>
using namespace std;

int minPenalty(int *arr, int n){
    sort(arr,arr+n);

    // return abs()
    int sum=0;
    for(int i=1;i<n;i++){
        sum += abs(arr[i]-arr[i-1]);
    }

    return sum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<minPenalty(arr,n);
}