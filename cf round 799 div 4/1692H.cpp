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
        vll x(n);
        inv(x);
        map<ll,vll> mp;
        repg(0,n) mp[x[i]].pb(i);
        ll global = LONG_LONG_MIN;
        ll ans, l, r;

        for(auto& it: mp){
            ll a = it.ff;
            vll indx = it.ss;
            
            ll mx_so_far = 1, cur_mx = 1;
            ll l_so_fr = indx[0], r_so_far = indx[0],h = 0;

            repg(1,sz(indx)){
                if(cur_mx>indx[i]-indx[i-1]-1){
                    cur_mx+=1-(indx[i]-indx[i-1]-1);
                }
                else{
                    cur_mx = 1;
                    h = i;
                }
                // cur_mx = max(1ll,cur_mx+1-(indx[i]-indx[i-1]-1));
                if(cur_mx>mx_so_far){
                    mx_so_far = cur_mx;
                    l_so_fr = indx[h];
                    r_so_far = indx[i];
                }
            }

            if(mx_so_far>global){
                global = mx_so_far;
                ans = a;
                l = l_so_fr;
                r = r_so_far;
            }
        }

        cout<<ans<<" "<<l+1<<" "<<r+1<<enl;
    }
}