#include <bits/stdc++.h>
using namespace std;

int OperationsBinaryString(char *str){
    if (str == NULL)
        return -1;

    int ans = str[0]-'0'; //first character

    for(int i=1;i<strlen(str);i++){
        if (str[i] == 'A')
            ans &= str[i+1]-'0';
        else if (str[i] == 'B')
            ans |= str[i+1]-'0';
        else if(str[i] == 'C')
            ans ^= str[i+1]-'0';
    }

    return ans;
}

int main(){
    char str[100];
    cin>>str;

    cout << OperationsBinaryString(str);
}