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

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

ll bSearch( vector < ll > &vec , ll l, ll r, ll x){
    if(r>=l){
    ll mid = l+(r-l)/2;
    if(vec[mid] == x)
        return mid;
    else if(vec[mid]>x)
            return bSearch(vec, l,mid-1,x);
        else
            return bSearch(vec, mid+1, r, x);
    }
       return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        input(a);
        ll num = n;
        sort(a.begin(),a.end());
        for(ll i = 0;i<n-1;i++){
            num+=max(a[i],a[i+1]);
        }
        num+=max(a[n-1],a[0]);
        
        if(num<=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}