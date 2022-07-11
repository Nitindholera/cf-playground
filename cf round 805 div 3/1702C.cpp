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
        int n,k;
        cin>>n>>k;
        vll u(n);
        inv(u);

        map<ll,vll> pos;
        repg(0,n) pos[u[i]].pb(i);

        while(k--){
            int a,b;
            cin>>a>>b;

            if(sz(pos[a])>0 && sz(pos[b])>0){
            if(pos[a][0]<=pos[b][sz(pos[b])-1]) cout<<"YES";
            else cout<<"NO";
            }
            else cout<<"NO";
            cout<<enl;
        }
    }
}