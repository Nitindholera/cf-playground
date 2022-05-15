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
        vector<int> a(n);
        input(a);
        ll ans = 0;
        repg(0,n){
            rep(j,i+1,n,1){
                if(a[j]<=a[i])
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
    
}