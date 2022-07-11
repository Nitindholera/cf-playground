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
        string s;
        cin>>s;
        ll ans=0,a1=0,a2=0;
        if(n==2){
            ans = 2;
        }
        else{
            ll mid1 = n/2, mid2 = n/2;
            while(s[mid1] == s[mid1-1] && mid1>=0){
                mid1--;
                a1++;
            }
            while(s[mid2] == s[mid2+1] && mid2<n){
                mid2++;
                a2++;
            }
            ans = a1+a2+1;
        }
        cout<<ans<<enl;
    }
}