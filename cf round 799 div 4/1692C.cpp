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
        vector<string> b(8);
        string temp;
        repg(0,8){
            cin>>temp;
            b[i] = temp;
        }

        vll cnt(8,0);
        repg(0,8){
            rep(j,0,8,1){
                if(b[i][j]=='#') cnt[i]++;
            }
        }
        ll x,y;
        repg(1,7){
            if(cnt[i-1]==2 && cnt[i]==1 && cnt[i+1]==2){
                x = i;
                break;
            }
        }
        repg(0,8){
            if(b[x][i]=='#'){
                y = i;
                break;
            }
        }
        cout<<x+1<<" "<<y+1<<enl;
    }
}