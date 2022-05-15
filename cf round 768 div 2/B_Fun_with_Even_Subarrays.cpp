#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        repg(0,n)
            cin>>a[i];
        
        bool b[n];
        repg(0,n){
            if(a[i]==a[n-1])
                b[n-i-1]=1;
            else
                b[n-i-1]=0;
        }
        // repg(0,n){
        //     cout<<b[i]<<" ";
        // }
        // cout<<"\n";

        int ans = 0;


        int idx = 1;

        while(idx<n){
            if(b[idx]==1){
                idx++;
                continue;
            }
            ans++;
            idx=idx*2;
        }
        cout<<ans<<"\n";
    }
}