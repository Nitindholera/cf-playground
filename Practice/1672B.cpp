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
        string s2;
        cin>>s2;
        int n = sz(s2);
        string ans = "YES";
        vll b(n), a(n);
        ll a1 = 0, b1 = 0;
        repg(0,n){
            if(s2[i]=='A') a1++;
            else b1++;
            a[i] = a1;
            b[i] = b1;
        }
        repg(0,n) if(b[i]>a[i]) ans = "NO";

        if(s2[n-1]!='B' || s2[0] != 'A') ans = "NO";
        cout<<ans<<enl;
    }
}