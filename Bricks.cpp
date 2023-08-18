#include<bits/stdc++.h>
using namespace std;

int bricks(int n){
    return (n*(3*n+1))/2;
}

int main(){
    int n;
    cin>>n;

    cout<<bricks(n);
}