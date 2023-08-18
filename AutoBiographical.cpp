#include<bits/stdc++.h>
using namespace std;

int autoBio(long long n){
    string s = to_string(n);
    int len = s.length();
    int cnt[len] = {0};
    for(int i=0;i<len;i++){
        cnt[int(s[i]-'0')]++;
    }
    
    bool flag=1;
    int ans=0;
    for(int i=0;i<len;i++){
        if(cnt[i] != int(s[i]-'0')){
            flag=0;
            break;
        }
        if(cnt[i]!=0){
            ans++;
        }
    }
    if(flag){
        return ans;
    }
    return 0;
}

int main(){
    long long n;
    cin>>n;

    cout<<autoBio(n);
}