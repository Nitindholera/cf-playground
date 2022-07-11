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
    t = 1;
    while(t--){
        int n,q,k;
        cin>>n>>q>>k;
        vll a(n);
        inv(a);

        vll score(n,0);
        if(n==1){
            score[0] = k-1;
        }
        else{
            repg(0,n){
                if(i==0){
                    score[i] = a[i+1]-2;
                }
                else if(i==n-1){
                    score[i] = k-a[n-2]-1;
                }
                else{
                    score[i] = a[i+1]-a[i-1]-2;
                }
            }
        }
        repg(1,n){
            score[i] = score[i] + score[i-1];
        }
        while(q--){
            ll l,r;
            cin>>l>>r;
            l--;r--;
            ll a1,a2,a3;
            
            if(l==r){
                a1 = 0;
                a2 = 0;
                a3 = k-1;
            }
            else{
                a1 = score[r-1]-score[l];
                a2 = a[l+1]-2;
                a3 = k-a[r-1]-1;
            }
            
            cout<<a1+a2+a3;
            cout<<enl;
        }
    }
}