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
        int n,m,k;
        cin>>n>>m>>k;
        string a,b;
        cin>>a>>b;
        map<ll,ll> mpa,mpb;
        sort(all(a));
        sort(all(b));
        // cout<<a<<enl<<b<<enl;
        ll thres = 0, f = 0;
        int i = 0, j = 0;
        string c = "";
        while(i<n && j<m){
            if((a[i]<b[j] && f!=2) || f == 1){
                if(f==4) thres = 0;
                if(thres<k){
                    c+=a[i];
                    i++;
                    thres++;  
                    f =3;
                }  
                else{
                    thres = 0;
                    f = 2;
                }
            }
            else if((a[i]>=b[j] && f!=1)|| f==2){
                if(f==3) thres = 0;
                if(thres<k){
                    c+=b[j];
                    j++;
                    thres++;
                    f = 4;
                }
                else{
                    thres = 0;
                    f = 1;
                }
            }
        }
        cout<<c<<enl;
    }
}