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
        vll p(n);
        inv(p);
        vll ans;
        vpll maxi(n);
        maxi[0] = {p[0],0};

        repg(1,n){
            if(p[i]>maxi[i-1].ff)  maxi[i] = {p[i],i};
            else maxi[i] = maxi[i-1];
        }

        ll mxidx = maxi[n-1].ss;
        ll prev = n;
        while(mxidx!=0){
            repg(mxidx,prev){
                ans.pb(p[i]);
            }
            prev = mxidx;
            mxidx = maxi[prev-1].ss;
        }
        repg(mxidx,prev) ans.pb(p[i]);
        print(ans);
    }
}