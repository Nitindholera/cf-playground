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
        int n,m;
        cin>>n>>m;
        ll arr[n][m];
        repg(0,n){
            rep(j,0,m,1){
                cin>>arr[i][j];
            }
        }

        ll ans = 0;
        vector<ll> diag1(n+m-1,0), diag2(n+m-1,0);

        for(int i =0 ;i<n;i++){
            for(int j = 0;j<m;j++){
                diag1[i+j] +=arr[i][j];
                diag2[n-1+j-i]+=arr[i][j];
            }
        }

        for(int k1 = 0;k1<n+m-1;k1++){
            for(int k2 = 0;k2<n+m-1;k2++){
                if((k1+k2 +1 -n)%2==0){
                    int j = (k1+k2 +1 -n)/2;
                    int i = k1-j;
                    if(i>=0 && i<n && j>=0 && j<m){
                        //cout<<k1<<" "<<k2<<" ";
                        ans = max(ans, diag1[k1] + diag2[k2] - arr[i][j]);
                    }
                }
            }
        }
        // cout<<"\n";
        // print(diag1);
        // print(diag2);
        cout<<ans<<"\n";
    }
}