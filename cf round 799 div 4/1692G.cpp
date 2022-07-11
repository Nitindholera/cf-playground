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
        int n,k;
        cin>>n>>k;
        vll a(n);
        inv(a);
        vll m(n-1,0);
        repg(0,n-1){
            if(a[i+1]*2 > a[i]) m[i] = 1;
        }

        vll sum(n-1,0);sum[0] = m[0];
        repg(1,n-1) sum[i] = sum[i-1] + m[i];
        
        ll ans = 0;
        if(sum[k-1]==k) ans = 1;
        repg(1,n-k) if(sum[i+k-1]-sum[i-1]==k) ans++;

        cout<<ans<<enl;
    }
}