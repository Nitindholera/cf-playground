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
        ll h1,h2,h3;
        if(n%3==0){
            h1 = (n+3)/3;
            h2 = (n+3)/3-1;
            h3 = (n+3)/3-2;
        }
        else if(n%3==1) {
            n--;
            h1 = (n+3)/3 + 1;
            h2 = (n+3)/3-1;
            h3 = (n+3)/3-2;
        }
        else{
            n-=2;
            h1 = (n+3)/3+1;
            h2 = (n+3)/3-1+1;
            h3 = (n+3)/3-2;

        }
        cout<<h2<<" "<<h1<<" "<<h3<<enl;
    }
}