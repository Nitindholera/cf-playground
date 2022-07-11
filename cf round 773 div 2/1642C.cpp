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
        ini(x);
        vll a(n);
        inv(a);

        sort(all(a));
        map<ll,ll> mp;
        repg(0,n) mp[a[i]]++;
        ll ans = 0;
        repg(0,n){
            if(mp[a[i]]>0){
                if(mp[a[i]*x]>0){
                    mp[a[i]]--;
                    mp[a[i]*x]--;
                }
                else if(mp[a[i]*x]==0){
                    ans++;
                    mp[a[i]]--;
                }
            }
        }
        cout<<ans<<enl;
    }
}