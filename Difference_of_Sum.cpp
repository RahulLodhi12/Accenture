#include<bits/stdc++.h>
using namespace std;

int diffOfSum(int n, int m){
    int s1=0;
    int s2=0;
    for(int i=1;i<=m;i++){
        if(i%n==0){
            s1+=i;                
        }
        else{
            s2+=i;
        }
    }
    return s2-s1;
}

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    cout<<diffOfSum(n,m);
}