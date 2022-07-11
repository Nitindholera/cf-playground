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
        string y;
        cin>>y;
        ll sum = 0;
        ll n = sz(y);
        repg(0,n) sum+=y[i] - '0';
        ll f = 0, f2=0, fu = 0;
        repg(0,n){
            if(y[i]=='0') f ++;
            else if((y[i]-'0') %2==0) f2 = 1;
        }
        // cout<<sum<<" "<<f<<" ";
        if(f && f+f2-1>0 && (sum%3 == 0)) cout<<"red\n";
        else cout<<"cyan\n";
    }
}