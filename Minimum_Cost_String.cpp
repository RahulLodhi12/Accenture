#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    cin>>str;

    if(str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o' || str[0]=='u'){
        bool flag = 1;
        for(int i=1;i<str.length();i++){
            if(str[i]!=str[0]){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<-1;
        }
    }
    else{
        int cost=0;
        char ch;
        for(int i=0;i<str.length();i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                ch = str[i];
                break;
            }
        }
        // cout<<ch<<endl;
        for(int i=0;i<str.length();i++){
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
                cost += 10;
            }
            else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                cost += abs(ch - str[i]);
                // cout<<"ch"<<cost<<endl;
            }
        }
        cout<<"cost "<<cost;
    }

}