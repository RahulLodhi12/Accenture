#include<bits/stdc++.h>
using namespace std;

int mars(int m, int n, int *arr){
    int w[m];
    int k=1;
    for(int i=0;i<m;i++){
        w[i] = k;
        k++;
    }

    for(int i=0;i<m;i++){//w
        for(int j=0;j<n;j++){//arr
            if(w[i]==arr[j]){
                w[i] = -1;
            }
        }
    }

    int sum=0;
    int cnt=0;
    for(int i=0;i<m;i++){
        if(w[i]!=-1 && sum+w[i]<=m){
            sum+=w[i];
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int m;
    cin>>m;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<mars(m,n,arr);
}