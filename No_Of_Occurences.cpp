#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    // cout<<str;

    // int cnt=0;
    for(int i=0;i<str.length();i++){
        int cnt=0;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
}