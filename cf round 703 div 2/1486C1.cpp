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

ll q(ll l, ll r){
    ll temp;
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>temp;
    return temp;
}

signed main(){
    ios_base::sync_with_stdio(false);
    ini(n);
    ll l = 1, r = n, m, max2, ans;
    while(l<r){
        m = (l+r)/2;
        if(r-l==1){
            ans = l+r-q(l,r);
            break;
        }
        else if(r-l==2){
            max2 = q(l,r);
            if(max2==l){
                ans = m+r-q(m,r);
            }
            else if(max2 == r){
                ans = l+m-q(l,m);
            }
            else{
                ans = r;
                if(q(l,m)==m) ans = l;
            }
            break;
        }
        else{
            max2 = q(l,r);
            if(max2<=m){
                if(max2 == q(l,m)) r = m;
                else l = m+1;
            }
            else{
                if(max2 == q(m+1,r)) l = m+1;
                else r = m;
            }
        }
    }

    cout<<"! "<<ans<<endl;
}