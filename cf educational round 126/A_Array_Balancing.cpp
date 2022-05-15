#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n],b[n];
        repg(0,n)
            cin>>a[i];
        repg(0,n)
            cin>>b[i];
        ll ans = 0;
        ll temp;
        repg(0,n-1){
            temp = min(abs(a[i]-a[i+1]) + abs(b[i]-b[i+1]), abs(a[i]-b[i+1]) + abs(b[i]-a[i+1]));
            ans+=temp;
        }
        cout<<ans<<"\n";
    }
}