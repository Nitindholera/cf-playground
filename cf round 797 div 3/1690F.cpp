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

ll period(string s){
    ll n = sz(s);
    for(int m=1;m<n;m++){
        ll i = 0;
        while(i<n && s[i%m]==s[i]) i++;

        if(i>=n && n%m==0) return m;
    }
    return n;
}

signed main(){
    ios_base::sync_with_stdio(false);
    // cout<<period("abcab")<<enl;
    int t;
    cin>>t;
    ll to = 1;
    while(t--){
        ini(n);
        string s;
        cin>>s;
        vll p(n);
        inv(p);
        ll ans = 1;
        vll cycles;
        vll used(n+1,0);
        repg(0,n){
            if(!used[p[i]]){
                vll temp;
                temp.pb(p[i]);
                ll num = p[i]; 
                do
                {
                    num = p[num-1];
                    temp.pb(num);
                } while (num!=temp[0]);

                for(auto it:temp) used[it] = 1;

                string tmp;
                for(int it = 0;it<sz(temp)-1;it++) tmp+=s[temp[it]-1];
                // cout<<tmp<<enl;
                cycles.pb(period(tmp));
            }
        }
        // print(cycles);
        for(auto it:cycles){
            ans = (ans*it)/__gcd(ans,it);
        }
        if(to==100){
            cout<<n<<enl;
            cout<<s<<enl;
            print(p);
        }
        // to++;
        cout<<ans<<enl;
    }
}