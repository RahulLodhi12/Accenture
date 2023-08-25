#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcdef";
    string temp = s;

    int n=s.length();
    int j=0;
    for(int i=n-1;i>=0;i++){
        s[j+1] = temp[i];
        
    }

}