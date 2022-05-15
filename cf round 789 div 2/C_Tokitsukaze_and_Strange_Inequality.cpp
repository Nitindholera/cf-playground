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


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n);
        input(p);

        vector<vector<int>> dp(n,vector<int>(n,0)), sudp(n,vector<int>(n,0));
        repg(0,n){
            rep(j,0,n,1){
                if(p[i]<p[j])
                    dp[i][j] = 1;
            }
        }
        if(dp[0][0]==0)
            sudp[0][0] = 1;
        repg(0,n){
            for(int j = 0; j<n;j++){
                int m1,m2,m3;
                if(j==0) m1 = 0;
                else m1 = sudp[i][j-1];
                if(i==0) m2 = 0;
                else m2 = sudp[i-1][j];
                if(i==0 || j==0) m3 = 0;
                else m3 = sudp[i-1][j-1];
                sudp[i][j] = m1+m2-m3 + 1 - dp[i][j];
            }
        }

        ll ans = 0;
        for(int a = 0;a<n;a++){
            for(int c = a+2;c<n;c++){
                if(dp[a][c] == 1){
                    int l1,l2,l3,l4;
                    if(c==0 || n==0) l1 = 0;
                    else l1 = sudp[c-1][n-1];
                    if(c==0) l2 = 0;
                    else l2 = sudp[c-1][c];
                    if(n==0) l3 = 0;
                    else l3 = sudp[a][n-1];
                    ans+=(l1 - l2 - l3 + sudp[a][c]);
                }
            }
        }
        cout<<ans<<"\n";
    }
}