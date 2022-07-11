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
        int b,q,y;
        int c,r,z;
        cin>>b>>q>>y;
        cin>>c>>r>>z;
        ll ans=0;
        if(r%q==0 && c>=b && (c-b)%q == 0 && b+(y-1)*q >= c+(z-1)*r){
            if(b>c-r || b+(y-1)*q < c+z*r)
                ans = -1;
            else{
                ans = 0;
                for(int p = 1;p*p<=r;p++){
                    if(r%p ==0){
                        ll p2 = r/p;
                        if(p*q==__gcd(p,q)*r){
                            ans+= (r/p)*(r/p);
                            ans = ans%MOD;
                        }
                        if(p*p!=r && p2*q==__gcd(p2,q)*r){
                            ans+=p*p;
                            ans = ans%MOD;
                        }
                    }
                }
                
            }   
        }
        else{
            ans = 0;
        }

        cout<<ans<<enl;
    }
}