#include<bits/stdc++.h>
using namespace std;

bool Anagram(char *str1, char *str2){
    int cnt1[256] = {0};
    int cnt2[256] = {0};

    for(int i=0;str1[i]&&str2[i];i++){
        cnt1[str1[i]]++;
        cnt2[str2[i]]++;
    }

    for(int i=0;i<256;i++){
        if(cnt1[i]!=cnt2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    char str1[] = "listen";
    char str2[] = "silent";

    cout<<Anagram(str1,str2);
}