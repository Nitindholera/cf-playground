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
        vll l(n), r(n), c(n);
        repg(0,n) cin>>l[i]>>r[i]>>c[i];

        ll lo = l[0], ro = r[0];
        ll clseg = c[0], crseg = c[0];
        pll longestseg = {r[0], l[0]};
        ll clongestseg = c[0];
        cout<<c[0]<<enl;
        repg(1,n){
            if(l[i]<lo){
                lo = l[i];
                clseg = c[i];
            }
            else if(l[i]==lo){
                if(c[i]<clseg){
                    clseg = c[i];
                }
            }

            if(r[i]>ro){
                ro = r[i];
                crseg = c[i];
            }
            else if(r[i]==ro){
                if(c[i]<crseg){
                    crseg = c[i];
                }
            }

            if(r[i]-l[i]>longestseg.ff-longestseg.ss){
                clongestseg = c[i];
                longestseg = {r[i], l[i]};
            }
            else if(r[i]-l[i]==longestseg.ff-longestseg.ss){
                if(c[i]<clongestseg){
                    clongestseg = c[i];
                }
            }
            ll ans = crseg+clseg;
            if(ro-lo==longestseg.ff-longestseg.ss) ans = min(clongestseg,ans);
            cout<<ans<<enl;
        }
    }
}