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

class Graph{
private:
    ll v;
    vector<vll> adj;
    vll vis;
public:
    Graph(int v1){
        v = v1;
        adj.resize(v1+1);
        vis.resize(v1+1,0);
    }
    
    void addEdge(int v1, int v2){
        adj[v1].pb(v2);
        adj[v2].pb(v1);
    }

    int dfs(int root, int num){
        vis[root] = 1;
        // cout<<root<<" ";
        num++;
        for(auto child: adj[root]){
            if(!vis[child])
                num = dfs(child, num);
        }
        return num;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vll a(n),b(n);
        repg(0,n) cin>>a[i]>>b[i];
        ll ch = 1;

        vll v(n+1,0);
        repg(0,n){
            if(a[i]==b[i]) ch = 0;

            v[a[i]]++;
            v[b[i]]++;
        }
        repg(1,n+1) if(v[i]!=2) ch = 0;

        string ans = "NO";
        if(ch){
            Graph g(n);
            repg(0,n) g.addEdge(a[i],b[i]);
            ll ok = 1;
            repg(0,n){
                // cout<<g.dfs(i+1,0)<<" ";
                ll num = g.dfs(i+1,0);
                if(num%2 == 1 && num!=1) ok = 0;
            }
            if(ok) ans = "YES";
        }

        cout<<ans<<enl;
    }
}