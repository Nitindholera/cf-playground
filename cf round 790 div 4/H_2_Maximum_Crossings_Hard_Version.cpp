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

vll bit;

void update(ll n, ll index, ll val){
    //index++;
    while(index<=n){
        bit[index]+= val;
        index+=(index&(-index));
    }
}

ll sum(ll index){
    ll sum = 0;
    //index++;
    while(index>0){
        sum+=bit[index];
        index-=(index&(-index));
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        input(a);
        bit.clear();
        bit.resize(n+1,0);
        ll ans = 0;
        repg(0,n){
            ans+=sum(a[n-i-1]);
            update(n,a[n-i-1],1);
        }
        cout<<ans<<enl;
    }
}