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

char q1(ll i){
    char temp;
    cout<<"? 1 "<<i<<endl;
    cin>>temp;
    return temp;
}

ll q2(ll l, ll r){
    ll num;
    cout<<"? 2 "<<l<<" "<<r<<endl;
    cin>>num;
    return num;
}

signed main(){
    ios_base::sync_with_stdio(false);
    ini(n);
    vector<char> s(n+1);
    char temp;
    ll val, diff;

    s[1] = q1(1);

}