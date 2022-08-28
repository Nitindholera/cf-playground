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
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        int sum = s - k*b;
        if(sum>=0 && sum<= (k-1)*n){
            vll v(n,0);
            int tmp = 0;
            while(sum>0){
                if(sum>= (k-1)){
                    sum = sum  - (k-1);
                    v[tmp] = k-1;
                    tmp++;
                }
                else{
                    v[tmp] = sum;
                    sum = 0;
                    tmp++;
                }
            }
            v[0] += k*b;
            print(v);
        }
        else{
            cout<<-1<<enl;
        }
    }
}