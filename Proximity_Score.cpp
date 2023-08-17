#include<bits/stdc++.h>
using namespace std;

int score(string str1, string str2){
    int cnt=0;
    str1[0] = char(str1[0]+32);
    str2[0] = char(str2[0]+32);
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                if(i==j){
                    cnt+=2;
                }
                else{
                    cnt++;
                }
                str1[i] = '$';
                str2[j] = '#';
            }
        }
    }
    return cnt;
}

int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;

    cout<<score(str1,str2);
}