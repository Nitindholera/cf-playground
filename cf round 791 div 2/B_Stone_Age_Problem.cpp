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

signed main(){
    ios_base::sync_with_stdio(false);
    int n,q;
    cin>>n>>q;
    vll a(n);
    input(a);
    ll sum = 0;
    repg(0,n)
        sum+=a[i];
    set<ll> s;
    repg(0,n)
        s.insert(i);
    ll val=0;
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            ll i,x;
            cin>>i>>x;
            i--;
            if(s.find(i)!=s.end()){
                sum+=x;
                sum-=a[i];
                a[i] = x;
            }
            else{
                sum+=x;
                sum-=val;
                a[i] = x;
                if(s.find(i)==s.end())
                    s.insert(i);
            }
        }
        else if(t==2){
            ll x;
            cin>>x;
            sum = (n*x);
            val = x; 
            s.clear();
        }
        cout<<sum<<enl;
    }
}