#include<bits/stdc++.h>
using namespace std;

int func(int n){
    int count[n+1]; //for count the no. of ways
    count[1] = 1; //for 2*1 floor, no. of ways will be 1
    count[2] = 2; //for 2*2 floor, no. of ways will be 2
    for(int i=3;i<=n;i++){
        count[i] = count[i-1] + count[i-2];
    }

    return count[n]; //return 2*n
}

int main(){
    int n;
    cin>>n;

    cout<<func(n);
}