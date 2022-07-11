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
    string a,b;
    cin>>a>>b;
    reverse(all(a));
    reverse(all(b));
    string a1(501,'0'), b1(501,'0');
    for(int i=0;i<sz(a);i++) a1[i] = a[i];
    for(int i=0;i<sz(b);i++) b1[i] = b[i];

    string ans(501,'0');
    ll carry = 0, num;
    repg(0,501){
        num = a1[i]-'0' + b1[i]-'0' + carry;
        ans[i] = num%10 + '0'; 
        carry = num/10;

    }
    reverse(all(ans));
    ll f = 0;
    repg(0,501){
        if(f==1) cout<<ans[i];
        if(ans[i]!='0' && f==0){
            f = 1;
            cout<<ans[i];
        }
    }
}