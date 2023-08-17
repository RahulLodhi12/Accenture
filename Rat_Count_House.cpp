#include<bits/stdc++.h>
using namespace std;

int cntHouse(int r, int units, int n, int arr[]){
    int wantFood = units*r;
    int totalFood=0;
    for(int i=0;i<n;i++){
        totalFood += arr[i];
        if(totalFood>=wantFood){
            return i+1;
        }
    }

    return 0;
}

int main(){
    int r;
    cin>>r;
    int units;
    cin>>units;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<cntHouse(r,units,n,arr);
}