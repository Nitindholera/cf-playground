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
    int n,q;
    cin>>n>>q;
    vll p(n);
    inv(p);
    sort(all(p), greater<ll>());
    vll sum(n);sum[0] = p[0];
    repg(1,n) sum[i] = sum[i-1] + p[i];
    while(q--){
        ll x,y;
        cin>>x>>y;
        x--;y--;
        ll ans;
        if(x-y-1>=0)
            ans = sum[x]-sum[x-y-1];
        else
            ans = sum[x];
        cout<<ans<<enl;
    }
}