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
    vll a(n);
    inv(a);

    map<ll,ll> mp;
    
    repg(0,n){
        mp[a[i]]++;
    }
    n =1e5;
    vll dp(n+1);
    dp[0] = 0;
    dp[1] = mp[1];
    repg(2,n+1){
        dp[i] = max(dp[i-1],dp[i-2]+mp[i]*i);
    }

    cout<<dp[n];

    
}