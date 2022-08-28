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
    // cout<<(1<<5);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vll a(n);
        inv(a);
        ll ans = 0;

        vector<vll> odd(n, vll(71,0)),sum(n, vll(71,0));
        rep(j,0,70,1){
            odd[n-1][j] = (a[n-1]>>j)%2;
            sum[n-1][j] = (a[n-1]>>j);
        }
        rep(j,0,70,1){
            for(int i = n-2;i>=0;i--){
                sum[i][j] = sum[i+1][j] + (a[i]>>j);
                odd[i][j] = odd[i+1][j] + (a[i]>>j)%2;
            } 
        }
        ll bad = 0;
        repg(0,n){
            if(k< (sum[i][bad] - sum[i][bad+1]))
                ans += a[i]-k;
            else{
                bad++;
                ans += (a[i]>>bad);
            }
        }
        cout<<ans<<enl;
    }
}