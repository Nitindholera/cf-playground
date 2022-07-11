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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll b(n+2);
        input(b);
        sort(all(b));

        
        ll sum = b[n+1];
        ll scsum = 0;
        repg(0,n+1){
            scsum+=b[i];
        }
        ll x = scsum - sum;
        ll idx = -1;
        repg(0,n+1){
            if(b[i]==x){
                idx = i;
                break;
            }
        }

        if(scsum == 2*b[n]){
            repg(0,n)
                cout<<b[i]<<" ";
        }
        else{
            if(idx==-1)
                cout<<-1;
            else{
                repg(0,n+1){
                    if(i!=idx)
                        cout<<b[i]<<" ";
                }
            }
        }
        cout<<enl;
    }
}