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
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define int ll
#define INF LONG_LONG_MAX

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int k,n,m;
        cin>>k>>n>>m;
        vll a(n),b(m);
        input(a);
        input(b);
        int p1= 0,p2 = 0;
        vll x;
        ll flag = 0;
        while(p1<n && p2<m){
            if(a[p1]==0){
                k++;
                x.pb(a[p1]);
                p1++;
            }
            else if(b[p2]==0){
                k++;
                x.pb(b[p2]);
                p2++;
            }
            else{
                if(a[p1]<=k){
                    x.pb(a[p1]);
                    p1++;
                }
                else if(b[p2]<=k){
                    x.pb(b[p2]);
                    p2++;
                }
                else{
                    flag = -1;
                    break;
                }
            }
        }
        if(p1<n){
            while(p1<n){
                if(a[p1]==0){
                    x.pb(a[p1]);
                    p1++;
                    k++;
                }
                else{
                    if(a[p1]>k){
                        flag = -1;
                        break;
                    }
                    else{
                        x.pb(a[p1]);
                        p1++;
                    }
                }
            }
        }
        if(p2<m){
            while(p2<m){
                if(b[p2]==0){
                    x.pb(b[p2]);
                    p2++;
                    k++;
                }
                else{
                    if(b[p2]>k){
                        flag = -1;
                        break;
                    }
                    else{
                        x.pb(b[p2]);
                        p2++;
                    }
                }
            }
        }
        // print(x);
        if(flag == -1)
            cout<<flag<<enl;
        else{
            print(x);
        }
    }
}