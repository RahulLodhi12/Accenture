#include<bits/stdc++.h>
using namespace std;


int sqSum(int n){
    int res=0;
    while(n){
        res += (n%10)*(n%10);
        n = n/10;
    }
    return res;
}


// Approach 1: Brute Force - Using Set
bool happy1(int n){
    set<int> st;
    while(1){
        n = sqSum(n);
        if(n == 1){
            return true;            
        }
        else if(st.find(n) != st.end()){
            return false;
        }
        st.insert(n);
    }
}

// Approach 2: Optimal Sol - Fast & Slow Pointer
bool happy2(int n){
    int slow = n;
    int fast = n;

    do{
        slow = sqSum(slow);
        fast = sqSum(sqSum(fast));
    }while(slow != fast);

    if(slow == 1 && fast == 1){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    // cout<<happy1(n);

    cout<<happy2(n);
}