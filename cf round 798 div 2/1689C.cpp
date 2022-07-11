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

vector<vll> adj(300005);
vll ch(300005), dp(300005);
 
void DFS(int v, int p)
{   
    // Mark the current node as visited and
    // print it
    ch[v] = 1;
    // cout << v << " ";
    // Recur for all the vertices adjacent
    // to this vertex
    vll child;
    for (auto i:adj[v]){
        if (i!=p){
            DFS(i,v);
            ch[v]+=ch[i];   
            child.pb(i);
        }
    }

    
    if(sz(child)==0){
        dp[v] = 0;
    }
    else if(sz(child)==1){
        dp[v] = ch[child[0]]-1;
    }
    else{
        dp[v] = max(dp[child[0]]+ch[child[1]]-1,dp[child[1]]+ch[child[0]]-1);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ini(n);

        repg(0,300005) adj[i].clear();
        
        repg(0,n-1){
            ll u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        DFS(1,0);
        cout<<dp[1]<<enl;
    }
}