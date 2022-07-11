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
        pll p1,p2,p3;
        cin>>p1.ff>>p1.ss;
        cin>>p2.ff>>p2.ss;
        cin>>p3.ff>>p3.ss;
        // cout<<p1.ff<<enl;
        ll ans;
        if(p1.ss==p2.ss && p3.ss<p1.ss){
            ans = abs(p1.ff-p2.ff);
        }
        else if(p2.ss==p3.  ss && p1.ss<p2.ss){
            ans = abs(p2.ff-p3.ff);

        }
        else if(p1.ss==p3.ss && p2.ss<p1.ss){
            ans = abs(p1.ff-p3.ff);

        }
        else {
            ans = 0;
        }
        cout<<ans<<enl;
    }
}