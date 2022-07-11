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
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    map<ll,vll> mp;
    repg(0,n) mp[s[i]].pb(i);

    ll p1 = 0, p2 = n-1;
    vll left(m), right(m);
    repg(0,m){
        while(s[p1]!=t[i]) p1++;
        left[i] = p1;
        p1++;   
    }

    for(int i=m-1;i>=0;i--){
        while(s[p2]!=t[i]) p2--;
        right[i] = p2;
        p2--;
    }

    ll ans = 0;
    repg(0,m-1) ans = max(ans, right[i+1]-left[i]);
    cout<<ans<<enl;
}