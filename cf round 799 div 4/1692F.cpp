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
        vll num(10,0);
        repg(0,n) num[a[i]%10]++;
        string ans = "NO";
        ll f = 0;
        ll k1,k2,k3;
        repg(0,10){
            rep(j,0,10,1){
                rep(k,0,10,1){
                    if((i+j+k)%10==3){
                        if(i==j && j==k){
                            if(num[i]>=3) ans = "YES";
                        }
                        else if(i==j){
                            if(num[i]>=2 && num[k]>=1) ans = "YES";
                        }
                        else if(j==k){
                            if(num[j]>=2 && num[i]>=1) ans = "YES";
                        }
                        else if(i==k){
                            if(num[i]>=2 && num[j]>=1) ans = "YES";
                        }
                        else{
                            if(num[i]>=1 && num[j]>=1 && num[k]>=1) ans = "YES";
                        }
                    }
                }
            }
        }
        // cout<<k1<<" "<<k2<<" "<<k3<<enl;
        cout<<ans<<enl;
    }
}