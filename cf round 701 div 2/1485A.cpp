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

ll func(ll a,ll b){
    ll ans = 0;
    while(a>0){
        a = a/b;
        ans++;
    }
    return ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        ll ans = INF, f = 0;
        if(b==1){
            b = 2;
            f = 1;
        }
        for(int i = b;i<(b+100);i++){
            ans = min(ans,i-b + func(a,i));
        }
        cout<<ans+f<<enl;
    }
}