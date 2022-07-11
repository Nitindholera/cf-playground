#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353
#define all(v) (v).begin(),(v).end()
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define int ll
#define INF LONG_LONG_MAX

signed main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int x0,y0;
    cin>>x0>>y0;
    vll x(n),y(n);
    repg(0,n){
        cin>>x[i];
        x[i] = x[i] - x0;
        cin>>y[i];
        y[i] = y[i] - y0;
    }

    vector<pll> slope;

    repg(0,n){
        int flag = 0;
        for(auto sl : slope){
            if(y[i]*sl.first == x[i]*sl.second){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            slope.pb({x[i],y[i]});
        }
    }
    cout<<sz(slope)<<enl;
}