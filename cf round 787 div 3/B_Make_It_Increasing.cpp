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
        ll n;
        cin>>n;
        vll a(n);
        input(a);
        int ans = 0;
        for(int i=n-2;i>=0;i--){
            if(a[i]>=a[i+1]){
                while(a[i]>=a[i+1]){
                    if(a[i]==(a[i]/2)){
                        ans = -1;
                        break;
                    }
                    a[i] = a[i]/2;
                    ans++;
                }
            } 
            if(ans == -1)
                break;
        }

        cout<<ans<<enl;
    }
}