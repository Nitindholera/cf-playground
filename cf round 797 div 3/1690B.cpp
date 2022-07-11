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
        vll a(n),b(n);
        inv(a);
        inv(b);
        vll boo(n,0);
        string ans = "NO";
        repg(0,n){
            
            a[i] = a[i] - b[i];
            if(b[i]==0)
                boo[i] = 1;
        }
        vll s1,s2;
        repg(0,n){
            if(boo[i]==0) s1.pb(a[i]);
            else{
                s2.pb(-a[i]);
            }
        }
        // cout<<(sz(s1));
        // cout<<(sz(s2));

        if(sz(s1)>0 && sz(s2)>0){
            // cout<<"hkgsfk";
            if(*min_element(all(s1))==*max_element(all(s1)) && -*min_element(all(s2))<=*min_element(all(s1)) && *min_element(all(s1))>=0)
                ans = "YES";
        }
        else if(sz(s1)){
            if(*min_element(all(s1))==*max_element(all(s1)) && *min_element(all(s1))>=0) ans = "YES";
        }
        else{
            ans = "YES";
        }
        cout<<ans<<enl;
    }
}