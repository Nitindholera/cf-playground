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
    ini(n);
    vll a(n);
    inv(a);

    ll mn1=INF,mn2=INF,mn3=INF;

    repg(0,n-2){
        mn1 = min(mn1,(a[i]+a[i+2]+1)/2);
    }

    vll b = a;
    sort(all(b));
    mn2 = (b[0]+1)/2 + (b[1]+1)/2;

    repg(0,n-1){
        ll x = max(a[i],a[i+1]);
        ll y = min(a[i],a[i+1]);

        ll num;
        if(2*y<=x+1){
            num = (x+1)/2;
        }
        else{
            num = x-y;
            x = y = y-num;
            num+= (ceil((2*x)/(long double)3));

        }
        mn3 = min(mn3,num);

    }

    cout<<min(mn1,min(mn2,mn3));

}