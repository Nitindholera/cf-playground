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
        string a,b;cin>>a>>b;
        vector<string> sa,sb;
        
        for(int size = 1;size<=sz(a);size++){
            rep(j,0,sz(a)-size+1,1){
                sa.pb(a.substr(j,size));
            }
        }
        for(int size = 1;size<=sz(b);size++){
            rep(j,0,sz(b)-size+1,1){
                sb.pb(b.substr(j,size));
            }
        }
        ll mxsz = 0;
        for(auto ita:sa){
            for(auto itb:sb){
                if(ita.compare(itb)==0){
                    mxsz = max(mxsz,sz(itb));
                }
            }
        }
        cout<<sz(a)+sz(b)-2*mxsz<<enl;
    }
}