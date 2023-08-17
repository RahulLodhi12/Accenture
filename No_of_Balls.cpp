#include<bits/stdc++.h>
using namespace std;

int numBall(int *arr){
    int n = sizeof(arr);
    int sum=0;
    for(int i=0;i<n;i++){
        int d = pow((i+1),2) - arr[i];
        sum += d;
    }
    return sum;
}

int main(){
    int arr[] = {1,2,7,13};

    cout<<numBall(arr);
}