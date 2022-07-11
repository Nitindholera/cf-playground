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
ll pow(ll x){
    ll ret = 0;
    while(x%2==0){
        ret++;
        x = x/2;
    }
    return ret;
}
signed main(){
    ios_base::sync_with_stdio(false);
    // cout<<pow(8)<<" ";
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vll a(n);
        inv(a);
        ll e = 0,o = 0;
        vll even;
        repg(0,n){
            if(a[i]%2==0){
                e++;
                even.pb(pow(a[i]));
            }

            else 
                o++;
        }
        ll ans = 0;
        // cout<<e<<" "<<o<<" ";
        if(o>0){
            ans = e;
        }
        else{
            ans+=*min_element(all(even));
            ans+=e-1;
        }
        cout<<ans<<enl;
    }
}