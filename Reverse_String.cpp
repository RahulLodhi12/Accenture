#include<bits/stdc++.h>
using namespace std;

void reverse(char *str){
    int s=0;
    int e=strlen(str)-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}

int main(){
    char str[100];
    cin>>str;

    reverse(str);

    cout<<str<<endl;
}