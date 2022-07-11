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
        vll p(n-1);
        input(p);
        vll x;
        x.pb(1);
        map<ll,ll> mp;
        repg(0,n-1)
            mp[p[i]]++;
        for(auto it:mp)
            x.pb(it.second);
        sort(all(x), greater<ll>());
        
        n = sz(x);
        repg(0,n) x[i] = x[i] + i;
        ll ans =x[n-1];
        repg(0,n){
            x[i]=max(0ll,x[i]-x[n-1]);
        }
        // cout<<ans<<" ";
        ll sum = 0;
        repg(0,n) sum+=x[i];
        // cout<<sum<<" ";
        while(sum>0){
            ans++;
            repg(0,n){
                if(x[i]!=0){
                    x[i] = x[i]-1;
                    sum--;
                }
            }
            if(x[max_element(all(x))-x.begin()]){
                x[max_element(all(x))-x.begin()]--;
                sum--;
            }

        }
        cout<<ans<<enl;
    }
}