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
#define INF LONG_LONG_MAX

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ss1,ss2,s1,s2;
        cin>>ss1>>ss2;

        int l=0,r=n-1;
        repg(0,n){
            if(ss1[i]=='*' || ss2[i]=='*'){
                l = i;
                break;
            }
        }
        repg(0,n){
            if(ss1[n-i-1]=='*' || ss2[n-1-i]=='*'){
                r = n-1-i;
                break;
            }
        }
        s1.clear();s2.clear();
        repg(l,r+1){    
            s1 +=ss1[i];
            s2 +=ss2[i];
        }
        // cout<<s1<<enl;
        // cout<<s2<<enl;
        n=sz(s1);
        vector<vll> cost(2,vll(n,0)), dp(2, vll(n,INF));
        repg(0,n){
            if(s1[i]=='*')
                cost[0][i] = 1;
            if(s2[i]=='*')
                cost[1][i] = 1;
        }
        
        dp[0][0] = cost[1][0];
        dp[1][0] = cost[0][0];

        repg(1,n){
            dp[0][i] = min(dp[0][i-1]+1+cost[1][i], dp[1][i-1]+2);
            dp[1][i] = min(dp[1][i-1]+1+cost[0][i], dp[0][i-1]+2);
        }

        // repg(0,n) cout<<dp[0][i];
        // cout<<enl;
        // repg(0,n) cout<<dp[1][i];
        // cout<<enl;

        cout<<min(dp[0][n-1],dp[1][n-1])<<enl;
    }
}