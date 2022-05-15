#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    lol n;
    cin>>n;
    vector<int> arr,query;
    int kill[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<n;i++){
        kill[arr[i]-1]=i+1;
    }
    lol m;
    cin>>m;
    for(int i=0;i<m;i++){
        int temp2;
        cin>>temp2;
        query.push_back(temp2);
    }
    lol one=0,two=0;
    for(int i=0;i<m;i++){
        one+=kill[query[i]-1];
    }
    two=(n+1)*m-one;
    cout<<one<<" "<<two;
}