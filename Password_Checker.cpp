#include<bits/stdc++.h>
using namespace std;

/*
– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
*/
bool passCheck(char *str){
    int ch=0;
    int num=0;
    int cap=0;

    if(str[0]>='0' && str[0]<='9'){
        return false;
    }

    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ' || str[i]=='/'){
            return false;
        }
        else if(str[i]>='a' && str[i]<='z'){
            ch++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            ch++;
            cap++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            ch++;
            num++;
        }
    }

    if(ch>=4 && num>=1 && cap>=1){
        return true;
    }
    return false;
}

int main(){
    char str[100];
    cin>>str;

    cout<<(passCheck(str));
}