#include<bits/stdc++.h>
using namespace std;


// Approach 1: Brute Force - Count no. of Perfect Square
int bulbSwitcher1(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j*j == i){
                cnt++;
            }
        }
    }
    return cnt;
}


// Approach 2: Optimal Sol
int bulbSwitcher2(int n){
    return sqrt(n);
}

int main(){
    int n;
    cin>>n;

    // cout<<bulbSwitcher1(n);

    cout<<bulbSwitcher2(n);
}