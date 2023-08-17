// Josephus Problem
#include<bits/stdc++.h>
using namespace std;

void leftTV(vector<int> &ch, int k, int ind){
    if(ch.size()==1){
        cout<<ch[0]<<endl;
        return;
    }

    //calculate index to erase the ch[i] vector
    ind = (ind+k) % ch.size();

    ch.erase(ch.begin()+ind); //erase

    leftTV(ch,k,ind); //recursive call for 'n-1' vector
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    k--; //k = k-1, because index of vector starts from 0.
    vector<int> ch;
    for(int i=1;i<=n;i++){
        ch.push_back(i);
    }

    int ind = 0;
    leftTV(ch,k,ind);
}