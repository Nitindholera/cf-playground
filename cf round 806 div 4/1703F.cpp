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
        ini(n);
        vll a(n);
        inv(a);

        vll ok(n,0);
        repg(0,n) if(a[i]<i+1) ok[i] = 1;
        // print(ok);
        vll sum(n);sum[0] = ok[0];
        repg(1,n) sum[i] = sum[i-1] + ok[i];
        ll ans = 0;
        rep(j,0,n,1){
            if(ok[j]==1){
                ll num = a[j]-1;
                // cout<<num<<" ";
                if(num >= n) num = n-1;
                if(num >= 1)
                    ans+=sum[num-1];
            }
        }
        cout<<ans<<enl;
    }
}