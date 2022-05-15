#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        char arr[n];
        rep(i,0,n,1){
            arr[i]=s[i];
        }
        sort(arr,arr+n);
        rep(i,0,n,1)
            cout<<arr[i];
        cout<<"\n";
    }
}