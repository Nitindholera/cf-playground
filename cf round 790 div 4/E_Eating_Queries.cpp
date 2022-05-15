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


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n), x(q);
        input(a);
        input(x);
        sort(a.begin(),a.end(), greater<>());
        vector<ll> sum(n);
        sum[0] = a[0];
        rep(j,1,n,1){
            sum[j] = sum[j-1] + a[j];
        }
        // print(sum);
        repg(0,q){
            ll query = x[i], ans = -1;
            ans = lower_bound(sum.begin(),sum.end(),query) - sum.begin()+1;
            if(ans == n+1)
                ans = -1;
            cout<<ans<<"\n";
        }
    }
}