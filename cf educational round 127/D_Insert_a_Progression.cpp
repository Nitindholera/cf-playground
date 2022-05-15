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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        input(a);

        ll cur = 0, ans = LONG_LONG_MAX;
        repg(0,n-1 ) cur+=abs(a[i]-a[i+1]);
        ll mn;
        rep(j,0,2,1){
            mn = abs(a[0]-1LL);
            ans = min(ans, cur+abs(a[0]-x) + (x-1));

            rep(i,0,n-1,1){
                ans = min(ans, cur + mn - abs(a[i]-a[i+1]) + abs(a[i]-x) + abs(a[i+1]-x));
                ans = min(ans, cur - abs(a[i]-a[i+1]) + abs(a[i]-x) + abs(a[i+1]-1) + (x-1));
                mn = min(mn, 0LL-abs(a[i]-a[i+1]) + abs(a[i]-1) + abs(a[i+1]-1));
            }
            ans = min(ans, cur + mn + abs(a[n-1] - x));
            reverse(a.begin(), a.end());
        }
        cout<<ans<<"\n";
    }
}