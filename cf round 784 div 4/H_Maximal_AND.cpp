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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        input(a);
        vector<vector<bool>> b(n,vector<bool>(31,0));
        ll temp;

        repg(0,n){
            ll k2 = 0;
            temp = a[i];
            while(temp > 0){
                b[i][k2] = temp%2;
                temp/=2;
                k2++;
            }
        }

        vector<ll> cheat(31);

        repg(0,31){
            temp = 0;
            rep(j,0,n,1)
                if(b[j][i] == 0) temp++;
            cheat[i] = temp;
        }
        //print(cheat);

        vector<ll> ansarr(31,0);
        for(int i = 30; i>=0; i--){
            if(cheat[i] <= k){
                ansarr[i] = 1;
                k -= cheat[i];
            }
        }
        ll ans = 0, two = 1;
        repg(0,31){
            ans += ansarr[i]*two;
            two*=2;
        }
        cout<<ans<<"\n";
        // repg(0,n){
        //     rep(j,0,31,1){
        //         cout<<b[i][j];
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n";
    }
}