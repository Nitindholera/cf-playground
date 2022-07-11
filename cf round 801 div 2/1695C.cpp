#include<bits/stdc++.h>
using namespace std;
typedef int ll;

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

pll calc(ll val, pll& x, pll& y, ll i, ll j){
    pll build;
    build.ff = min(x.ff + val, y.ff + val);
    build.ss = max(x.ss + val, y.ss + val);
    return build;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vll> a(n+1,vll(m+1));
        repg(1,n+1){
            rep(j,1,m+1,1) cin>>a[i][j];
        }
        string ans;
        if((n+m-1)%2==1) ans = "NO";
        else{
            vector<vector<pll>> dp(n+1,vector<pll>(m+1));
            dp[n][m] = {a[n][m],a[n][m]};
            for(int i = n-1;i>=1;i--){
                dp[i][m] = {dp[i+1][m].ff + a[i][m], dp[i+1][m].ff + a[i][m]};
            }
            for(int j = m-1;j>=1;j--){
                dp[n][j]={dp[n][j+1].ff+a[n][j], dp[n][j+1].ff+a[n][j]};
            }

            for(int i = n-1;i>=1;i--){
                for(int j = m-1;j>=1;j--){
                    dp[i][j] = calc(a[i][j],dp[i+1][j],dp[i][j+1], i, j);
                    if(i+2<=n) dp[i+2].clear();
                }
            }
            if(dp[1][1].ff<=0 && dp[1][1].ss>=0 ){
                ans = "YES";
            }
            else ans = "NO";
        }
        cout<<ans<<enl;
    }
}