#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353
#define all(v) (v).begin(),(v).end()
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = sz(s), ones = 0;
        vll dp1(n+1),dp2(n+1);
        dp1[0] = 0; dp2[n] = 0;
        repg(0,n){
            if(s[i]=='1')
                ones++;
        }
        repg(1,n+1){
            dp1[i] = dp1[i-1] + s[i-1] - '0';
        }
        for(int i=n-1;i>=0;i--){
            dp2[i] = dp2[i+1] + s[i] - '0';
        }
        ll ans = LONG_LONG_MAX;
        repg(0,n+1){
            int j = min(i+ones,n);
            ans = min(ans,max(dp1[i]+dp2[j], dp1[i]+dp2[j]+j-i-ones));
        }
        cout<<ans<<enl;
    }
}