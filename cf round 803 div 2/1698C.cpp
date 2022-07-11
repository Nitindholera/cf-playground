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
        sort(all(a));

        string ans = "YES";
        repg(2,n-2){
            if(a[i]!=0) ans = "NO";
        }
        if(n>=5){
            vll x(5);
            x[0] = a[0];
            x[1] = a[1];
            x[2] = a[n-2];
            x[3] = a[n-1];
            x[4] = 0;
            repg(0,5){
                rep(j,i+1,5,1){
                    rep(k,j+1,5,1){
                        ll num = x[i]+x[j]+x[k];
                        if(num!=x[0] && num!=x[1] && num!=x[2] && num!=x[3]){
                            ans = "NO";
                        }
                    }
                }
            }
        }
        else if(n==4){
            repg(0,4){
                rep(j,i+1,4,1){
                    rep(k,j+1,4,1){
                        ll num = a[i]+a[j]+a[k];
                        if(num!=a[0] && num!=a[1] && num!=a[2] && num!=a[3]){
                            ans = "NO";
                        }
                    }
                }
            }
        }
        else if(n==3){
            ll num = a[0] + a[1] +a[2];
            if(num != a[0] && num!=a[1] && num!=a[2]) ans = "NO";
        }
        cout<<ans<<enl;
    }
}