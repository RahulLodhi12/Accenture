#include<bits/stdc++.h>
using namespace std;

int nearInt(int n, int m){
    int n1 = n;
    int n2 = n;
    while(n1%m != 0){
        n1++;
    }
    int d1 = n1-n;

    while(n2%m != 0){
        n2--;
    }
    int d2 = n-n2;

    if(d2<d1){
        return n2;
    }
    return n1;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    cout<<nearInt(n,m);
}