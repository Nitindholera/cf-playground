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
        ini(n);
        vll a(n);
        inv(a);
        vll p(n);
        repg(0,n) p[a[i]] = i;

        ll ans = 1;
        int l = p[0],r = p[1];
        if(l>r) swap(l,r);

        rep(k,2,n,1){
            if(p[k]<l) l = p[k];
            else if(p[k]<r) ans = (ans*(r-l+1-k))%MOD;
            else r = p[k];
        }
        cout<<ans<<enl;
    }
}