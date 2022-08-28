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
        int n, m;
        cin>>n>>m;
        int ok = 1;
        if(n==1 && m==1) ok = 2;
        else{
            if(n%2==0 && m%2==0) ok = 2;
            else if(n%2==1 && m%2 ==1) ok = 2;
        }
        if(ok==1) cout<<"Burenka";
        else cout<<"Tonya";
        cout<<enl;
    }
}