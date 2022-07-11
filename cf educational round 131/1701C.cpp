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

ll check(ll x, vll& worker){
    ll n = sz(worker) - 1;
    ll help = 0, avail = 0;
    for(int i = 1;i<=n;i++){
        if(worker[i]>x) help+=worker[i] - x;
        else avail+=(x - worker[i])/2;
    }
    if(avail>=help) return 1;

    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vll a(m);
        inv(a);
        vll worker(n+1,0);
        repg(0,m) worker[a[i]]++;
        ll l = 0, r = *max_element(all(worker)) + 1;
        while(l<r-1){
            ll mid = l + (r-l)/2;

            if(check(mid, worker)) r = mid;
            else l = mid;
        }
        cout<<l+1<<enl;
        // repg(0,r){
        //     cout<<check(i, worker)<<" ";
        // }
        // cout<<enl;
    }
}