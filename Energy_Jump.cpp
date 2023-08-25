#include<bits/stdc++.h>
using namespace std;

int fun(int *e, int *ju, int n, int t){
    int h=0;
    int en=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(i>0 && j<n-1){
            h++;
            en = en-ju[j];
            j++;
        }
        if(en<=ju[j]){
            while(en<=ju[j]){
                en += e[i];
                h++;
            }
        }
        // h++;
    }
    return h;
}


int main(){
    int n;
    cin>>n;
    int e[n];

    int t;
    cin>>t;

    int ju[n-1];

    for(int i=0;i<n;i++){
        cin>>e[i];
    }

    for(int i=0;i<n-1;i++){
        cin>>ju[i];
    }

    cout<<fun(e,ju,n,t);
}