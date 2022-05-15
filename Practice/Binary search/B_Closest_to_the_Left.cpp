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

ll cheat = LONG_LONG_MAX;


int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    input(a);
    while(k--){
        int x;
        cin>>x;
        int l =0, r = n;
        while(l<(r-1)){
            int m = (l+r)/2;
            if(a[m]>x){
                r = m;
            }
            
            else{
                l = m;
            }
        }
        if(a[l]<=x)
            cout<<l+1<<"\n";
        else{
            cout<<"0\n";
        }
    }
}