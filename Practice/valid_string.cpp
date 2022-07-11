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
    string s;
    cin>>s;
    map<ll,ll> mp;
    int n = sz(s);
    repg(0,n) mp[s[i]]++;

    vll test;
    for(auto it: mp) test.pb(it.ss);
    // print(test);
    sort(all(test));

    int f;

    if(test[0]==test[n-1]) f = 1;
    else if(test[0]==1 && test[1]==test[n-1]) f = 1;
    else if(test[0]==test[n-2] && test[n-1]==test[0]+1) f = 1;
    else f = 0;

    if(f) cout<<"YES";
    else cout<<"NO";
}