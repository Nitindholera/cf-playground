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

ll fu(ll base, ll m){
    ll ans = 1;
    while(base%m==0){
        ans = ans*m;
        base = base/m;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vll a(n);
        inv(a);
        ini(k);
        vll b(k);
        inv(b);

        vpll x,y;
        repg(0,n){
            ll num = fu(a[i],m);
            x.pb({a[i]/num, num});
        }
        repg(0,k){
            ll num = fu(b[i],m);
            y.pb({b[i]/num, num});
        }
        string ans = "YES";

        vpll x1, y1;
        repg(0,sz(x)){
            ll indx = i+1;
            ll val = x[i].ss;
            while(x[i].ff==x[indx].ff && indx<sz(x)){
                val+=x[indx].ss;
                indx++;
            }
            x1.pb({x[i].ff, val});
            i = indx-1;
        }
        repg(0,sz(y)){
            ll indx = i+1;
            ll val = y[i].ss;
            while(y[i].ff==y[indx].ff && indx<sz(y)){
                val+=y[indx].ss;
                indx++;
            }
            y1.pb({y[i].ff, val});
            i = indx-1;
        }

        // repg(0,sz(x1)) cout<<x1[i].ff<<" "<<x1[i].ss<<enl;
        // cout<<enl;
        // repg(0,sz(y1)) cout<<y1[i].ff<<" "<<y1[i].ss<<enl;
        // cout<<enl<<enl;
        if(sz(x1)!=sz(y1)) ans = "NO";
        else{
            repg(0,sz(x1)){
                if(x1[i].ff!=y1[i].ff || x1[i].ss!=y1[i].ss){
                    ans = "NO";
                    break;
                }
            }
        }
        cout<<ans<<enl;
    }
}