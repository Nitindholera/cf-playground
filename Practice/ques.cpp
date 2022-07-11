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

struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    // FenwickTree(int n) {
    //     this->n = n;
    //     bit.assign(n, 0);
    // }

    // FenwickTree(vector<int> a) : FenwickTree(a.size()) {
    //     for (size_t i = 0; i < a.size(); i++)
    //         add(i, a[i]);
    // }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    ini(t);
    while(t--){
        ini(n);
        ini(q);
        vll a(n);
        inv(a);

        vector<struct FenwickTree> trees(1001);
        map<ll,vll> mp;
        repg(0,n) mp[a[i]].pb(i);

        for(int i = 1;i<=1000;i++){
            trees[i].n = n;
            trees[i].bit.assign(n,0);
            for(auto it: mp[i]){
                trees[i].add(it, 1);
            }
        }

        while(q--){
            ini(choice);
            if(choice==1){
                ll i, v;
                cin>>i>>v;
                i--;
                trees[a[i]].add(i, -1);
                trees[v].add(i, 1);
                a[i] = v;
            }
            else{
                ll l,r;
                cin>>l>>r;
                l--;r--;
                ll ans = 0;
                repg(1,1001) if(trees[i].sum(l,r)%2==1) ans++;
                cout<<ans<<" ";

            }
        }
        cout<<enl;
    }
}