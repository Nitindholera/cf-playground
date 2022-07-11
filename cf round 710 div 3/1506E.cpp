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
        vll q(n);
        inv(q);
        vll pos, a(n,0), used(n+1,0),num;
        a[0] = q[0];
        used[q[0]] = 1;

        repg(1,n) if(q[i]!=q[i-1]){
            a[i] = q[i];
            used[q[i]] = 1;
        }

        repg(1,n+1) if(!used[i]) num.pb(i);
        repg(1,n) if(a[i]==0 && a[i-1]!=0) pos.pb(a[i-1]);

        sort(all(num));int j = 0;
        for(int i=0;i<n;i++){
            if(a[i]!=0) cout<<a[i]<<" ";
            else cout<<num[j++]<<" ";
        }
        cout<<enl;

        set<ll> pq;
        repg(0,sz(num)) pq.insert(num[i]);

        ll maximum;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                cout<<a[i]<<" ";
                maximum = a[i];
            }
            else{
                auto num2 = --pq.lower_bound(maximum);
                cout<<*num2<<" ";
                pq.erase(num2);
                
            }
        }
        cout<<enl;

    }
}