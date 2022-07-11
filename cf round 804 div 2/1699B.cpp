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
        int n,m;
        cin>>n>>m;
        vector<vll> a(n,vll(m,0));

        for(int i = 0;i<n/2;i++){
            for(int j = 0;j<m/2;j++){
                if((i+j)%2==0){
                    a[2*i][2*j] = 1;
                    a[2*i+1][2*j] = 0;
                    a[2*i][2*j+1] = 0;
                    a[2*i+1][2*j+1] = 1;
                }
                else{
                    a[2*i][2*j] = 0;
                    a[2*i+1][2*j] = 1;
                    a[2*i][2*j+1] = 1;
                    a[2*i+1][2*j+1] = 0;
                }
            }
        }

        repg(0,n){
            rep(j,0,m,1) cout<<a[i][j]<<" ";
            cout<<enl;
        }
    }
}