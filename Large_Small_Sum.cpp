#include<bits/stdc++.h>
using namespace std;

int LargeSmallSum(int *arr, int n){
    int me = INT_MIN;
    int mo = INT_MIN;
    for(int i=0;i<n;i++){
        if(i%2==0){
            me = max(arr[i],me);
        }
        else{
            mo = max(arr[i],mo);
        }
    }

    int sme = INT_MIN;
    int smo = INT_MIN;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]<me){
                sme = max(arr[i],sme);
            }
        }
        else{
            if(arr[i]<mo){
                smo = max(arr[i],smo);
            }
        }
    }
    // cout<<sme<<smo<<endl;
    return sme+smo;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<LargeSmallSum(arr,n);
}