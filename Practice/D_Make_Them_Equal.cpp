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
int knapSack(int W, vll wt, vll val, int n)
{
    // making and initializing dp array
    int dp[W + 1];
    memset(dp, 0, sizeof(dp));
 
    for (int i = 1; i < n + 1; i++) {
        for (int w = W; w >= 0; w--) {
 
            if (wt[i - 1] <= w)
                // finding the maximum value
                dp[w] = max(dp[w],
                            dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W]; // returning the maximum value of knapsack
}

signed main(){
    ios_base::sync_with_stdio(false);
    ll N = 10000;
    vll dp(N,INF);
    dp[0] = -1;
    dp[1] = 0;

    for(int i = 1;i<=900;i++){
        set<ll> x; // contains children of dp[i]
        for(int j = 1;j<=i;j++){
            x.insert(i+i/j);
        }

        for(auto it : x){
            dp[it] = min(dp[it],dp[i]+1);
        }
    }
    
    int t;
    cin>>t;
    while(t--){
        ini(n);ini(k);
        vll b(n);vll c(n);
        inv(b);
        inv(c);

        vll wt(n);
        repg(0,n){
            wt[i] = dp[b[i]];
        }
        // ll num = 0;
        // repg(0,n){
        //     if(b[i]==1)
        //         num+=c[i];
        // }
        // print(wt);
        // print(c); //val
        k = min(k,12*n);
        cout<<knapSack(k,wt,c,n)<<enl;
        // vll val = { 60, 100, 120 };
        // vll wt = { 10, 20, 30 };
        // int W = 50;
        // int n = sizeof(val) / sizeof(val[0]);
     
        // cout << knapSack(W, wt, val, n)<<enl;
    }
}