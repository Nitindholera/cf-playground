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
        vll l(n),r(n);
        repg(0,n) cin>>l[i]>>r[i];
        vector<pair<ll,pll>> v(n);
        repg(0,n) v[i] = {r[i]-l[i], {l[i],r[i]}};
        sort(all(v));

        vll ans(n);
        vll used(n+1,0);

        repg(0,n){
            for(int j = v[i].ss.ff; j<=v[i].ss.ss; j++){
                if(used[j]==0){
                    ans[i] = j, used[j] = 1;
                    break;
                }
            }
        }
        repg(0,n){
            cout<<v[i].ss.ff<<" "<<v[i].ss.ss<<" "<<ans[i]<<enl;
        }
    }
}