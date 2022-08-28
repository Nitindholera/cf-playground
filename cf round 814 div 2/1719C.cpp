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

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vll a(n);
        inv(a);
        
        while(q--){
            int i, k;
            cin>>i>>k;
            i--;
            int check = 0;
            for(int j = 0;j<i;j++) if(a[j]>a[i]){
                check = 1;
                break;
            }
            if(check) cout<<0<<enl;
            else{
                if(k<i) cout<<0<<enl;
                else{
                    int ans = 0;
                    for(int j = i+1;j<n;j++){
                        if(a[j]<a[i]) ans++;
                        else break; 
                    }
                    if(a[i]==n && (i==0 || i==1)) cout<<k<<enl;
                    else if(a[i]==n) cout<<k-i<<enl;
                    else
                        cout<<min(k-i+1, ans)<<enl;
                }
            }
        }
    }
}