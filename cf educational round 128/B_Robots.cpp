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
#define vll vector<ll>
#define pll pair<ll,ll>


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        string temp;
        repg(0,n){
            cin>>temp;
            rep(j,0,m,1){
                if(temp[j]=='E')
                    arr[i][j] = 0;
                else if(temp[j]=='R')
                    arr[i][j] = 1;
            }
        }
        string ans = "YES";
        pll p;
        int flag =0;
        repg(0,n){
            rep(j,0,m,1){
                if(arr[i][j] == 1){
                    p = {i,j};
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        } 
        //cout<<p.first<<" "<<p.second<<"\n";
        repg(p.first,n){
            rep(j,0,p.second,1){
                if(arr[i][j]==1){
                    ans = "NO";
                    break;
                }
            }
            if(ans[0] == 'N')
                break;
        }

        cout<<ans<<enl;
    }
}