#include<bits/stdc++.h>
using namespace std;

int count(int n){
    if(n<248 || n>999){
        return -1;
    }

    int comb[] = {248,284,428,482,824,842};
    int cnt=0;
    for(int i=0;i<6;i++){
        if(comb[i]<=n){
            cnt++;
        }
    }
    return cnt;
    
}

int main(){
    int n;
    cin>>n;

    cout<<count(n);
}