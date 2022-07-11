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

ll dis(pll x, pll y){
    return abs(x.ff-y.ff) + abs(x.ss-y.ss);
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vll> grid(n,vll(m,0));
        string temp;

        repg(0,n){
            cin>>temp;
            rep(j,0,m,1){
                if(temp[j]=='B')
                    grid[i][j] = 1;
            }
        }

        // repg(0,n){
        //     print(grid[i]);
        // }
        // cout<<enl;

        ll a=0,b=0, num = 0;
        ll n1 = INF,n2 = -1,n3 = INF,n4=-INF;
        pll c1,c2,c3,c4;
        repg(0,n){
            rep(j,0,m,1){
                if(grid[i][j]==1){
                    if(i+j<n1){
                        n1 = i+j;
                        c1.ff = i;c1.ss = j;
                    }
                    if(i+j>n2){
                        n2 = i+j;
                        c2.ff = i;c2.ss = j;
                    }
                    if(i-j<n3){
                        n3 = i-j;
                        c3.ff = i;c3.ss = j;
                    }
                    if(i-j>n4){
                        n4 = i-j;
                        c4.ff = i;c4.ss = j;
                    }
                }
            }
        }
        pll ans;
        ll dist = INF, tempdist = -1;

        repg(0,n){
            rep(j,0,m,1){
                tempdist = max(max(dis({i,j},c1),dis({i,j},c2)),max(dis({i,j},c3),dis({i,j},c4)));
        
                if(tempdist<dist){
                    dist = tempdist;
                    ans.ff = i+1;
                    ans.ss = j+1;
                }
            }
        }
        cout<<ans.ff<<" "<<ans.ss<<enl;
    }
}