#include<bits/stdc++.h>
using namespace std;

int number(string str){
    char arr[5] = {'A','B','C','D','E'};
    int n = str.length();
    int ans = 0;
    int k=n-1;
    for(int i=0;i<n;i++){
        ans += pow(5,k--)*(find(arr, arr + 5, str[i])-arr+1);
    }

    return ans;
}

int main(){
    string str;
    cin>>str;

    cout<<number(str);
}