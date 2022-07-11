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
    if(l==r) return l;
    ll temp;
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>temp;
    return temp;
}

signed main(){
    ios_base::sync_with_stdio(false);
    ini(n);
    ll l = 1, r = n+1, m, max2, ans;
    max2 = q(1,n);
    if(max2==1){
        l =2;r = n+1;
        while(r-l>1){
            m = (l+r)/2;
            
            if(q(1,m-1)==1) r = m;
            else l = m;
        }
        ans = l;
    }
    else if(max2!=q(1,max2)){
        l = max2+1;r = n+1;
        while(r-l>1){
            m = (l+r)/2;

            if(q(max2,m-1)==max2) r = m;
            else l = m;
        }
        ans = l;
    }
    else{
        l = 0, r = max2;
        while(r-l>1){
            m = (l+r)/2;

            if(q(m,max2)==max2) l = m;
            else r = m;
        }
        ans = l;
    }

    cout<<"! "<<ans<<endl;
}