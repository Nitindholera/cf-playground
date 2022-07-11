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
    ini(n);
    ini(m);
    ini(k);
    vll tas(m);
    inv(tas);
    vll p(n+1,0);
    
    for(auto ta: tas){
        for(int i = ta-k;i<=ta+k;i++){
            if(i>=1 && i<=n) p[i] = 1;
        }
    }
    // print(p);
    ll ans = 0;
    for(int i = 1;i<=n;i++){
        if(p[i]==0){
            i = i + 2*k;
            ans++;
        }
    }
    cout<<ans;
}