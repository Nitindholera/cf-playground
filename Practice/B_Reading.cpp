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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    ini(n);
    ini(k);

    vll a(n);
    inv(a);

    vpll adash;

    repg(0,n){
        adash.pb({a[i],i+1});
    }

    sort(all(adash));
    reverse(all(adash));
    cout<<adash[k-1].ff<<enl;
    vll b;
    repg(0,k){
         b.pb(adash[i].ss);
    }
    sort(all(b));
    print(b);

}