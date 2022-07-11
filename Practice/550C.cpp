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

    vll cheat;
    repg(0,13) cheat.pb(8*i);
    // print(cheat);

    int ans = -1;
    repg(0,n){
        if(s[i]=='0' || s[i]=='8'){
            ans = s[i]-'0';
            break;
        }
    }

    repg(0,n){
        rep(j,i+1,n,1){
            ll num = (s[i]-'0')*10 + s[j]-'0';
            for(auto it: cheat){
                if(num==it) ans = num;
            }
        }
    }

    cheat.clear();
    repg(13,125) cheat.pb(i*8);

    repg(0,n){
        rep(j,i+1,n,1){
            rep(k,j+1,n,1){
                ll num = (s[i]-'0')*100 + (s[j]-'0')*10 + s[k]-'0';
                for(auto it: cheat) if(num==it) ans = num;
            }
        }
    }

    if(ans == -1) cout<<"NO";
    else cout<<"YES\n"<<ans;
}