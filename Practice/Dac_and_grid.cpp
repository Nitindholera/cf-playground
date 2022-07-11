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
    int h,m,w;
    cin>>h>>w>>m;
    vll row(h+1,0);
    vll col(w+1,0);
    map<pll,ll> mp;
    repg(0,m){
        int x,y;
        cin>>x>>y; //x<=h, y<=w;
        row[x]++;
        col[y]++;
        mp[{x,y}] = 1;
    }




    // print(row);
    // print(col);
    int rowmx = *max_element(all(row));
    int colmx = *max_element(all(col));
    ll ans = 0;

    vll rowidx, colidx;
    repg(1,h+1) if(row[i]==rowmx) rowidx.pb(i);
    repg(1,w+1) if(col[i]==colmx) colidx.pb(i);

    for(auto it1: rowidx){
        for(auto it2: colidx){
            ans = max(ans, rowmx + colmx - mp[{it1,it2}]);
        }
    }
    cout<<ans;
}