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
        vll a(n);
        inv(a);
        string winner;
        if(n%2==1){
            winner = "Mike";
        }
        else{
            vll m, j;
            repg(0,n){
                if(i%2==0) m.pb(a[i]);
                else j.pb(a[i]);
            }
            ll m1,j1;
            m1 = min_element(all(m))-m.begin();
            j1 = min_element(all(j))-j.begin();
            if(m[m1]<j[j1]){
                winner = "Joe";
            }
            else if(m[m1]>j[j1]) winner = "Mike";
            else{
                if(m1<=j1){
                    winner = "Joe";
                }
                else if(m1>j1) winner = "Mike";
            }
        }
        cout<<winner<<enl;
    }
}