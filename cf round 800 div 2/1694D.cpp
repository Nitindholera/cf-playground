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

vector<vll> adj;
vll l,r,support,dp;
void DFS(int v){
    if(sz(adj[v])==0) dp[v] = 1, support[v] = r[v]; 
    else{
        int sum = 0;
        for(auto it: adj[v]){
            DFS(it);
            sum += support[it];
            dp[v]+=dp[it];
        }
        // cout<<v<<" ";
        if(sum<l[v]) dp[v]++, support[v] = r[v];
        else support[v] = min(sum, r[v]);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vll p(n-1);
        inv(p);
        l.clear();r.clear();support.clear();dp.clear();
        l.resize(n+1);r.resize(n+1);support.resize(n+1);dp.resize(n+1,0);
        repg(1,n+1) cin>>l[i]>>r[i];

        adj.clear();
        adj.resize(n+1);
        repg(0,n-1) adj[p[i]].pb(i+2);
        
        // repg(1,n+1){
        //     cout<<i<<"->";
        //     print(adj[i]);
        // }

        DFS(1);
        cout<<dp[1]<<enl;
    }
}