#include<bits/stdc++.h>
using namespace std;

int sqPlot(int *arr, int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(ceil(double(sqrt(arr[i]))) == floor(double(sqrt(arr[i])))){
            cnt++;
        }
    }
    // cout<<double(sqrt(34))<<endl;
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<sqPlot(arr,n);
}