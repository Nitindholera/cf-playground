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
#define int ll
#define INF LONG_LONG_MAX

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll p(n);
        input(p);
        vll leaves;
        vll temp(n+1,0);
        repg(0,n) temp[p[i]] = 1;
        repg(1,n+1){
            if(temp[i]==0)
                leaves.pb(i);
        }
        if(n==1)
            leaves.pb(1);

        ll m =sz(leaves);
        vll visited(n+1,0);

        cout<<m<<enl;
        repg(0,m){
            vll temp;
            ll leav = leaves[i];
            while(visited[leav] == 0){
                temp.pb(leav);
                visited[leav] = 1;
                leav = p[leav-1];
            }
            cout<<sz(temp)<<enl;
            reverse(all(temp));
            print(temp);
        }
        cout<<enl;
    }
}