#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 1000000007
#define all(v) (v).begin(),(v).end()
#define inv(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define int ll
#define INF LONG_LONG_MAX
#define ini(n) int n;cin>>n;

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        ll uc,dc,lc,rc;
        uc = u;
        lc = l;
        rc = r;
        dc = d;
        string ans = "YES";

        if(u==n) lc--,rc--;
        else if(u==n-1){
            if(lc>rc) lc--;
            else rc--;
        }
        if(d==n) lc--,rc--;
        else if(d==n-1){
            if(lc>rc) lc--;
            else rc--;
        }
        if(l==n) uc--,dc--;
        else if(l==n-1){
            if(uc>dc) uc--;
            else dc--;
        }
        if(r==n) uc--,dc--;
        else if(r==n-1){
            if(uc>dc) uc--;
            else dc--;
        }
        
        if(uc<0 || lc<0 || dc<0 || rc<0) cout<<"NO";
        else cout<<"YES";
        cout<<enl;
    }
}