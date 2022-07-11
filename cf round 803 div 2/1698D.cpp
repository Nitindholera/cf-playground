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

ll q(ll l, ll r){
    cout<<"? "<<l+1<<" "<<r+1<<endl;
    vll fu(r-l+1);
    inv(fu);
    ll ans = 0;
    repg(0,r-l+1){
        if(fu[i]>=l+1 && fu[i]<=r+1) ans++;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        ll l = 0, r = n;
        while(l<r-1){
            ll m = (l+r)/2;
            ll num = q(l, m-1);
            if(num%2==1) r = m;
            else l = m;
        }
        cout<<"! "<<l+1<<endl;
    }
}