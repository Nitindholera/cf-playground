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
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define int ll
#define INF LONG_LONG_MAX

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vll a(n);
        input(a);
        sort(all(a));
        ll ans = 0;
        
        repg(0,n){
            ll l1 = l-a[i];
            ll r1 = r-a[i];
            ans += upper_bound(all(a),r1) - lower_bound(all(a),l1);
        }
        repg(0,n){
            if(2*a[i] >=l && 2*a[i]<=r){
                ans--;
            }
        }
        cout<<ans/2<<enl;
    }
}