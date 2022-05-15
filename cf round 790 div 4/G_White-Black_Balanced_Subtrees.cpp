#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353
#define all(v) (v).begin(),(v).end()
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>

struct tree{
    ll b = 0;
    ll w = 0;
    ll parent_node = -1;
    vll child_node;
};

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n+1);
        for(int i=2;i<=n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s; //length n
        ll ans = 0;
        struct tree node[n+1];
        for(int i = n;i>=1;i--){
            node[i].parent_node = a[i];
            node[a[i]].child_node.pb(i);

            if(s[i-1]=='W') node[i].w++;
            else if(s[i-1]=='B') node[i].b++;

            if(sz(node[i].child_node)!=0){
                for(auto child: node[i].child_node){
                    node[i].w += node[child].w;
                    node[i].b += node[child].b;
                }
            }

            //cout<<i<<" "<<node[i].w<<" "<<node[i].b<<"\n";
            if(node[i].w == node[i].b)
                ans++;
        }
        cout<<ans<<"\n";
    }
}