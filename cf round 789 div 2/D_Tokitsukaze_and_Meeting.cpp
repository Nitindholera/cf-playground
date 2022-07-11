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
        string s;
        cin>>s;

        vector<int> rows(n*m), columns(n*m);
        vll col(m,0);
        ll ans = 0;
        repg(0,n*m){
            if(s[i]=='1'){
                if(col[i%m]==0){
                    col[i%m] = 1;
                    ans++;
                }
            }  
            columns[i] = ans;              
        }
        ll lastserious = -1;
        repg(0,n*m){
            if(s[i]=='1')
                lastserious = i;

            if(i>=m){
                if(i-lastserious < m)
                    rows[i] = rows[i-m]+1;
                else
                    rows[i] = rows[i-m];
            }
            else{
                if(lastserious==-1)
                    rows[i] = 0;
                else
                    rows[i] = 1;
            }

        }
        repg(0,n*m)
            cout<<rows[i]+columns[i]<<" ";
        cout<<enl;
    }
}