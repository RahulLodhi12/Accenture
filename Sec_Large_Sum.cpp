#include<bits/stdc++.h>
using namespace std;

int secLargeSum(int *arr, int n){
    if(n==0 || n<=3){
        return 0;
    }

    int evenL = INT_MIN;
    int oddL = INT_MIN;
    for(int i=0;i<n;i++){
        if(i%2==0){
            evenL = max(evenL,arr[i]);
        }
        else{
            oddL = max(oddL,arr[i]);
        }
    }

    // cout<<evenL<<" "<<oddL<<endl;

    int sevenL = INT_MIN;
    int soddL = INT_MIN;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]<evenL){
                sevenL = max(arr[i],sevenL);
            }
        }
        else{
            if(arr[i]<oddL){
                soddL = max(arr[i],soddL);
            }
        }
    }

    // cout<<sevenL<<" "<<soddL<<endl;
    return sevenL+soddL;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<secLargeSum(arr,n);
}