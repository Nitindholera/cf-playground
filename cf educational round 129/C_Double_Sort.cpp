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
        vll a(n),b(n);
        inv(a);
        inv(b);

        vll a1 = a;
        vll b1 = b;
        vpll ans;
        int i, j;
        for (i = 0; i < n - 1; i++){
            for (j = 0; j < n - i - 1; j++){
                if (a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                    swap(b[j],b[j+1]);
                    ans.pb({j,j+1});
                }
                else if(a[j]==a[j+1]){
                    if(b[j]>b[j+1]){
                        swap(a[j], a[j + 1]);
                        swap(b[j],b[j+1]);
                        ans.pb({j,j+1});
                    }
                }
            }
        }

        ll f1=1,f2 = 1;

        repg(0,n-1){
            if(b[i]>b[i+1]){
                f2 = 0;
                break;
            }
        }
        

        if(f2 == 0)
            cout<<-1<<enl;
        else{
            cout<<sz(ans)<<enl;
            repg(0,sz(ans)){
                cout<<ans[i].ff+1<<" "<<ans[i].ss+1<<enl;
            }
        }
    }
}