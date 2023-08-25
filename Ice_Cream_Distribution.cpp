#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c[n];
    int m;
    cin>>m;
    int ic[m];

    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    for(int i=0;i<m;i++){
        cin>>ic[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ic[j]>=c[i]){
                cnt++;
                ic[j] = 0;
                break;
            }
        }
    }

    cout<<cnt;
}