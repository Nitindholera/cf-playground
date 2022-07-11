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
        string s;
        cin>>s;
        ini(p);
        int n = sz(s);
        vll v;
        repg(0,n) v.pb(s[i]-'a'+1);
        sort(all(v), greater<ll>());
        map<ll,ll> rem;
        ll sum = 0;
        for(auto it: v) sum+=it;
        ll i = 0;
        while(sum>p){
            sum-=v[i];
            rem[v[i]]++;
            i++;
        }

        string ans;
        repg(0,n){
            if(rem[s[i]-'a'+1])rem[s[i]-'a'+1]--;
            else ans+=s[i];
        }
        cout<<ans<<enl;
    }
}