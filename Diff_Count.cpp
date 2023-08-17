#include<bits/stdc++.h>
using namespace std;

int count(int *arr, int num, int diff, int size){
    int cnt=0;
    for(int i=0;i<size;i++){
        if(abs(arr[i]-num)<=diff){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int arr[] = {12, 3, 14, 56, 77, 13};
    int num = 13;
    int diff = 2;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<count(arr,num,diff,size);
}