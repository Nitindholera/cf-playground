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
        vector<string> v(n);
        repg(0,n) cin>>v[i];
        ll ans = 0;
        repg(0,n){
            rep(j,0,n,1){
                ll i2 = n-1-i;
                ll j2 = n-1-j;

                ll i3 = j;
                ll j3 = n-1-i;

                ll i4 = n-1-j;
                ll j4 = i;
                ll num1 = v[i][j]-'0';
                ll num2 = v[i2][j2]-'0';
                ll num3 = v[i3][j3]-'0';
                ll num4 = v[i4][j4]-'0';
                ll num = num1+num2+num3+num4;
                ans += min(num, 4-num);
            }
        }
        cout<<ans/4<<enl;
    }
}