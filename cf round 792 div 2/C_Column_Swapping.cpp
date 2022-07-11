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
        int n,m;
        cin>>n>>m;
        vector<vll> grid(n,vll(m));

        repg(0,n){
            rep(j,0,m,1){
                cin>>grid[i][j];
            }
        }

        // repg(0,n){
        //     rep(j,0,m,1){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<enl;
        // }
        vll ch[n];
        for(int lo = 0;lo<n;lo++){
            vll temp = grid[lo];
            sort(all(temp));
            repg(0,m){
                if(grid[lo][i]!=temp[i])
                    ch[lo].pb(i);
            }
        }

        ll flag = 0,l=-1,r=-1;
        repg(0,n){
            if(sz(ch[i])!=2 && sz(ch[i]) != 0){
                flag = 1;
                break;
            }
            else if(sz(ch[i])==2 && l==-1 && r==-1){
                l = ch[i][0];
                r = ch[i][1];
            }
            else if(sz(ch[i])==2 && (l!=ch[i][0] || r!=ch[i][1])){
                flag = 1;
                break;
            }
        }
        repg(0,n){
            if(sz(ch[i])==0 && flag==0 && l!=-1){
                if(grid[i][l] != grid[i][r]){
                    flag = 1;
                }
            }
        }
        if(l==-1 && r==-1){
            l = 0;
            r = 0;
        }
        if(flag == 1)
            cout<<-1<<enl;
        else{
            cout<<l+1<<" "<<r+1<<enl;
        }
    }
}