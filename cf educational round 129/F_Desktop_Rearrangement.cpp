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
vector<string> dsktp;
ll n,m;

ll solve(){
    ll ions = 0;
    repg(0,n){
        rep(j,0,m,1){
            if(dsktp[i][j]=='*')
                ions++;
        }
    }

    ll ans = 0;
    repg(0,ions/n){
        rep(j,0,n,1){
            if(dsktp[j][i]=='.')
                ans++;
        }
    }

    repg(0,ions%n){
        if(dsktp[i][ions/n]=='.')
            ans++;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int q;
    cin>>n>>m>>q;
    dsktp.resize(n);
    repg(0,n){
        string temp;
        cin>>temp;
        dsktp[i] = temp;
    }


    ll ions = 0,in = 0;
    repg(0,n){
        rep(j,0,m,1){
            if(dsktp[i][j]=='*')
                ions++;
        }
    }

    repg(0,ions){
        if(dsktp[i%n][i/n] == '*')
            in++;
    }

    
    while(q--){
        ll x,y,flag;
        cin>>x>>y;
        x--;y--;
        if(dsktp[x][y] == '*'){
            if(dsktp[(ions-1)%n][(ions-1)/n] == '*'){
                in--;
            }
            ions--;
            if((y*n+x+1) <= ions){
                in--;
            }
            dsktp[x][y] = '.';
        }
        else if(dsktp[x][y] == '.'){
            if((y*n+x+1) <= ions){
                in++;
            }
            ions++;
            dsktp[x][y] = '*';
            if(dsktp[(ions-1)%n][(ions-1)/n] == '*'){
                in++;
            }
        }
        cout<<ions-in<<enl;
    }
}