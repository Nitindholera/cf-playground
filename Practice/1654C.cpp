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

struct compare{
    bool operator() (const ll& x, const ll& y) const{
        return x>y;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vll a(n);
        inv(a);

        ll w = 0;
        repg(0,n) w+=a[i];

        multiset<ll, compare> q, p;
        p.insert(w);
        repg(0,n) q.insert(a[i]);

        // for(auto it: q) cout<<it<<" ";

        while(!p.empty()){
            ll big = *(p.begin());
            if(big<*(q.begin())) break;
            p.erase(p.begin());
            if(q.find(big) != q.end()){
                q.erase(q.find(big));
            }
            else{
                p.insert(big/2);
                p.insert(big-big/2);
            }
        }
        if(q.empty()) cout<<"YES";
        else cout<<"NO";
        cout<<enl;
    }
}