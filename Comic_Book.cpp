#include<bits/stdc++.h>
using namespace std;


// bool cmp(pair<string, int>& a,
//         pair<string, int>& b)
// {
//     return a.second < b.second;
// }

// void sort(map<string, int>& M)
// {
 
//     // Declare vector of pairs
//     vector<pair<string, int> > A;
 
//     // Copy key-value pair from Map
//     // to vector of pairs
//     for (auto& it : M) {
//         A.push_back(it);
//     }
 
//     // Sort using comparator function
//     sort(A.begin(), A.end(), cmp);
 
//     // Print the sorted value
//     for (auto& it : A) {
 
//         cout << it.first << ' '
//             << it.second << endl;
//     }
// }

// void cntPair(string *books, int *price, int n, int x){
//     map<string,int> mpp;

//     for(int i=0;i<n;i++){
//         mpp[books[i]] = price[i];
//     }

//     sort(mpp);
// }

int main(){
    int n;
    cin>>n;
    // int x;
    // cin>>x;
    // string s;
    // getline(cin,s);
    vector<string> books;
    // books.push_back(s);
    for(int i=0;i<3;i++){
        cin>>books[i];
        books.push_back(books[i]);
    }

    for(int i=0;i<books.size();i++){
        cout<<books[i]<<" ";
    }

    // int price[n];
    // for(int i=0;i<n;i++){
    //     cin>>price[i];
    // }

    // cntPair(books,price,n,x);
}