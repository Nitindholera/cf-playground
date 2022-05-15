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
        vector<string> v(n);
        string temp;
        repg(0,n){
            cin>>temp;
            v[i] = temp;
        }
        ll ans = LONG_LONG_MAX, cur;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cur = 0;
                rep(k,0,m,1){
                    cur+= abs(v[i][k] - 'a' - (v[j][k] - 'a'));
                }
            ans = min(ans,cur);
            }
            // cout<<ans<<" ";
        }
        cout<<ans<<"\n";
    }
}