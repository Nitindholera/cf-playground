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
        int n,s;
        cin>>n>>s;
        vll a(n);
        inv(a);
        vll sum(n);
        sum[0] = a[0];

        repg(1,n) sum[i] = sum[i-1] + a[i];

        ll ans;
        vll ones;
        ones.pb(-1);
        repg(0,n) if(a[i]==1) ones.pb(i);
        ones.pb(n);
        if(sum[n-1]>=s){
            ans = INF;
            repg(1,sz(ones)-s){
                ll num = ones[i+s]-ones[i-1]-1;
                ans = min(ans,n-num);
            }
        }
        else{
            ans = -1;
        }

        cout<<ans<<enl;
    }
}