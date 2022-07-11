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
    vll h = {0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};
    vll m = {0,10,20,30,40,50,1,11,21,31,41,51,2,12,22,32};
    vll palin(16,0);
    repg(0,16) palin[i] = h[i]*60+m[i];
    map<ll,ll> mp;
    repg(0,16) mp[palin[i]]++;

    while(t--){
        string s;
        cin>>s;
        ini(x);
        ll hr = (s[0]-'0')*10+s[1]-'0';
        ll min = (s[3]-'0')*10+s[4]-'0';
        min+=hr*60;
        set<ll> st;
        repg(0,1440){
            if(mp[min]==1) st.insert(min);
            min = (min+x)%1440;
        }
        cout<<sz(st)<<enl;
    }
}