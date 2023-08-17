#include<bits/stdc++.h>
using namespace std;

int func(int m, int n){
    int count[n+1];

    for(int i=1;i<=n;i++){
        if(i<m){
            count[i] = 1;
        }
        else if(i==m){
            count[i] = 2;
        }
        else{
            count[i] = count[i-1] + count[i-m];
        }
    }

    return count[n]; //return m*n
}

int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;

    cout<<func(m,n);
}