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
        priority_queue<pair<ll,ll>> que;
        ini(n);
        vll a(n);
        inv(a);
        map<ll,ll> mp;
        repg(0,n) mp[a[i]]++;
        
        vll s;
        for(auto it:mp) s.pb(it.second);

        sort(all(s),greater<ll>()); 
        // for(auto it:s) cout<<it<<" ";
        // cout<<enl;
        for(auto it:mp) que.push({it.second,it.first});

        int ans = n;
        while(que.size()>1){
            auto mx1 = que.top();que.pop();
            auto mx2 = que.top();que.pop();
            mx1.first--;
            mx2.first--;
            ans-=2;
            if(mx1.first)
                que.push({mx1.first,mx1.second});
            if(mx2.first)
                que.push({mx2.first,mx2.second});
        }
        cout<<ans<<enl;
    }
}