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
        ini(k);
        vll a(n);
        inv(a);

        ll ans = 0;
        ll mx = max_element(all(a))-a.begin();
        vll sum(n,0);
        sum[0] = a[0];
        repg(1,n){
            sum[i] = sum[i-1] + a[i];
        }
        if(n==1){
            ans = sum[0] + k-1;
        }
        else if(k<=n){
            ans = sum[k-1];
            // cout<<ans<<" ";
            repg(0,n-k){
                ans = max(ans,sum[i+k]-sum[i]);
            }
            ans+=(k*(k-1))/2;
            
        }
        else{
            ans+=sum[n-1];
            k-=n; ans+=(n*(n-1))/2;
            ans+=(k/(n-1))*n*(n-1);
            k%=(n-1);
            ans+=k*n;   
        }
        cout<<ans<<enl;
    }
}