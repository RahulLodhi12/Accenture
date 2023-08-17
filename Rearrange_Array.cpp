#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(int *arr, int n){
    int ans[n] = {0};

    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[k] = arr[i];
            k++;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[k] = arr[i];
            k++;
        }
    }


    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int arr[] = {1,-2,5,2,-7,4,-1,3};
    int n = sizeof(arr)/sizeof(int);
    rearrangeArray(arr,n);
}