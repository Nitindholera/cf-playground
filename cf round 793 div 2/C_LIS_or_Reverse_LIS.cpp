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
        map<ll,ll> mp;
        repg(0,n){
            mp[a[i]]++;
        }
        ll ans,a1 = 0,a3 = 0;
        vll same, diff;
        for(auto it:mp){
            if(it.second > 1){
                a1++;
                same.pb(it.first);
            }
            else{
                a3++;
                diff.pb(it.first);
            }
        }
        ll x,y,flag = 0;
        
        if(a3%2 == 1){
            flag = 1;
            a3--;
        }
        x = a1 + a3/(2ll);
        y = a1 + a3 - a3/(2ll);
        if(flag == 1)
            ans = x+1;
        else 
            ans = x;
        
        cout<<ans<<enl;
    }
}