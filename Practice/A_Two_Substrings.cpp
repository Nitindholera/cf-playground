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
    string s;
    cin>>s;

    int n = sz(s);
    vll ab,ba;
    repg(0,n-1){
        if(s[i]=='A' && s[i+1]=='B')
            ab.pb(i);
        else if(s[i]=='B' && s[i+1]=='A')
            ba.pb(i);
    }
    string ans = "NO";
    ll flag = 0;
    // print(ab);
    // print(ba);
    for(auto i:ab){
        for(auto j:ba){
            if(j!=(i+1) && j!=(i-1)){
                ans = "YES";
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }

    cout<<ans<<enl;
}