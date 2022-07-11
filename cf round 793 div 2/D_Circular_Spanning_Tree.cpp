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
        string s;
        cin>>s;
        ll cnt = 0;
        repg(0,n) if(s[i]=='1') cnt++;
        string ans = "NO";
        vpll edge;
        if(cnt!=0 && cnt%2==0){
            ans = "YES";
            ll idx;
            repg(0,n){
                if(s[i]=='1'){
                    idx = (i+1)%n;  
                    break; 
                }
            }
            vll baki_ke_end,baki_ke_start;
            repg(idx,n+idx){
                if(i!=idx && s[i%n]=='1')
                    baki_ke_end.pb(i);
            }
            repg(idx,n+idx){
                if((s[i%n]=='1' || i==idx) && (i+1)%n!=idx){
                    baki_ke_start.pb((i+1));
                }
            }
            // cout<<idx<<enl;
            // print(baki_ke_start);
            // print(baki_ke_end);

            vpll edges;
            repg(0,sz(baki_ke_start)){
                edges.pb({idx%n,baki_ke_start[i]%n});
                rep(j,baki_ke_start[i],baki_ke_end[i],1){
                    edges.pb({j%n,(j+1)%n});
                }
            }

            cout<<ans<<enl;
            for(auto edge : edges)
                cout<<edge.ff+1<<" "<<edge.ss+1<<enl;
        }
        else{
            cout<<ans<<enl;
        }
    }
}