#include<bits/stdc++.h>
using namespace std;

string nBase(int n, int num){
    string ans="";
    while(num!=0){
        int d = num%n;
        if(d>9){
            ans += char(d+55);
        }
        else{
            ans += char(d+48);
        }
        num = num/n;
    }

    reverse(ans.begin(),ans.end());

    return ans;
}

int main(){
    int n;
    int num;
    cin>>n;
    cin>>num;

    cout<<nBase(n,num);
}