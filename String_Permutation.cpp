#include<bits/stdc++.h>
using namespace std;

bool permutation(string str1, string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1 == str2){
        return true;
    }

    return false;
}

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;

    cout<<permutation(str1,str2);
}
