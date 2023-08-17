#include<bits/stdc++.h>
using namespace std;

void replace(char *str, char c1, char c2){
    for(int i=0;i<strlen(str);i++){
        if(str[i]==c1){
            str[i] = c2;
        }
        else if(str[i]==c2){
            str[i] = c1;
        }
    }
}

int main(){
    char str[100];
    cin>>str;
    char c1,c2;
    cin>>c1>>c2;

    replace(str,c1,c2);

    cout<<str<<endl;
}