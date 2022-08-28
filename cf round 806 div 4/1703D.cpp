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

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        // set<string> v;
        vector<string> vec(n), vec1(n);
        repg(0,n){
            string tmp;
            cin>>tmp;
            // v.insert(tmp);
            vec[i] = tmp;
            vec1[i] = tmp;
        }
        sort(all(vec1));
        repg(0,n){
            ll ok = 0;
            rep(size,1,sz(vec[i]),1){
                // cout<<vec[i].substr(0,size)<<" "<< vec[i].substr(size)<<enl;
                if(binary_search(all(vec1),vec[i].substr(0,size) ) && binary_search(all(vec1),vec[i].substr(size) )){
                    ok = 1  ;
                    break;
                }
            }
            cout<<ok;
        }   
        cout<<enl;
        
    }
}